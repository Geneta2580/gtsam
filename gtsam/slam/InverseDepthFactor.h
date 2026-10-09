/* ----------------------------------------------------------------------------

 * GTSAM Copyright 2010, Georgia Tech Research Corporation,
 * Atlanta, Georgia 30332-0415
 * All Rights Reserved.

 * See LICENSE for the license information.

 * -------------------------------------------------------------------------- */

/**
 * @file InverseDepthFactor.h
 * @brief Monocular reprojection factor parameterized by host-frame inverse depth.
 */

#pragma once

#include <gtsam/geometry/Cal3_S2.h>
#include <gtsam/geometry/PinholeCamera.h>
#include <gtsam/geometry/Pose3.h>
#include <gtsam/nonlinear/NonlinearFactor.h>

#include <memory>

namespace gtsam {

/**
 * Reprojects a fixed pixel from a host camera into a target camera. The scalar
 * landmark variable is inverse depth along the host camera's normalized ray.
 * Both Pose3 variables are body poses; body_P_sensor is the fixed camera
 * extrinsic used by both observations.
 */
class GTSAM_EXPORT InverseDepthFactor
    : public NoiseModelFactorN<Pose3, Pose3, double> {
 private:
  using Base = NoiseModelFactorN<Pose3, Pose3, double>;

  Point2 measured_;
  Point2 hostMeasured_;
  std::shared_ptr<Cal3_S2> K_;
  Pose3 body_P_sensor_;

 public:
  using Base::evaluateError;
  using shared_ptr = std::shared_ptr<InverseDepthFactor>;

  InverseDepthFactor()
      : measured_(0.0, 0.0),
        hostMeasured_(0.0, 0.0),
        K_(std::make_shared<Cal3_S2>()),
        body_P_sensor_() {}

  InverseDepthFactor(const Point2& measured, const Point2& hostMeasured,
                     const SharedNoiseModel& model, Key hostPoseKey,
                     Key targetPoseKey, Key inverseDepthKey,
                     const std::shared_ptr<Cal3_S2>& K,
                     const Pose3& body_P_sensor = Pose3())
      : Base(model, hostPoseKey, targetPoseKey, inverseDepthKey),
        measured_(measured),
        hostMeasured_(hostMeasured),
        K_(K),
        body_P_sensor_(body_P_sensor) {}

  ~InverseDepthFactor() override = default;

  NonlinearFactor::shared_ptr clone() const override {
    return std::static_pointer_cast<NonlinearFactor>(
        NonlinearFactor::shared_ptr(new InverseDepthFactor(*this)));
  }

  const Point2& measured() const { return measured_; }
  const Point2& hostMeasured() const { return hostMeasured_; }
  const std::shared_ptr<Cal3_S2>& calibration() const { return K_; }
  const Pose3& body_P_sensor() const { return body_P_sensor_; }

  Vector evaluateError(const Pose3& hostPose, const Pose3& targetPose,
                       const double& inverseDepth, OptionalMatrixType H1,
                       OptionalMatrixType H2,
                       OptionalMatrixType H3) const override {
    if (inverseDepth <= 1e-9) {
      if (H1) *H1 = Matrix::Zero(2, 6);
      if (H2) *H2 = Matrix::Zero(2, 6);
      if (H3) *H3 = Matrix::Zero(2, 1);
      return Vector2::Constant(2.0 * K_->fx());
    }

    try {
      Matrix66 DhostCameraDhostPose, DtargetCameraDtargetPose;
      const Pose3 hostCamera = hostPose.compose(
          body_P_sensor_, H1 ? &DhostCameraDhostPose : nullptr, nullptr);
      const Pose3 targetCamera = targetPose.compose(
          body_P_sensor_, H2 ? &DtargetCameraDtargetPose : nullptr, nullptr);

      const Point2 normalized = K_->calibrate(hostMeasured_);
      const Point3 pointHostCamera(normalized.x() / inverseDepth,
                                   normalized.y() / inverseDepth,
                                   1.0 / inverseDepth);

      Matrix36 DpointWorldDhostCamera;
      Matrix33 DpointWorldDpointHost;
      const Point3 pointWorld = hostCamera.transformFrom(
          pointHostCamera,
          H1 ? &DpointWorldDhostCamera : nullptr,
          (H1 || H3) ? &DpointWorldDpointHost : nullptr);

      Matrix26 DprojectedDtargetCamera;
      Matrix23 DprojectedDpointWorld;
      const PinholeCamera<Cal3_S2> camera(targetCamera, *K_);
      const Point2 projected = camera.project(
          pointWorld,
          H2 ? &DprojectedDtargetCamera : nullptr,
          (H1 || H3) ? &DprojectedDpointWorld : nullptr, {});

      if (H1) {
        *H1 = DprojectedDpointWorld * DpointWorldDhostCamera *
              DhostCameraDhostPose;
      }
      if (H2) {
        *H2 = DprojectedDtargetCamera * DtargetCameraDtargetPose;
      }
      if (H3) {
        Vector3 DpointHostDinverseDepth;
        DpointHostDinverseDepth << -normalized.x() /
                                      (inverseDepth * inverseDepth),
            -normalized.y() / (inverseDepth * inverseDepth),
            -1.0 / (inverseDepth * inverseDepth);
        *H3 = DprojectedDpointWorld * DpointWorldDpointHost *
              DpointHostDinverseDepth;
      }
      return projected - measured_;
    } catch (const CheiralityException&) {
      if (H1) *H1 = Matrix::Zero(2, 6);
      if (H2) *H2 = Matrix::Zero(2, 6);
      if (H3) *H3 = Matrix::Zero(2, 1);
      return Vector2::Constant(2.0 * K_->fx());
    }
  }
};

}  // namespace gtsam

