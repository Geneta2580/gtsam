/**
 * @file   VGGTFactor.h
 * @brief  Factor connecting two poses and a scale variable based on VGGT relative measurement
 * @author Your Name
 **/
#pragma once

#include <gtsam_unstable/dllexport.h>
#include <gtsam/nonlinear/NonlinearFactor.h>
#include <gtsam/nonlinear/NoiseModelFactorN.h>
#include <gtsam/geometry/Pose3.h>
#include <gtsam/base/Matrix.h>
#include <gtsam/base/Vector.h>

namespace gtsam {

/**
 * Factor to estimate relative pose with a scale parameter.
 * Cost function:
 * e_rot = Log( R_measured.inv * (R_i.inv * R_j) )
 * e_trans = (R_i.inv * (t_j - t_i)) - scale * t_measured
 */
class GTSAM_UNSTABLE_EXPORT VGGTFactor: public NoiseModelFactor3<Pose3, Pose3, double> {
 
 private:
   typedef NoiseModelFactor3<Pose3, Pose3, double> Base;
   
   // VGGT 测量的原始相对位姿 (Up-to-scale)
   Pose3 measured_; 
 
 public:

  /// shorthand for a smart pointer to a factor
  typedef std::shared_ptr<VGGTFactor> shared_ptr;

  // Provide access to the Matrix& version of evaluateError:
  using Base::evaluateError;

  /// Default constructor
  VGGTFactor() {}

  /// Constructor
  /// key_i: 前一帧 Pose Key
  /// key_j: 后一帧 Pose Key
  /// key_s: 当前 Clip 的 Scale Key
  /// measured: VGGT 推理出的相对位姿 T_ij (包含 R 和 t)
  /// model: 噪声模型 (6维)
  VGGTFactor(Key key_i, Key key_j, Key key_s,
             const Pose3& measured, const SharedNoiseModel& model) :
      Base(model, key_i, key_j, key_s), measured_(measured) {
  }

  ~VGGTFactor() override {}

  /// Copy
  gtsam::NonlinearFactor::shared_ptr clone() const override {
    return std::static_pointer_cast<gtsam::NonlinearFactor>(
        gtsam::NonlinearFactor::shared_ptr(new VGGTFactor(*this)));
  }

  /// Error evaluation with Jacobians
  Vector evaluateError(const Pose3& pose_i, const Pose3& pose_j, const double& scale,
                       OptionalMatrixType H1 = nullptr,
                       OptionalMatrixType H2 = nullptr,
                       OptionalMatrixType H3 = nullptr) const override;

  /// Access measurement
  const Pose3& measured() const { return measured_; }

  /// Print for debugging
  void print(const std::string& s = "", const KeyFormatter& keyFormatter = DefaultKeyFormatter) const override;

  /// Equals
  bool equals(const NonlinearFactor& expected, double tol = 1e-9) const override;
 };
 
 } // namespace gtsam