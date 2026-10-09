/**
 * @file    values.cpp
 * @brief   The auto-generated wrapper C++ source code.
 * @author  Duy-Nguyen Ta, Fan Jiang, Matthew Sklar, Varun Agrawal
 * @date    Aug. 18, 2020
 *
 * ** THIS FILE IS AUTO-GENERATED, DO NOT MODIFY! **
 */

#define PYBIND11_DETAILED_ERROR_MESSAGES

#include <pybind11/eigen.h>
#include <pybind11/stl_bind.h>
#include <pybind11/stl.h>
#include <pybind11/pybind11.h>
#include <pybind11/operators.h>
#include <pybind11/functional.h>
#include <pybind11/iostream.h>
#include "gtsam/config.h"
#include "gtsam/base/serialization.h"
#include "gtsam/base/utilities.h"  // for RedirectCout.

// These are the included headers listed in `gtsam.i`
#include "gtsam/geometry/Cal3Bundler.h"
#include "gtsam/geometry/Cal3DS2.h"
#include "gtsam/geometry/Cal3Fisheye.h"
#include "gtsam/geometry/Cal3Unified.h"
#include "gtsam/geometry/Cal3_S2.h"
#include "gtsam/geometry/CalibratedCamera.h"
#include "gtsam/geometry/EssentialMatrix.h"
#include "gtsam/geometry/PinholeCamera.h"
#include "gtsam/geometry/Point2.h"
#include "gtsam/geometry/Point3.h"
#include "gtsam/geometry/Pose2.h"
#include "gtsam/geometry/Pose3.h"
#include "gtsam/geometry/Rot2.h"
#include "gtsam/geometry/Rot3.h"
#include "gtsam/geometry/SO3.h"
#include "gtsam/geometry/SO4.h"
#include "gtsam/geometry/SOn.h"
#include "gtsam/geometry/StereoPoint2.h"
#include "gtsam/geometry/Unit3.h"
#include "gtsam/navigation/ImuBias.h"
#include "gtsam/navigation/NavState.h"
#include "gtsam/linear/VectorValues.h"
#include "gtsam/nonlinear/Values.h"
#include <boost/serialization/export.hpp>
#include <boost/serialization/export.hpp>

// Export classes for serialization
BOOST_CLASS_EXPORT(gtsam::Values)


// Preamble for STL classes
#include "python/gtsam/preamble/values.h"

using namespace std;

namespace py = pybind11;



void values(py::module_ &m_) {
    m_.doc() = "pybind11 wrapper of values";




    py::class_<gtsam::Values, std::shared_ptr<gtsam::Values>>(m_, "Values")
        .def(py::init<>())
        .def(py::init<const gtsam::Values&>(), py::arg("other"))
        .def("size",[](gtsam::Values* self){return self->size();})
        .def("empty",[](gtsam::Values* self){return self->empty();})
        .def("clear",[](gtsam::Values* self){ self->clear();})
        .def("dim",[](gtsam::Values* self){return self->dim();})
        .def("print",[](gtsam::Values* self, string s, const gtsam::KeyFormatter& keyFormatter){ py::scoped_ostream_redirect output; self->print(s, keyFormatter);}, py::arg("s") = "", py::arg("keyFormatter") = gtsam::DefaultKeyFormatter)
        .def("__repr__",
                    [](const gtsam::Values& self, string s, const gtsam::KeyFormatter& keyFormatter){
                        gtsam::RedirectCout redirect;
                        self.print(s, keyFormatter);
                        return redirect.str();
                    }, py::arg("s") = "", py::arg("keyFormatter") = gtsam::DefaultKeyFormatter)
        .def("equals",[](gtsam::Values* self, const gtsam::Values& other, double tol){return self->equals(other, tol);}, py::arg("other"), py::arg("tol"))
        .def("insert",[](gtsam::Values* self, const gtsam::Values& values){ self->insert(values);}, py::arg("values"))
        .def("update",[](gtsam::Values* self, const gtsam::Values& values){ self->update(values);}, py::arg("values"))
        .def("insert_or_assign",[](gtsam::Values* self, const gtsam::Values& values){ self->insert_or_assign(values);}, py::arg("values"))
        .def("erase",[](gtsam::Values* self, size_t j){ self->erase(j);}, py::arg("j"))
        .def("swap",[](gtsam::Values* self, gtsam::Values& values){ self->swap(values);}, py::arg("values"))
        .def("exists",[](gtsam::Values* self, size_t j){return self->exists(j);}, py::arg("j"))
        .def("keys",[](gtsam::Values* self){return self->keys();})
        .def("zeroVectors",[](gtsam::Values* self){return self->zeroVectors();})
        .def("retract",[](gtsam::Values* self, const gtsam::VectorValues& delta){return self->retract(delta);}, py::arg("delta"))
        .def("localCoordinates",[](gtsam::Values* self, const gtsam::Values& cp){return self->localCoordinates(cp);}, py::arg("cp"))
        .def("serialize", [](gtsam::Values* self){ return gtsam::serialize(*self); })
        .def("deserialize", [](gtsam::Values* self, string serialized){ gtsam::deserialize(serialized, *self); }, py::arg("serialized"))
        .def(py::pickle(
            [](const gtsam::Values &a){ /* __getstate__: Returns a string that encodes the state of the object */ return py::make_tuple(gtsam::serialize(a)); },
            [](py::tuple t){ /* __setstate__ */ gtsam::Values obj; gtsam::deserialize(t[0].cast<std::string>(), obj); return obj; }))
        .def("insert_vector",[](gtsam::Values* self, size_t j, const gtsam::Vector& vector){ self->insert(j, vector);}, py::arg("j"), py::arg("vector"))
        .def("insert",[](gtsam::Values* self, size_t j, const gtsam::Vector& vector){ self->insert(j, vector);}, py::arg("j"), py::arg("vector"))
        .def("insert_matrix",[](gtsam::Values* self, size_t j, const gtsam::Matrix& matrix){ self->insert(j, matrix);}, py::arg("j"), py::arg("matrix"))
        .def("insert",[](gtsam::Values* self, size_t j, const gtsam::Matrix& matrix){ self->insert(j, matrix);}, py::arg("j"), py::arg("matrix"))
        .def("insert_point2",[](gtsam::Values* self, size_t j, const gtsam::Point2& point2){ self->insert(j, point2);}, py::arg("j"), py::arg("point2"))
        .def("insert",[](gtsam::Values* self, size_t j, const gtsam::Point2& point2){ self->insert(j, point2);}, py::arg("j"), py::arg("point2"))
        .def("insert_point3",[](gtsam::Values* self, size_t j, const gtsam::Point3& point3){ self->insert(j, point3);}, py::arg("j"), py::arg("point3"))
        .def("insert",[](gtsam::Values* self, size_t j, const gtsam::Point3& point3){ self->insert(j, point3);}, py::arg("j"), py::arg("point3"))
        .def("insert_rot2",[](gtsam::Values* self, size_t j, const gtsam::Rot2& rot2){ self->insert(j, rot2);}, py::arg("j"), py::arg("rot2"))
        .def("insert",[](gtsam::Values* self, size_t j, const gtsam::Rot2& rot2){ self->insert(j, rot2);}, py::arg("j"), py::arg("rot2"))
        .def("insert_pose2",[](gtsam::Values* self, size_t j, const gtsam::Pose2& pose2){ self->insert(j, pose2);}, py::arg("j"), py::arg("pose2"))
        .def("insert",[](gtsam::Values* self, size_t j, const gtsam::Pose2& pose2){ self->insert(j, pose2);}, py::arg("j"), py::arg("pose2"))
        .def("insert_R",[](gtsam::Values* self, size_t j, const gtsam::SO3& R){ self->insert(j, R);}, py::arg("j"), py::arg("R"))
        .def("insert",[](gtsam::Values* self, size_t j, const gtsam::SO3& R){ self->insert(j, R);}, py::arg("j"), py::arg("R"))
        .def("insert_Q",[](gtsam::Values* self, size_t j, const gtsam::SO4& Q){ self->insert(j, Q);}, py::arg("j"), py::arg("Q"))
        .def("insert",[](gtsam::Values* self, size_t j, const gtsam::SO4& Q){ self->insert(j, Q);}, py::arg("j"), py::arg("Q"))
        .def("insert_P",[](gtsam::Values* self, size_t j, const gtsam::SOn& P){ self->insert(j, P);}, py::arg("j"), py::arg("P"))
        .def("insert",[](gtsam::Values* self, size_t j, const gtsam::SOn& P){ self->insert(j, P);}, py::arg("j"), py::arg("P"))
        .def("insert_rot3",[](gtsam::Values* self, size_t j, const gtsam::Rot3& rot3){ self->insert(j, rot3);}, py::arg("j"), py::arg("rot3"))
        .def("insert",[](gtsam::Values* self, size_t j, const gtsam::Rot3& rot3){ self->insert(j, rot3);}, py::arg("j"), py::arg("rot3"))
        .def("insert_pose3",[](gtsam::Values* self, size_t j, const gtsam::Pose3& pose3){ self->insert(j, pose3);}, py::arg("j"), py::arg("pose3"))
        .def("insert",[](gtsam::Values* self, size_t j, const gtsam::Pose3& pose3){ self->insert(j, pose3);}, py::arg("j"), py::arg("pose3"))
        .def("insert_unit3",[](gtsam::Values* self, size_t j, const gtsam::Unit3& unit3){ self->insert(j, unit3);}, py::arg("j"), py::arg("unit3"))
        .def("insert",[](gtsam::Values* self, size_t j, const gtsam::Unit3& unit3){ self->insert(j, unit3);}, py::arg("j"), py::arg("unit3"))
        .def("insert_cal3_s2",[](gtsam::Values* self, size_t j, const gtsam::Cal3_S2& cal3_s2){ self->insert(j, cal3_s2);}, py::arg("j"), py::arg("cal3_s2"))
        .def("insert",[](gtsam::Values* self, size_t j, const gtsam::Cal3_S2& cal3_s2){ self->insert(j, cal3_s2);}, py::arg("j"), py::arg("cal3_s2"))
        .def("insert_cal3ds2",[](gtsam::Values* self, size_t j, const gtsam::Cal3DS2& cal3ds2){ self->insert(j, cal3ds2);}, py::arg("j"), py::arg("cal3ds2"))
        .def("insert",[](gtsam::Values* self, size_t j, const gtsam::Cal3DS2& cal3ds2){ self->insert(j, cal3ds2);}, py::arg("j"), py::arg("cal3ds2"))
        .def("insert_cal3bundler",[](gtsam::Values* self, size_t j, const gtsam::Cal3Bundler& cal3bundler){ self->insert(j, cal3bundler);}, py::arg("j"), py::arg("cal3bundler"))
        .def("insert",[](gtsam::Values* self, size_t j, const gtsam::Cal3Bundler& cal3bundler){ self->insert(j, cal3bundler);}, py::arg("j"), py::arg("cal3bundler"))
        .def("insert_cal3fisheye",[](gtsam::Values* self, size_t j, const gtsam::Cal3Fisheye& cal3fisheye){ self->insert(j, cal3fisheye);}, py::arg("j"), py::arg("cal3fisheye"))
        .def("insert",[](gtsam::Values* self, size_t j, const gtsam::Cal3Fisheye& cal3fisheye){ self->insert(j, cal3fisheye);}, py::arg("j"), py::arg("cal3fisheye"))
        .def("insert_cal3unified",[](gtsam::Values* self, size_t j, const gtsam::Cal3Unified& cal3unified){ self->insert(j, cal3unified);}, py::arg("j"), py::arg("cal3unified"))
        .def("insert",[](gtsam::Values* self, size_t j, const gtsam::Cal3Unified& cal3unified){ self->insert(j, cal3unified);}, py::arg("j"), py::arg("cal3unified"))
        .def("insert_essential_matrix",[](gtsam::Values* self, size_t j, const gtsam::EssentialMatrix& essential_matrix){ self->insert(j, essential_matrix);}, py::arg("j"), py::arg("essential_matrix"))
        .def("insert",[](gtsam::Values* self, size_t j, const gtsam::EssentialMatrix& essential_matrix){ self->insert(j, essential_matrix);}, py::arg("j"), py::arg("essential_matrix"))
        .def("insert_camera",[](gtsam::Values* self, size_t j, const gtsam::PinholeCamera<gtsam::Cal3_S2>& camera){ self->insert(j, camera);}, py::arg("j"), py::arg("camera"))
        .def("insert",[](gtsam::Values* self, size_t j, const gtsam::PinholeCamera<gtsam::Cal3_S2>& camera){ self->insert(j, camera);}, py::arg("j"), py::arg("camera"))
        .def("insert_camera",[](gtsam::Values* self, size_t j, const gtsam::PinholeCamera<gtsam::Cal3Bundler>& camera){ self->insert(j, camera);}, py::arg("j"), py::arg("camera"))
        .def("insert",[](gtsam::Values* self, size_t j, const gtsam::PinholeCamera<gtsam::Cal3Bundler>& camera){ self->insert(j, camera);}, py::arg("j"), py::arg("camera"))
        .def("insert_camera",[](gtsam::Values* self, size_t j, const gtsam::PinholeCamera<gtsam::Cal3Fisheye>& camera){ self->insert(j, camera);}, py::arg("j"), py::arg("camera"))
        .def("insert",[](gtsam::Values* self, size_t j, const gtsam::PinholeCamera<gtsam::Cal3Fisheye>& camera){ self->insert(j, camera);}, py::arg("j"), py::arg("camera"))
        .def("insert_camera",[](gtsam::Values* self, size_t j, const gtsam::PinholeCamera<gtsam::Cal3Unified>& camera){ self->insert(j, camera);}, py::arg("j"), py::arg("camera"))
        .def("insert",[](gtsam::Values* self, size_t j, const gtsam::PinholeCamera<gtsam::Cal3Unified>& camera){ self->insert(j, camera);}, py::arg("j"), py::arg("camera"))
        .def("insert_camera",[](gtsam::Values* self, size_t j, const gtsam::PinholePose<gtsam::Cal3_S2>& camera){ self->insert(j, camera);}, py::arg("j"), py::arg("camera"))
        .def("insert",[](gtsam::Values* self, size_t j, const gtsam::PinholePose<gtsam::Cal3_S2>& camera){ self->insert(j, camera);}, py::arg("j"), py::arg("camera"))
        .def("insert_camera",[](gtsam::Values* self, size_t j, const gtsam::PinholePose<gtsam::Cal3Bundler>& camera){ self->insert(j, camera);}, py::arg("j"), py::arg("camera"))
        .def("insert",[](gtsam::Values* self, size_t j, const gtsam::PinholePose<gtsam::Cal3Bundler>& camera){ self->insert(j, camera);}, py::arg("j"), py::arg("camera"))
        .def("insert_camera",[](gtsam::Values* self, size_t j, const gtsam::PinholePose<gtsam::Cal3Fisheye>& camera){ self->insert(j, camera);}, py::arg("j"), py::arg("camera"))
        .def("insert",[](gtsam::Values* self, size_t j, const gtsam::PinholePose<gtsam::Cal3Fisheye>& camera){ self->insert(j, camera);}, py::arg("j"), py::arg("camera"))
        .def("insert_camera",[](gtsam::Values* self, size_t j, const gtsam::PinholePose<gtsam::Cal3Unified>& camera){ self->insert(j, camera);}, py::arg("j"), py::arg("camera"))
        .def("insert",[](gtsam::Values* self, size_t j, const gtsam::PinholePose<gtsam::Cal3Unified>& camera){ self->insert(j, camera);}, py::arg("j"), py::arg("camera"))
        .def("insert_constant_bias",[](gtsam::Values* self, size_t j, const gtsam::imuBias::ConstantBias& constant_bias){ self->insert(j, constant_bias);}, py::arg("j"), py::arg("constant_bias"))
        .def("insert",[](gtsam::Values* self, size_t j, const gtsam::imuBias::ConstantBias& constant_bias){ self->insert(j, constant_bias);}, py::arg("j"), py::arg("constant_bias"))
        .def("insert_nav_state",[](gtsam::Values* self, size_t j, const gtsam::NavState& nav_state){ self->insert(j, nav_state);}, py::arg("j"), py::arg("nav_state"))
        .def("insert",[](gtsam::Values* self, size_t j, const gtsam::NavState& nav_state){ self->insert(j, nav_state);}, py::arg("j"), py::arg("nav_state"))
        .def("insert_c",[](gtsam::Values* self, size_t j, double c){ self->insert(j, c);}, py::arg("j"), py::arg("c"))
        .def("insert",[](gtsam::Values* self, size_t j, double c){ self->insert(j, c);}, py::arg("j"), py::arg("c"))
        .def("insertPoint2",[](gtsam::Values* self, size_t j, const gtsam::Point2& val){ self->insert<gtsam::Point2>(j, val);}, py::arg("j"), py::arg("val"))
        .def("insertPoint3",[](gtsam::Values* self, size_t j, const gtsam::Point3& val){ self->insert<gtsam::Point3>(j, val);}, py::arg("j"), py::arg("val"))
        .def("update",[](gtsam::Values* self, size_t j, const gtsam::Point2& point2){ self->update(j, point2);}, py::arg("j"), py::arg("point2"))
        .def("update",[](gtsam::Values* self, size_t j, const gtsam::Point3& point3){ self->update(j, point3);}, py::arg("j"), py::arg("point3"))
        .def("update",[](gtsam::Values* self, size_t j, const gtsam::Rot2& rot2){ self->update(j, rot2);}, py::arg("j"), py::arg("rot2"))
        .def("update",[](gtsam::Values* self, size_t j, const gtsam::Pose2& pose2){ self->update(j, pose2);}, py::arg("j"), py::arg("pose2"))
        .def("update",[](gtsam::Values* self, size_t j, const gtsam::SO3& R){ self->update(j, R);}, py::arg("j"), py::arg("R"))
        .def("update",[](gtsam::Values* self, size_t j, const gtsam::SO4& Q){ self->update(j, Q);}, py::arg("j"), py::arg("Q"))
        .def("update",[](gtsam::Values* self, size_t j, const gtsam::SOn& P){ self->update(j, P);}, py::arg("j"), py::arg("P"))
        .def("update",[](gtsam::Values* self, size_t j, const gtsam::Rot3& rot3){ self->update(j, rot3);}, py::arg("j"), py::arg("rot3"))
        .def("update",[](gtsam::Values* self, size_t j, const gtsam::Pose3& pose3){ self->update(j, pose3);}, py::arg("j"), py::arg("pose3"))
        .def("update",[](gtsam::Values* self, size_t j, const gtsam::Unit3& unit3){ self->update(j, unit3);}, py::arg("j"), py::arg("unit3"))
        .def("update",[](gtsam::Values* self, size_t j, const gtsam::Cal3_S2& cal3_s2){ self->update(j, cal3_s2);}, py::arg("j"), py::arg("cal3_s2"))
        .def("update",[](gtsam::Values* self, size_t j, const gtsam::Cal3DS2& cal3ds2){ self->update(j, cal3ds2);}, py::arg("j"), py::arg("cal3ds2"))
        .def("update",[](gtsam::Values* self, size_t j, const gtsam::Cal3Bundler& cal3bundler){ self->update(j, cal3bundler);}, py::arg("j"), py::arg("cal3bundler"))
        .def("update",[](gtsam::Values* self, size_t j, const gtsam::Cal3Fisheye& cal3fisheye){ self->update(j, cal3fisheye);}, py::arg("j"), py::arg("cal3fisheye"))
        .def("update",[](gtsam::Values* self, size_t j, const gtsam::Cal3Unified& cal3unified){ self->update(j, cal3unified);}, py::arg("j"), py::arg("cal3unified"))
        .def("update",[](gtsam::Values* self, size_t j, const gtsam::EssentialMatrix& essential_matrix){ self->update(j, essential_matrix);}, py::arg("j"), py::arg("essential_matrix"))
        .def("update",[](gtsam::Values* self, size_t j, const gtsam::PinholeCamera<gtsam::Cal3_S2>& camera){ self->update(j, camera);}, py::arg("j"), py::arg("camera"))
        .def("update",[](gtsam::Values* self, size_t j, const gtsam::PinholeCamera<gtsam::Cal3Bundler>& camera){ self->update(j, camera);}, py::arg("j"), py::arg("camera"))
        .def("update",[](gtsam::Values* self, size_t j, const gtsam::PinholeCamera<gtsam::Cal3Fisheye>& camera){ self->update(j, camera);}, py::arg("j"), py::arg("camera"))
        .def("update",[](gtsam::Values* self, size_t j, const gtsam::PinholeCamera<gtsam::Cal3Unified>& camera){ self->update(j, camera);}, py::arg("j"), py::arg("camera"))
        .def("update",[](gtsam::Values* self, size_t j, const gtsam::PinholePose<gtsam::Cal3_S2>& camera){ self->update(j, camera);}, py::arg("j"), py::arg("camera"))
        .def("update",[](gtsam::Values* self, size_t j, const gtsam::PinholePose<gtsam::Cal3Bundler>& camera){ self->update(j, camera);}, py::arg("j"), py::arg("camera"))
        .def("update",[](gtsam::Values* self, size_t j, const gtsam::PinholePose<gtsam::Cal3Fisheye>& camera){ self->update(j, camera);}, py::arg("j"), py::arg("camera"))
        .def("update",[](gtsam::Values* self, size_t j, const gtsam::PinholePose<gtsam::Cal3Unified>& camera){ self->update(j, camera);}, py::arg("j"), py::arg("camera"))
        .def("update",[](gtsam::Values* self, size_t j, const gtsam::imuBias::ConstantBias& constant_bias){ self->update(j, constant_bias);}, py::arg("j"), py::arg("constant_bias"))
        .def("update",[](gtsam::Values* self, size_t j, const gtsam::NavState& nav_state){ self->update(j, nav_state);}, py::arg("j"), py::arg("nav_state"))
        .def("update",[](gtsam::Values* self, size_t j, const gtsam::Vector& vector){ self->update(j, vector);}, py::arg("j"), py::arg("vector"))
        .def("update",[](gtsam::Values* self, size_t j, const gtsam::Matrix& matrix){ self->update(j, matrix);}, py::arg("j"), py::arg("matrix"))
        .def("update",[](gtsam::Values* self, size_t j, double c){ self->update(j, c);}, py::arg("j"), py::arg("c"))
        .def("insert_or_assign",[](gtsam::Values* self, size_t j, const gtsam::Point2& point2){ self->insert_or_assign(j, point2);}, py::arg("j"), py::arg("point2"))
        .def("insert_or_assign",[](gtsam::Values* self, size_t j, const gtsam::Point3& point3){ self->insert_or_assign(j, point3);}, py::arg("j"), py::arg("point3"))
        .def("insert_or_assign",[](gtsam::Values* self, size_t j, const gtsam::Rot2& rot2){ self->insert_or_assign(j, rot2);}, py::arg("j"), py::arg("rot2"))
        .def("insert_or_assign",[](gtsam::Values* self, size_t j, const gtsam::Pose2& pose2){ self->insert_or_assign(j, pose2);}, py::arg("j"), py::arg("pose2"))
        .def("insert_or_assign",[](gtsam::Values* self, size_t j, const gtsam::SO3& R){ self->insert_or_assign(j, R);}, py::arg("j"), py::arg("R"))
        .def("insert_or_assign",[](gtsam::Values* self, size_t j, const gtsam::SO4& Q){ self->insert_or_assign(j, Q);}, py::arg("j"), py::arg("Q"))
        .def("insert_or_assign",[](gtsam::Values* self, size_t j, const gtsam::SOn& P){ self->insert_or_assign(j, P);}, py::arg("j"), py::arg("P"))
        .def("insert_or_assign",[](gtsam::Values* self, size_t j, const gtsam::Rot3& rot3){ self->insert_or_assign(j, rot3);}, py::arg("j"), py::arg("rot3"))
        .def("insert_or_assign",[](gtsam::Values* self, size_t j, const gtsam::Pose3& pose3){ self->insert_or_assign(j, pose3);}, py::arg("j"), py::arg("pose3"))
        .def("insert_or_assign",[](gtsam::Values* self, size_t j, const gtsam::Unit3& unit3){ self->insert_or_assign(j, unit3);}, py::arg("j"), py::arg("unit3"))
        .def("insert_or_assign",[](gtsam::Values* self, size_t j, const gtsam::Cal3_S2& cal3_s2){ self->insert_or_assign(j, cal3_s2);}, py::arg("j"), py::arg("cal3_s2"))
        .def("insert_or_assign",[](gtsam::Values* self, size_t j, const gtsam::Cal3DS2& cal3ds2){ self->insert_or_assign(j, cal3ds2);}, py::arg("j"), py::arg("cal3ds2"))
        .def("insert_or_assign",[](gtsam::Values* self, size_t j, const gtsam::Cal3Bundler& cal3bundler){ self->insert_or_assign(j, cal3bundler);}, py::arg("j"), py::arg("cal3bundler"))
        .def("insert_or_assign",[](gtsam::Values* self, size_t j, const gtsam::Cal3Fisheye& cal3fisheye){ self->insert_or_assign(j, cal3fisheye);}, py::arg("j"), py::arg("cal3fisheye"))
        .def("insert_or_assign",[](gtsam::Values* self, size_t j, const gtsam::Cal3Unified& cal3unified){ self->insert_or_assign(j, cal3unified);}, py::arg("j"), py::arg("cal3unified"))
        .def("insert_or_assign",[](gtsam::Values* self, size_t j, const gtsam::EssentialMatrix& essential_matrix){ self->insert_or_assign(j, essential_matrix);}, py::arg("j"), py::arg("essential_matrix"))
        .def("insert_or_assign",[](gtsam::Values* self, size_t j, const gtsam::PinholeCamera<gtsam::Cal3_S2>& camera){ self->insert_or_assign(j, camera);}, py::arg("j"), py::arg("camera"))
        .def("insert_or_assign",[](gtsam::Values* self, size_t j, const gtsam::PinholeCamera<gtsam::Cal3Bundler>& camera){ self->insert_or_assign(j, camera);}, py::arg("j"), py::arg("camera"))
        .def("insert_or_assign",[](gtsam::Values* self, size_t j, const gtsam::PinholeCamera<gtsam::Cal3Fisheye>& camera){ self->insert_or_assign(j, camera);}, py::arg("j"), py::arg("camera"))
        .def("insert_or_assign",[](gtsam::Values* self, size_t j, const gtsam::PinholeCamera<gtsam::Cal3Unified>& camera){ self->insert_or_assign(j, camera);}, py::arg("j"), py::arg("camera"))
        .def("insert_or_assign",[](gtsam::Values* self, size_t j, const gtsam::PinholePose<gtsam::Cal3_S2>& camera){ self->insert_or_assign(j, camera);}, py::arg("j"), py::arg("camera"))
        .def("insert_or_assign",[](gtsam::Values* self, size_t j, const gtsam::PinholePose<gtsam::Cal3Bundler>& camera){ self->insert_or_assign(j, camera);}, py::arg("j"), py::arg("camera"))
        .def("insert_or_assign",[](gtsam::Values* self, size_t j, const gtsam::PinholePose<gtsam::Cal3Fisheye>& camera){ self->insert_or_assign(j, camera);}, py::arg("j"), py::arg("camera"))
        .def("insert_or_assign",[](gtsam::Values* self, size_t j, const gtsam::PinholePose<gtsam::Cal3Unified>& camera){ self->insert_or_assign(j, camera);}, py::arg("j"), py::arg("camera"))
        .def("insert_or_assign",[](gtsam::Values* self, size_t j, const gtsam::imuBias::ConstantBias& constant_bias){ self->insert_or_assign(j, constant_bias);}, py::arg("j"), py::arg("constant_bias"))
        .def("insert_or_assign",[](gtsam::Values* self, size_t j, const gtsam::NavState& nav_state){ self->insert_or_assign(j, nav_state);}, py::arg("j"), py::arg("nav_state"))
        .def("insert_or_assign",[](gtsam::Values* self, size_t j, const gtsam::Vector& vector){ self->insert_or_assign(j, vector);}, py::arg("j"), py::arg("vector"))
        .def("insert_or_assign",[](gtsam::Values* self, size_t j, const gtsam::Matrix& matrix){ self->insert_or_assign(j, matrix);}, py::arg("j"), py::arg("matrix"))
        .def("insert_or_assign",[](gtsam::Values* self, size_t j, double c){ self->insert_or_assign(j, c);}, py::arg("j"), py::arg("c"))
        .def("atPoint2",[](gtsam::Values* self, size_t j){return self->at<gtsam::Point2>(j);}, py::arg("j"))
        .def("atPoint3",[](gtsam::Values* self, size_t j){return self->at<gtsam::Point3>(j);}, py::arg("j"))
        .def("atRot2",[](gtsam::Values* self, size_t j){return self->at<gtsam::Rot2>(j);}, py::arg("j"))
        .def("atPose2",[](gtsam::Values* self, size_t j){return self->at<gtsam::Pose2>(j);}, py::arg("j"))
        .def("atSO3",[](gtsam::Values* self, size_t j){return self->at<gtsam::SO3>(j);}, py::arg("j"))
        .def("atSO4",[](gtsam::Values* self, size_t j){return self->at<gtsam::SO4>(j);}, py::arg("j"))
        .def("atSOn",[](gtsam::Values* self, size_t j){return self->at<gtsam::SOn>(j);}, py::arg("j"))
        .def("atRot3",[](gtsam::Values* self, size_t j){return self->at<gtsam::Rot3>(j);}, py::arg("j"))
        .def("atPose3",[](gtsam::Values* self, size_t j){return self->at<gtsam::Pose3>(j);}, py::arg("j"))
        .def("atUnit3",[](gtsam::Values* self, size_t j){return self->at<gtsam::Unit3>(j);}, py::arg("j"))
        .def("atCal3_S2",[](gtsam::Values* self, size_t j){return self->at<gtsam::Cal3_S2>(j);}, py::arg("j"))
        .def("atCal3DS2",[](gtsam::Values* self, size_t j){return self->at<gtsam::Cal3DS2>(j);}, py::arg("j"))
        .def("atCal3Bundler",[](gtsam::Values* self, size_t j){return self->at<gtsam::Cal3Bundler>(j);}, py::arg("j"))
        .def("atCal3Fisheye",[](gtsam::Values* self, size_t j){return self->at<gtsam::Cal3Fisheye>(j);}, py::arg("j"))
        .def("atCal3Unified",[](gtsam::Values* self, size_t j){return self->at<gtsam::Cal3Unified>(j);}, py::arg("j"))
        .def("atEssentialMatrix",[](gtsam::Values* self, size_t j){return self->at<gtsam::EssentialMatrix>(j);}, py::arg("j"))
        .def("atPinholeCameraCal3_S2",[](gtsam::Values* self, size_t j){return self->at<gtsam::PinholeCamera<gtsam::Cal3_S2>>(j);}, py::arg("j"))
        .def("atPinholeCameraCal3Bundler",[](gtsam::Values* self, size_t j){return self->at<gtsam::PinholeCamera<gtsam::Cal3Bundler>>(j);}, py::arg("j"))
        .def("atPinholeCameraCal3Fisheye",[](gtsam::Values* self, size_t j){return self->at<gtsam::PinholeCamera<gtsam::Cal3Fisheye>>(j);}, py::arg("j"))
        .def("atPinholeCameraCal3Unified",[](gtsam::Values* self, size_t j){return self->at<gtsam::PinholeCamera<gtsam::Cal3Unified>>(j);}, py::arg("j"))
        .def("atPinholePoseCal3_S2",[](gtsam::Values* self, size_t j){return self->at<gtsam::PinholePose<gtsam::Cal3_S2>>(j);}, py::arg("j"))
        .def("atPinholePoseCal3Bundler",[](gtsam::Values* self, size_t j){return self->at<gtsam::PinholePose<gtsam::Cal3Bundler>>(j);}, py::arg("j"))
        .def("atPinholePoseCal3Fisheye",[](gtsam::Values* self, size_t j){return self->at<gtsam::PinholePose<gtsam::Cal3Fisheye>>(j);}, py::arg("j"))
        .def("atPinholePoseCal3Unified",[](gtsam::Values* self, size_t j){return self->at<gtsam::PinholePose<gtsam::Cal3Unified>>(j);}, py::arg("j"))
        .def("atConstantBias",[](gtsam::Values* self, size_t j){return self->at<gtsam::imuBias::ConstantBias>(j);}, py::arg("j"))
        .def("atNavState",[](gtsam::Values* self, size_t j){return self->at<gtsam::NavState>(j);}, py::arg("j"))
        .def("atVector",[](gtsam::Values* self, size_t j){return self->at<gtsam::Vector>(j);}, py::arg("j"))
        .def("atMatrix",[](gtsam::Values* self, size_t j){return self->at<gtsam::Matrix>(j);}, py::arg("j"))
        .def("atDouble",[](gtsam::Values* self, size_t j){return self->at<double>(j);}, py::arg("j"));


// Specializations for STL classes
#include "python/gtsam/specializations/values.h"

}

