#include <CppUnitLite/TestHarness.h>
#include <gtsam/base/TestableAssertions.h>
#include <gtsam/base/numericalDerivative.h>
#include <gtsam/geometry/Cal3_S2.h>
#include <gtsam/geometry/Pose3.h>
#include <gtsam/slam/InverseDepthFactor.h>

using namespace gtsam;

TEST(InverseDepthFactor, AnalyticJacobians) {
  const auto K = std::make_shared<Cal3_S2>(460.0, 458.0, 0.0, 360.0, 248.0);
  const Pose3 body_P_sensor(
      Rot3::RzRyRx(0.01, -0.02, 0.03), Point3(0.04, -0.02, 0.01));
  const Pose3 hostPose(
      Rot3::RzRyRx(0.05, -0.04, 0.03), Point3(1.0, -0.3, 0.2));
  const Pose3 targetPose(
      Rot3::RzRyRx(0.04, -0.02, 0.08), Point3(1.4, -0.25, 0.22));
  const Point2 hostPixel(375.0, 255.0);
  const double inverseDepth = 0.22;

  const Pose3 hostCamera = hostPose.compose(body_P_sensor);
  const Point2 normalized = K->calibrate(hostPixel);
  const Point3 pointHost(normalized.x() / inverseDepth,
                         normalized.y() / inverseDepth,
                         1.0 / inverseDepth);
  const Point3 pointWorld = hostCamera.transformFrom(pointHost);
  const Point2 targetPixel =
      PinholeCamera<Cal3_S2>(targetPose.compose(body_P_sensor), *K)
          .project(pointWorld);

  const auto noise = noiseModel::Isotropic::Sigma(2, 1.0);
  const InverseDepthFactor factor(targetPixel, hostPixel, noise, 1, 2, 3, K,
                                  body_P_sensor);
  Matrix H1, H2, H3;
  const Vector error = factor.evaluateError(hostPose, targetPose, inverseDepth,
                                            H1, H2, H3);
  EXPECT(assert_equal(Vector2::Zero(), error, 1e-9));

  const auto f = [&factor](const Pose3& h, const Pose3& t, const double& d) {
    return factor.evaluateError(h, t, d);
  };
  EXPECT(assert_equal(numericalDerivative31<Vector2, Pose3, Pose3, double>(
                          f, hostPose, targetPose, inverseDepth),
                      H1, 1e-6));
  EXPECT(assert_equal(numericalDerivative32<Vector2, Pose3, Pose3, double>(
                          f, hostPose, targetPose, inverseDepth),
                      H2, 1e-6));
  EXPECT(assert_equal(numericalDerivative33<Vector2, Pose3, Pose3, double>(
                          f, hostPose, targetPose, inverseDepth),
                      H3, 1e-6));
}

int main() {
  TestResult tr;
  return TestRegistry::runAllTests(tr);
}
