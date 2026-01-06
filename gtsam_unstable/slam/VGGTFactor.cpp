#include "VGGTFactor.h"
#include <gtsam/base/numericalDerivative.h>
#include <gtsam/geometry/Rot3.h>
#include <functional>

using namespace std;

namespace gtsam {

// *************************************************************************
// 这是一个纯粹的误差计算函数，不涉及雅可比
// 我们把它定义为静态辅助函数，或者直接在 evaluateError 里写 lambda 也可以
Vector vggt_error_func(const Pose3& pose_i, const Pose3& pose_j, const double& scale, 
                       const Pose3& measured) {
    // 1. 旋转误差 (不受 Scale 影响)
    // predicted_relative = P_i.inverse * P_j
    Pose3 predicted_relative = pose_i.between(pose_j);
    // error_rot = Log( measured.R.inverse * predicted.R )
    // 使用 Rot3::Logmap 计算旋转误差
    Rot3 R_error = measured.rotation().inverse() * predicted_relative.rotation();
    Vector3 error_rot = Rot3::Logmap(R_error);
    
    // 2. 平移误差 (受 Scale 影响)
    // 将物理世界两帧的位移转换到 i 帧的局部坐标系下
    // t_local = R_i.inv * (t_j - t_i)
    // Pose3::between 计算的 translation 正好就是 R_i.inv * (t_j - t_i)
    Point3 t_physical_local = predicted_relative.translation();
    
    // VGGT 测量值 (Up-to-scale)
    Point3 t_vggt = measured.translation();
    
    // 目标：t_physical_local - (scale * t_vggt)
    Point3 error_trans = t_physical_local - (scale * t_vggt);
    
    // 3. 拼接误差 (6维)
    Vector error = (Vector(6) << error_rot, error_trans).finished();
    return error;
}

// *************************************************************************
Vector VGGTFactor::evaluateError(const Pose3& pose_i, const Pose3& pose_j, const double& scale,
                                 OptionalMatrixType H1,
                                 OptionalMatrixType H2,
                                 OptionalMatrixType H3) const {
    
    // 1. 计算当前误差值
    Vector error = vggt_error_func(pose_i, pose_j, scale, measured_);
    
    // 2. 自动计算雅可比 (Numerical Differentiation)
    std::function<Vector(const Pose3&, const Pose3&, const double&)> func =
        [this](const Pose3& pi, const Pose3& pj, const double& s) {
            return vggt_error_func(pi, pj, s, this->measured_);
        };
    
    if (H1) {
        // 使用 numericalDerivative31 对第一个参数 (pi) 求导
        *H1 = numericalDerivative31<Vector, Pose3, Pose3, double>(
            func, pose_i, pose_j, scale, 1e-5
        );
    }
    
    if (H2) {
        // 使用 numericalDerivative32 对第二个参数 (pj) 求导
        *H2 = numericalDerivative32<Vector, Pose3, Pose3, double>(
            func, pose_i, pose_j, scale, 1e-5
        );
    }
    
    if (H3) {
        // 使用 numericalDerivative33 对第三个参数 (scale) 求导
        *H3 = numericalDerivative33<Vector, Pose3, Pose3, double>(
            func, pose_i, pose_j, scale, 1e-5
        );
    }
    
    return error;
}

// *************************************************************************
void VGGTFactor::print(const std::string& s, const KeyFormatter& keyFormatter) const {
    std::cout << s << "VGGTFactor("
              << keyFormatter(this->key<1>()) << ","
              << keyFormatter(this->key<2>()) << ","
              << keyFormatter(this->key<3>()) << ")\n";
    measured_.print("  measured: ");
    if (this->noiseModel_) {
        this->noiseModel_->print("  noise model: ");
    }
}

// *************************************************************************
bool VGGTFactor::equals(const NonlinearFactor& expected, double tol) const {
    const VGGTFactor* e = dynamic_cast<const VGGTFactor*>(&expected);
    return e != nullptr && Base::equals(expected, tol) &&
           measured_.equals(e->measured_, tol);
}

} // namespace gtsam