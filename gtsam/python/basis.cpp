/**
 * @file    basis.cpp
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
#include "gtsam/basis/Fourier.h"
#include "gtsam/basis/Chebyshev.h"
#include "gtsam/basis/Chebyshev2.h"
#include "gtsam/basis/BasisFactors.h"
#include "gtsam/geometry/Pose2.h"
#include "gtsam/geometry/Pose3.h"
#include "gtsam/basis/FitBasis.h"
#include <boost/serialization/export.hpp>
#include <boost/serialization/export.hpp>

// Export classes for serialization


// Preamble for STL classes
#include "python/gtsam/preamble/basis.h"

using namespace std;

namespace py = pybind11;



void basis(py::module_ &m_) {
    m_.doc() = "pybind11 wrapper of basis";




    py::class_<gtsam::FourierBasis, std::shared_ptr<gtsam::FourierBasis>>(m_, "FourierBasis")
        .def_static("CalculateWeights",[](size_t N, double x){return gtsam::FourierBasis::CalculateWeights(N, x);}, py::arg("N"), py::arg("x"))
        .def_static("WeightMatrix",[](size_t N, const gtsam::Vector& x){return gtsam::FourierBasis::WeightMatrix(N, x);}, py::arg("N"), py::arg("x"))
        .def_static("DifferentiationMatrix",[](size_t N){return gtsam::FourierBasis::DifferentiationMatrix(N);}, py::arg("N"))
        .def_static("DerivativeWeights",[](size_t N, double x){return gtsam::FourierBasis::DerivativeWeights(N, x);}, py::arg("N"), py::arg("x"));

    py::class_<gtsam::Chebyshev1Basis, std::shared_ptr<gtsam::Chebyshev1Basis>>(m_, "Chebyshev1Basis")
        .def_static("CalculateWeights",[](size_t N, double x){return gtsam::Chebyshev1Basis::CalculateWeights(N, x);}, py::arg("N"), py::arg("x"))
        .def_static("WeightMatrix",[](size_t N, const gtsam::Vector& X){return gtsam::Chebyshev1Basis::WeightMatrix(N, X);}, py::arg("N"), py::arg("X"));

    py::class_<gtsam::Chebyshev2Basis, std::shared_ptr<gtsam::Chebyshev2Basis>>(m_, "Chebyshev2Basis")
        .def_static("CalculateWeights",[](size_t N, double x){return gtsam::Chebyshev2Basis::CalculateWeights(N, x);}, py::arg("N"), py::arg("x"))
        .def_static("WeightMatrix",[](size_t N, const gtsam::Vector& x){return gtsam::Chebyshev2Basis::WeightMatrix(N, x);}, py::arg("N"), py::arg("x"));

    py::class_<gtsam::Chebyshev2, std::shared_ptr<gtsam::Chebyshev2>>(m_, "Chebyshev2")
        .def_static("Point",[](size_t N, int j){return gtsam::Chebyshev2::Point(N, j);}, py::arg("N"), py::arg("j"))
        .def_static("Point",[](size_t N, int j, double a, double b){return gtsam::Chebyshev2::Point(N, j, a, b);}, py::arg("N"), py::arg("j"), py::arg("a"), py::arg("b"))
        .def_static("Points",[](size_t N){return gtsam::Chebyshev2::Points(N);}, py::arg("N"))
        .def_static("Points",[](size_t N, double a, double b){return gtsam::Chebyshev2::Points(N, a, b);}, py::arg("N"), py::arg("a"), py::arg("b"))
        .def_static("WeightMatrix",[](size_t N, const gtsam::Vector& X){return gtsam::Chebyshev2::WeightMatrix(N, X);}, py::arg("N"), py::arg("X"))
        .def_static("WeightMatrix",[](size_t N, const gtsam::Vector& X, double a, double b){return gtsam::Chebyshev2::WeightMatrix(N, X, a, b);}, py::arg("N"), py::arg("X"), py::arg("a"), py::arg("b"))
        .def_static("CalculateWeights",[](size_t N, double x, double a, double b){return gtsam::Chebyshev2::CalculateWeights(N, x, a, b);}, py::arg("N"), py::arg("x"), py::arg("a"), py::arg("b"))
        .def_static("DerivativeWeights",[](size_t N, double x, double a, double b){return gtsam::Chebyshev2::DerivativeWeights(N, x, a, b);}, py::arg("N"), py::arg("x"), py::arg("a"), py::arg("b"))
        .def_static("IntegrationWeights",[](size_t N, double a, double b){return gtsam::Chebyshev2::IntegrationWeights(N, a, b);}, py::arg("N"), py::arg("a"), py::arg("b"))
        .def_static("DifferentiationMatrix",[](size_t N, double a, double b){return gtsam::Chebyshev2::DifferentiationMatrix(N, a, b);}, py::arg("N"), py::arg("a"), py::arg("b"));

    py::class_<gtsam::EvaluationFactor<gtsam::Chebyshev2>, gtsam::NoiseModelFactor, std::shared_ptr<gtsam::EvaluationFactor<gtsam::Chebyshev2>>>(m_, "EvaluationFactorChebyshev2")
        .def(py::init<>())
        .def(py::init<gtsam::Key, const double, const std::shared_ptr<gtsam::noiseModel::Base>, const size_t, double>(), py::arg("key"), py::arg("z"), py::arg("model"), py::arg("N"), py::arg("x"))
        .def(py::init<gtsam::Key, const double, const std::shared_ptr<gtsam::noiseModel::Base>, const size_t, double, double, double>(), py::arg("key"), py::arg("z"), py::arg("model"), py::arg("N"), py::arg("x"), py::arg("a"), py::arg("b"));

    py::class_<gtsam::EvaluationFactor<gtsam::Chebyshev1Basis>, gtsam::NoiseModelFactor, std::shared_ptr<gtsam::EvaluationFactor<gtsam::Chebyshev1Basis>>>(m_, "EvaluationFactorChebyshev1Basis")
        .def(py::init<>())
        .def(py::init<gtsam::Key, const double, const std::shared_ptr<gtsam::noiseModel::Base>, const size_t, double>(), py::arg("key"), py::arg("z"), py::arg("model"), py::arg("N"), py::arg("x"))
        .def(py::init<gtsam::Key, const double, const std::shared_ptr<gtsam::noiseModel::Base>, const size_t, double, double, double>(), py::arg("key"), py::arg("z"), py::arg("model"), py::arg("N"), py::arg("x"), py::arg("a"), py::arg("b"));

    py::class_<gtsam::EvaluationFactor<gtsam::Chebyshev2Basis>, gtsam::NoiseModelFactor, std::shared_ptr<gtsam::EvaluationFactor<gtsam::Chebyshev2Basis>>>(m_, "EvaluationFactorChebyshev2Basis")
        .def(py::init<>())
        .def(py::init<gtsam::Key, const double, const std::shared_ptr<gtsam::noiseModel::Base>, const size_t, double>(), py::arg("key"), py::arg("z"), py::arg("model"), py::arg("N"), py::arg("x"))
        .def(py::init<gtsam::Key, const double, const std::shared_ptr<gtsam::noiseModel::Base>, const size_t, double, double, double>(), py::arg("key"), py::arg("z"), py::arg("model"), py::arg("N"), py::arg("x"), py::arg("a"), py::arg("b"));

    py::class_<gtsam::EvaluationFactor<gtsam::FourierBasis>, gtsam::NoiseModelFactor, std::shared_ptr<gtsam::EvaluationFactor<gtsam::FourierBasis>>>(m_, "EvaluationFactorFourierBasis")
        .def(py::init<>())
        .def(py::init<gtsam::Key, const double, const std::shared_ptr<gtsam::noiseModel::Base>, const size_t, double>(), py::arg("key"), py::arg("z"), py::arg("model"), py::arg("N"), py::arg("x"))
        .def(py::init<gtsam::Key, const double, const std::shared_ptr<gtsam::noiseModel::Base>, const size_t, double, double, double>(), py::arg("key"), py::arg("z"), py::arg("model"), py::arg("N"), py::arg("x"), py::arg("a"), py::arg("b"));

    py::class_<gtsam::VectorEvaluationFactor<gtsam::FourierBasis>, gtsam::NoiseModelFactor, std::shared_ptr<gtsam::VectorEvaluationFactor<gtsam::FourierBasis>>>(m_, "VectorEvaluationFactorFourierBasis")
        .def(py::init<>())
        .def(py::init<gtsam::Key, const gtsam::Vector&, const std::shared_ptr<gtsam::noiseModel::Base>, const size_t, const size_t, double>(), py::arg("key"), py::arg("z"), py::arg("model"), py::arg("M"), py::arg("N"), py::arg("x"))
        .def(py::init<gtsam::Key, const gtsam::Vector&, const std::shared_ptr<gtsam::noiseModel::Base>, const size_t, const size_t, double, double, double>(), py::arg("key"), py::arg("z"), py::arg("model"), py::arg("M"), py::arg("N"), py::arg("x"), py::arg("a"), py::arg("b"));

    py::class_<gtsam::VectorEvaluationFactor<gtsam::Chebyshev1Basis>, gtsam::NoiseModelFactor, std::shared_ptr<gtsam::VectorEvaluationFactor<gtsam::Chebyshev1Basis>>>(m_, "VectorEvaluationFactorChebyshev1Basis")
        .def(py::init<>())
        .def(py::init<gtsam::Key, const gtsam::Vector&, const std::shared_ptr<gtsam::noiseModel::Base>, const size_t, const size_t, double>(), py::arg("key"), py::arg("z"), py::arg("model"), py::arg("M"), py::arg("N"), py::arg("x"))
        .def(py::init<gtsam::Key, const gtsam::Vector&, const std::shared_ptr<gtsam::noiseModel::Base>, const size_t, const size_t, double, double, double>(), py::arg("key"), py::arg("z"), py::arg("model"), py::arg("M"), py::arg("N"), py::arg("x"), py::arg("a"), py::arg("b"));

    py::class_<gtsam::VectorEvaluationFactor<gtsam::Chebyshev2Basis>, gtsam::NoiseModelFactor, std::shared_ptr<gtsam::VectorEvaluationFactor<gtsam::Chebyshev2Basis>>>(m_, "VectorEvaluationFactorChebyshev2Basis")
        .def(py::init<>())
        .def(py::init<gtsam::Key, const gtsam::Vector&, const std::shared_ptr<gtsam::noiseModel::Base>, const size_t, const size_t, double>(), py::arg("key"), py::arg("z"), py::arg("model"), py::arg("M"), py::arg("N"), py::arg("x"))
        .def(py::init<gtsam::Key, const gtsam::Vector&, const std::shared_ptr<gtsam::noiseModel::Base>, const size_t, const size_t, double, double, double>(), py::arg("key"), py::arg("z"), py::arg("model"), py::arg("M"), py::arg("N"), py::arg("x"), py::arg("a"), py::arg("b"));

    py::class_<gtsam::VectorEvaluationFactor<gtsam::Chebyshev2>, gtsam::NoiseModelFactor, std::shared_ptr<gtsam::VectorEvaluationFactor<gtsam::Chebyshev2>>>(m_, "VectorEvaluationFactorChebyshev2")
        .def(py::init<>())
        .def(py::init<gtsam::Key, const gtsam::Vector&, const std::shared_ptr<gtsam::noiseModel::Base>, const size_t, const size_t, double>(), py::arg("key"), py::arg("z"), py::arg("model"), py::arg("M"), py::arg("N"), py::arg("x"))
        .def(py::init<gtsam::Key, const gtsam::Vector&, const std::shared_ptr<gtsam::noiseModel::Base>, const size_t, const size_t, double, double, double>(), py::arg("key"), py::arg("z"), py::arg("model"), py::arg("M"), py::arg("N"), py::arg("x"), py::arg("a"), py::arg("b"));

    py::class_<gtsam::VectorComponentFactor<gtsam::FourierBasis>, gtsam::NoiseModelFactor, std::shared_ptr<gtsam::VectorComponentFactor<gtsam::FourierBasis>>>(m_, "VectorComponentFactorFourierBasis")
        .def(py::init<>())
        .def(py::init<gtsam::Key, const double, const std::shared_ptr<gtsam::noiseModel::Base>, const size_t, const size_t, size_t, double>(), py::arg("key"), py::arg("z"), py::arg("model"), py::arg("M"), py::arg("N"), py::arg("i"), py::arg("x"))
        .def(py::init<gtsam::Key, const double, const std::shared_ptr<gtsam::noiseModel::Base>, const size_t, const size_t, size_t, double, double, double>(), py::arg("key"), py::arg("z"), py::arg("model"), py::arg("M"), py::arg("N"), py::arg("i"), py::arg("x"), py::arg("a"), py::arg("b"));

    py::class_<gtsam::VectorComponentFactor<gtsam::Chebyshev1Basis>, gtsam::NoiseModelFactor, std::shared_ptr<gtsam::VectorComponentFactor<gtsam::Chebyshev1Basis>>>(m_, "VectorComponentFactorChebyshev1Basis")
        .def(py::init<>())
        .def(py::init<gtsam::Key, const double, const std::shared_ptr<gtsam::noiseModel::Base>, const size_t, const size_t, size_t, double>(), py::arg("key"), py::arg("z"), py::arg("model"), py::arg("M"), py::arg("N"), py::arg("i"), py::arg("x"))
        .def(py::init<gtsam::Key, const double, const std::shared_ptr<gtsam::noiseModel::Base>, const size_t, const size_t, size_t, double, double, double>(), py::arg("key"), py::arg("z"), py::arg("model"), py::arg("M"), py::arg("N"), py::arg("i"), py::arg("x"), py::arg("a"), py::arg("b"));

    py::class_<gtsam::VectorComponentFactor<gtsam::Chebyshev2Basis>, gtsam::NoiseModelFactor, std::shared_ptr<gtsam::VectorComponentFactor<gtsam::Chebyshev2Basis>>>(m_, "VectorComponentFactorChebyshev2Basis")
        .def(py::init<>())
        .def(py::init<gtsam::Key, const double, const std::shared_ptr<gtsam::noiseModel::Base>, const size_t, const size_t, size_t, double>(), py::arg("key"), py::arg("z"), py::arg("model"), py::arg("M"), py::arg("N"), py::arg("i"), py::arg("x"))
        .def(py::init<gtsam::Key, const double, const std::shared_ptr<gtsam::noiseModel::Base>, const size_t, const size_t, size_t, double, double, double>(), py::arg("key"), py::arg("z"), py::arg("model"), py::arg("M"), py::arg("N"), py::arg("i"), py::arg("x"), py::arg("a"), py::arg("b"));

    py::class_<gtsam::VectorComponentFactor<gtsam::Chebyshev2>, gtsam::NoiseModelFactor, std::shared_ptr<gtsam::VectorComponentFactor<gtsam::Chebyshev2>>>(m_, "VectorComponentFactorChebyshev2")
        .def(py::init<>())
        .def(py::init<gtsam::Key, const double, const std::shared_ptr<gtsam::noiseModel::Base>, const size_t, const size_t, size_t, double>(), py::arg("key"), py::arg("z"), py::arg("model"), py::arg("M"), py::arg("N"), py::arg("i"), py::arg("x"))
        .def(py::init<gtsam::Key, const double, const std::shared_ptr<gtsam::noiseModel::Base>, const size_t, const size_t, size_t, double, double, double>(), py::arg("key"), py::arg("z"), py::arg("model"), py::arg("M"), py::arg("N"), py::arg("i"), py::arg("x"), py::arg("a"), py::arg("b"));

    py::class_<gtsam::ManifoldEvaluationFactor<gtsam::FourierBasis, gtsam::Rot2>, gtsam::NoiseModelFactor, std::shared_ptr<gtsam::ManifoldEvaluationFactor<gtsam::FourierBasis, gtsam::Rot2>>>(m_, "ManifoldEvaluationFactorFourierBasisRot2")
        .def(py::init<>())
        .def(py::init<gtsam::Key, const gtsam::Rot2&, const std::shared_ptr<gtsam::noiseModel::Base>, const size_t, double>(), py::arg("key"), py::arg("z"), py::arg("model"), py::arg("N"), py::arg("x"))
        .def(py::init<gtsam::Key, const gtsam::Rot2&, const std::shared_ptr<gtsam::noiseModel::Base>, const size_t, double, double, double>(), py::arg("key"), py::arg("z"), py::arg("model"), py::arg("N"), py::arg("x"), py::arg("a"), py::arg("b"));

    py::class_<gtsam::ManifoldEvaluationFactor<gtsam::FourierBasis, gtsam::Rot3>, gtsam::NoiseModelFactor, std::shared_ptr<gtsam::ManifoldEvaluationFactor<gtsam::FourierBasis, gtsam::Rot3>>>(m_, "ManifoldEvaluationFactorFourierBasisRot3")
        .def(py::init<>())
        .def(py::init<gtsam::Key, const gtsam::Rot3&, const std::shared_ptr<gtsam::noiseModel::Base>, const size_t, double>(), py::arg("key"), py::arg("z"), py::arg("model"), py::arg("N"), py::arg("x"))
        .def(py::init<gtsam::Key, const gtsam::Rot3&, const std::shared_ptr<gtsam::noiseModel::Base>, const size_t, double, double, double>(), py::arg("key"), py::arg("z"), py::arg("model"), py::arg("N"), py::arg("x"), py::arg("a"), py::arg("b"));

    py::class_<gtsam::ManifoldEvaluationFactor<gtsam::FourierBasis, gtsam::Pose2>, gtsam::NoiseModelFactor, std::shared_ptr<gtsam::ManifoldEvaluationFactor<gtsam::FourierBasis, gtsam::Pose2>>>(m_, "ManifoldEvaluationFactorFourierBasisPose2")
        .def(py::init<>())
        .def(py::init<gtsam::Key, const gtsam::Pose2&, const std::shared_ptr<gtsam::noiseModel::Base>, const size_t, double>(), py::arg("key"), py::arg("z"), py::arg("model"), py::arg("N"), py::arg("x"))
        .def(py::init<gtsam::Key, const gtsam::Pose2&, const std::shared_ptr<gtsam::noiseModel::Base>, const size_t, double, double, double>(), py::arg("key"), py::arg("z"), py::arg("model"), py::arg("N"), py::arg("x"), py::arg("a"), py::arg("b"));

    py::class_<gtsam::ManifoldEvaluationFactor<gtsam::FourierBasis, gtsam::Pose3>, gtsam::NoiseModelFactor, std::shared_ptr<gtsam::ManifoldEvaluationFactor<gtsam::FourierBasis, gtsam::Pose3>>>(m_, "ManifoldEvaluationFactorFourierBasisPose3")
        .def(py::init<>())
        .def(py::init<gtsam::Key, const gtsam::Pose3&, const std::shared_ptr<gtsam::noiseModel::Base>, const size_t, double>(), py::arg("key"), py::arg("z"), py::arg("model"), py::arg("N"), py::arg("x"))
        .def(py::init<gtsam::Key, const gtsam::Pose3&, const std::shared_ptr<gtsam::noiseModel::Base>, const size_t, double, double, double>(), py::arg("key"), py::arg("z"), py::arg("model"), py::arg("N"), py::arg("x"), py::arg("a"), py::arg("b"));

    py::class_<gtsam::ManifoldEvaluationFactor<gtsam::Chebyshev1Basis, gtsam::Rot2>, gtsam::NoiseModelFactor, std::shared_ptr<gtsam::ManifoldEvaluationFactor<gtsam::Chebyshev1Basis, gtsam::Rot2>>>(m_, "ManifoldEvaluationFactorChebyshev1BasisRot2")
        .def(py::init<>())
        .def(py::init<gtsam::Key, const gtsam::Rot2&, const std::shared_ptr<gtsam::noiseModel::Base>, const size_t, double>(), py::arg("key"), py::arg("z"), py::arg("model"), py::arg("N"), py::arg("x"))
        .def(py::init<gtsam::Key, const gtsam::Rot2&, const std::shared_ptr<gtsam::noiseModel::Base>, const size_t, double, double, double>(), py::arg("key"), py::arg("z"), py::arg("model"), py::arg("N"), py::arg("x"), py::arg("a"), py::arg("b"));

    py::class_<gtsam::ManifoldEvaluationFactor<gtsam::Chebyshev1Basis, gtsam::Rot3>, gtsam::NoiseModelFactor, std::shared_ptr<gtsam::ManifoldEvaluationFactor<gtsam::Chebyshev1Basis, gtsam::Rot3>>>(m_, "ManifoldEvaluationFactorChebyshev1BasisRot3")
        .def(py::init<>())
        .def(py::init<gtsam::Key, const gtsam::Rot3&, const std::shared_ptr<gtsam::noiseModel::Base>, const size_t, double>(), py::arg("key"), py::arg("z"), py::arg("model"), py::arg("N"), py::arg("x"))
        .def(py::init<gtsam::Key, const gtsam::Rot3&, const std::shared_ptr<gtsam::noiseModel::Base>, const size_t, double, double, double>(), py::arg("key"), py::arg("z"), py::arg("model"), py::arg("N"), py::arg("x"), py::arg("a"), py::arg("b"));

    py::class_<gtsam::ManifoldEvaluationFactor<gtsam::Chebyshev1Basis, gtsam::Pose2>, gtsam::NoiseModelFactor, std::shared_ptr<gtsam::ManifoldEvaluationFactor<gtsam::Chebyshev1Basis, gtsam::Pose2>>>(m_, "ManifoldEvaluationFactorChebyshev1BasisPose2")
        .def(py::init<>())
        .def(py::init<gtsam::Key, const gtsam::Pose2&, const std::shared_ptr<gtsam::noiseModel::Base>, const size_t, double>(), py::arg("key"), py::arg("z"), py::arg("model"), py::arg("N"), py::arg("x"))
        .def(py::init<gtsam::Key, const gtsam::Pose2&, const std::shared_ptr<gtsam::noiseModel::Base>, const size_t, double, double, double>(), py::arg("key"), py::arg("z"), py::arg("model"), py::arg("N"), py::arg("x"), py::arg("a"), py::arg("b"));

    py::class_<gtsam::ManifoldEvaluationFactor<gtsam::Chebyshev1Basis, gtsam::Pose3>, gtsam::NoiseModelFactor, std::shared_ptr<gtsam::ManifoldEvaluationFactor<gtsam::Chebyshev1Basis, gtsam::Pose3>>>(m_, "ManifoldEvaluationFactorChebyshev1BasisPose3")
        .def(py::init<>())
        .def(py::init<gtsam::Key, const gtsam::Pose3&, const std::shared_ptr<gtsam::noiseModel::Base>, const size_t, double>(), py::arg("key"), py::arg("z"), py::arg("model"), py::arg("N"), py::arg("x"))
        .def(py::init<gtsam::Key, const gtsam::Pose3&, const std::shared_ptr<gtsam::noiseModel::Base>, const size_t, double, double, double>(), py::arg("key"), py::arg("z"), py::arg("model"), py::arg("N"), py::arg("x"), py::arg("a"), py::arg("b"));

    py::class_<gtsam::ManifoldEvaluationFactor<gtsam::Chebyshev2Basis, gtsam::Rot2>, gtsam::NoiseModelFactor, std::shared_ptr<gtsam::ManifoldEvaluationFactor<gtsam::Chebyshev2Basis, gtsam::Rot2>>>(m_, "ManifoldEvaluationFactorChebyshev2BasisRot2")
        .def(py::init<>())
        .def(py::init<gtsam::Key, const gtsam::Rot2&, const std::shared_ptr<gtsam::noiseModel::Base>, const size_t, double>(), py::arg("key"), py::arg("z"), py::arg("model"), py::arg("N"), py::arg("x"))
        .def(py::init<gtsam::Key, const gtsam::Rot2&, const std::shared_ptr<gtsam::noiseModel::Base>, const size_t, double, double, double>(), py::arg("key"), py::arg("z"), py::arg("model"), py::arg("N"), py::arg("x"), py::arg("a"), py::arg("b"));

    py::class_<gtsam::ManifoldEvaluationFactor<gtsam::Chebyshev2Basis, gtsam::Rot3>, gtsam::NoiseModelFactor, std::shared_ptr<gtsam::ManifoldEvaluationFactor<gtsam::Chebyshev2Basis, gtsam::Rot3>>>(m_, "ManifoldEvaluationFactorChebyshev2BasisRot3")
        .def(py::init<>())
        .def(py::init<gtsam::Key, const gtsam::Rot3&, const std::shared_ptr<gtsam::noiseModel::Base>, const size_t, double>(), py::arg("key"), py::arg("z"), py::arg("model"), py::arg("N"), py::arg("x"))
        .def(py::init<gtsam::Key, const gtsam::Rot3&, const std::shared_ptr<gtsam::noiseModel::Base>, const size_t, double, double, double>(), py::arg("key"), py::arg("z"), py::arg("model"), py::arg("N"), py::arg("x"), py::arg("a"), py::arg("b"));

    py::class_<gtsam::ManifoldEvaluationFactor<gtsam::Chebyshev2Basis, gtsam::Pose2>, gtsam::NoiseModelFactor, std::shared_ptr<gtsam::ManifoldEvaluationFactor<gtsam::Chebyshev2Basis, gtsam::Pose2>>>(m_, "ManifoldEvaluationFactorChebyshev2BasisPose2")
        .def(py::init<>())
        .def(py::init<gtsam::Key, const gtsam::Pose2&, const std::shared_ptr<gtsam::noiseModel::Base>, const size_t, double>(), py::arg("key"), py::arg("z"), py::arg("model"), py::arg("N"), py::arg("x"))
        .def(py::init<gtsam::Key, const gtsam::Pose2&, const std::shared_ptr<gtsam::noiseModel::Base>, const size_t, double, double, double>(), py::arg("key"), py::arg("z"), py::arg("model"), py::arg("N"), py::arg("x"), py::arg("a"), py::arg("b"));

    py::class_<gtsam::ManifoldEvaluationFactor<gtsam::Chebyshev2Basis, gtsam::Pose3>, gtsam::NoiseModelFactor, std::shared_ptr<gtsam::ManifoldEvaluationFactor<gtsam::Chebyshev2Basis, gtsam::Pose3>>>(m_, "ManifoldEvaluationFactorChebyshev2BasisPose3")
        .def(py::init<>())
        .def(py::init<gtsam::Key, const gtsam::Pose3&, const std::shared_ptr<gtsam::noiseModel::Base>, const size_t, double>(), py::arg("key"), py::arg("z"), py::arg("model"), py::arg("N"), py::arg("x"))
        .def(py::init<gtsam::Key, const gtsam::Pose3&, const std::shared_ptr<gtsam::noiseModel::Base>, const size_t, double, double, double>(), py::arg("key"), py::arg("z"), py::arg("model"), py::arg("N"), py::arg("x"), py::arg("a"), py::arg("b"));

    py::class_<gtsam::ManifoldEvaluationFactor<gtsam::Chebyshev2, gtsam::Rot2>, gtsam::NoiseModelFactor, std::shared_ptr<gtsam::ManifoldEvaluationFactor<gtsam::Chebyshev2, gtsam::Rot2>>>(m_, "ManifoldEvaluationFactorChebyshev2Rot2")
        .def(py::init<>())
        .def(py::init<gtsam::Key, const gtsam::Rot2&, const std::shared_ptr<gtsam::noiseModel::Base>, const size_t, double>(), py::arg("key"), py::arg("z"), py::arg("model"), py::arg("N"), py::arg("x"))
        .def(py::init<gtsam::Key, const gtsam::Rot2&, const std::shared_ptr<gtsam::noiseModel::Base>, const size_t, double, double, double>(), py::arg("key"), py::arg("z"), py::arg("model"), py::arg("N"), py::arg("x"), py::arg("a"), py::arg("b"));

    py::class_<gtsam::ManifoldEvaluationFactor<gtsam::Chebyshev2, gtsam::Rot3>, gtsam::NoiseModelFactor, std::shared_ptr<gtsam::ManifoldEvaluationFactor<gtsam::Chebyshev2, gtsam::Rot3>>>(m_, "ManifoldEvaluationFactorChebyshev2Rot3")
        .def(py::init<>())
        .def(py::init<gtsam::Key, const gtsam::Rot3&, const std::shared_ptr<gtsam::noiseModel::Base>, const size_t, double>(), py::arg("key"), py::arg("z"), py::arg("model"), py::arg("N"), py::arg("x"))
        .def(py::init<gtsam::Key, const gtsam::Rot3&, const std::shared_ptr<gtsam::noiseModel::Base>, const size_t, double, double, double>(), py::arg("key"), py::arg("z"), py::arg("model"), py::arg("N"), py::arg("x"), py::arg("a"), py::arg("b"));

    py::class_<gtsam::ManifoldEvaluationFactor<gtsam::Chebyshev2, gtsam::Pose2>, gtsam::NoiseModelFactor, std::shared_ptr<gtsam::ManifoldEvaluationFactor<gtsam::Chebyshev2, gtsam::Pose2>>>(m_, "ManifoldEvaluationFactorChebyshev2Pose2")
        .def(py::init<>())
        .def(py::init<gtsam::Key, const gtsam::Pose2&, const std::shared_ptr<gtsam::noiseModel::Base>, const size_t, double>(), py::arg("key"), py::arg("z"), py::arg("model"), py::arg("N"), py::arg("x"))
        .def(py::init<gtsam::Key, const gtsam::Pose2&, const std::shared_ptr<gtsam::noiseModel::Base>, const size_t, double, double, double>(), py::arg("key"), py::arg("z"), py::arg("model"), py::arg("N"), py::arg("x"), py::arg("a"), py::arg("b"));

    py::class_<gtsam::ManifoldEvaluationFactor<gtsam::Chebyshev2, gtsam::Pose3>, gtsam::NoiseModelFactor, std::shared_ptr<gtsam::ManifoldEvaluationFactor<gtsam::Chebyshev2, gtsam::Pose3>>>(m_, "ManifoldEvaluationFactorChebyshev2Pose3")
        .def(py::init<>())
        .def(py::init<gtsam::Key, const gtsam::Pose3&, const std::shared_ptr<gtsam::noiseModel::Base>, const size_t, double>(), py::arg("key"), py::arg("z"), py::arg("model"), py::arg("N"), py::arg("x"))
        .def(py::init<gtsam::Key, const gtsam::Pose3&, const std::shared_ptr<gtsam::noiseModel::Base>, const size_t, double, double, double>(), py::arg("key"), py::arg("z"), py::arg("model"), py::arg("N"), py::arg("x"), py::arg("a"), py::arg("b"));

    py::class_<gtsam::DerivativeFactor<gtsam::FourierBasis>, gtsam::NoiseModelFactor, std::shared_ptr<gtsam::DerivativeFactor<gtsam::FourierBasis>>>(m_, "DerivativeFactorFourierBasis")
        .def(py::init<>())
        .def(py::init<gtsam::Key, const double, const std::shared_ptr<gtsam::noiseModel::Base>, const size_t, double>(), py::arg("key"), py::arg("z"), py::arg("model"), py::arg("N"), py::arg("x"))
        .def(py::init<gtsam::Key, const double, const std::shared_ptr<gtsam::noiseModel::Base>, const size_t, double, double, double>(), py::arg("key"), py::arg("z"), py::arg("model"), py::arg("N"), py::arg("x"), py::arg("a"), py::arg("b"));

    py::class_<gtsam::DerivativeFactor<gtsam::Chebyshev1Basis>, gtsam::NoiseModelFactor, std::shared_ptr<gtsam::DerivativeFactor<gtsam::Chebyshev1Basis>>>(m_, "DerivativeFactorChebyshev1Basis")
        .def(py::init<>())
        .def(py::init<gtsam::Key, const double, const std::shared_ptr<gtsam::noiseModel::Base>, const size_t, double>(), py::arg("key"), py::arg("z"), py::arg("model"), py::arg("N"), py::arg("x"))
        .def(py::init<gtsam::Key, const double, const std::shared_ptr<gtsam::noiseModel::Base>, const size_t, double, double, double>(), py::arg("key"), py::arg("z"), py::arg("model"), py::arg("N"), py::arg("x"), py::arg("a"), py::arg("b"));

    py::class_<gtsam::DerivativeFactor<gtsam::Chebyshev2Basis>, gtsam::NoiseModelFactor, std::shared_ptr<gtsam::DerivativeFactor<gtsam::Chebyshev2Basis>>>(m_, "DerivativeFactorChebyshev2Basis")
        .def(py::init<>())
        .def(py::init<gtsam::Key, const double, const std::shared_ptr<gtsam::noiseModel::Base>, const size_t, double>(), py::arg("key"), py::arg("z"), py::arg("model"), py::arg("N"), py::arg("x"))
        .def(py::init<gtsam::Key, const double, const std::shared_ptr<gtsam::noiseModel::Base>, const size_t, double, double, double>(), py::arg("key"), py::arg("z"), py::arg("model"), py::arg("N"), py::arg("x"), py::arg("a"), py::arg("b"));

    py::class_<gtsam::DerivativeFactor<gtsam::Chebyshev2>, gtsam::NoiseModelFactor, std::shared_ptr<gtsam::DerivativeFactor<gtsam::Chebyshev2>>>(m_, "DerivativeFactorChebyshev2")
        .def(py::init<>())
        .def(py::init<gtsam::Key, const double, const std::shared_ptr<gtsam::noiseModel::Base>, const size_t, double>(), py::arg("key"), py::arg("z"), py::arg("model"), py::arg("N"), py::arg("x"))
        .def(py::init<gtsam::Key, const double, const std::shared_ptr<gtsam::noiseModel::Base>, const size_t, double, double, double>(), py::arg("key"), py::arg("z"), py::arg("model"), py::arg("N"), py::arg("x"), py::arg("a"), py::arg("b"));

    py::class_<gtsam::VectorDerivativeFactor<gtsam::FourierBasis>, gtsam::NoiseModelFactor, std::shared_ptr<gtsam::VectorDerivativeFactor<gtsam::FourierBasis>>>(m_, "VectorDerivativeFactorFourierBasis")
        .def(py::init<>())
        .def(py::init<gtsam::Key, const gtsam::Vector&, const std::shared_ptr<gtsam::noiseModel::Base>, const size_t, const size_t, double>(), py::arg("key"), py::arg("z"), py::arg("model"), py::arg("M"), py::arg("N"), py::arg("x"))
        .def(py::init<gtsam::Key, const gtsam::Vector&, const std::shared_ptr<gtsam::noiseModel::Base>, const size_t, const size_t, double, double, double>(), py::arg("key"), py::arg("z"), py::arg("model"), py::arg("M"), py::arg("N"), py::arg("x"), py::arg("a"), py::arg("b"));

    py::class_<gtsam::VectorDerivativeFactor<gtsam::Chebyshev1Basis>, gtsam::NoiseModelFactor, std::shared_ptr<gtsam::VectorDerivativeFactor<gtsam::Chebyshev1Basis>>>(m_, "VectorDerivativeFactorChebyshev1Basis")
        .def(py::init<>())
        .def(py::init<gtsam::Key, const gtsam::Vector&, const std::shared_ptr<gtsam::noiseModel::Base>, const size_t, const size_t, double>(), py::arg("key"), py::arg("z"), py::arg("model"), py::arg("M"), py::arg("N"), py::arg("x"))
        .def(py::init<gtsam::Key, const gtsam::Vector&, const std::shared_ptr<gtsam::noiseModel::Base>, const size_t, const size_t, double, double, double>(), py::arg("key"), py::arg("z"), py::arg("model"), py::arg("M"), py::arg("N"), py::arg("x"), py::arg("a"), py::arg("b"));

    py::class_<gtsam::VectorDerivativeFactor<gtsam::Chebyshev2Basis>, gtsam::NoiseModelFactor, std::shared_ptr<gtsam::VectorDerivativeFactor<gtsam::Chebyshev2Basis>>>(m_, "VectorDerivativeFactorChebyshev2Basis")
        .def(py::init<>())
        .def(py::init<gtsam::Key, const gtsam::Vector&, const std::shared_ptr<gtsam::noiseModel::Base>, const size_t, const size_t, double>(), py::arg("key"), py::arg("z"), py::arg("model"), py::arg("M"), py::arg("N"), py::arg("x"))
        .def(py::init<gtsam::Key, const gtsam::Vector&, const std::shared_ptr<gtsam::noiseModel::Base>, const size_t, const size_t, double, double, double>(), py::arg("key"), py::arg("z"), py::arg("model"), py::arg("M"), py::arg("N"), py::arg("x"), py::arg("a"), py::arg("b"));

    py::class_<gtsam::VectorDerivativeFactor<gtsam::Chebyshev2>, gtsam::NoiseModelFactor, std::shared_ptr<gtsam::VectorDerivativeFactor<gtsam::Chebyshev2>>>(m_, "VectorDerivativeFactorChebyshev2")
        .def(py::init<>())
        .def(py::init<gtsam::Key, const gtsam::Vector&, const std::shared_ptr<gtsam::noiseModel::Base>, const size_t, const size_t, double>(), py::arg("key"), py::arg("z"), py::arg("model"), py::arg("M"), py::arg("N"), py::arg("x"))
        .def(py::init<gtsam::Key, const gtsam::Vector&, const std::shared_ptr<gtsam::noiseModel::Base>, const size_t, const size_t, double, double, double>(), py::arg("key"), py::arg("z"), py::arg("model"), py::arg("M"), py::arg("N"), py::arg("x"), py::arg("a"), py::arg("b"));

    py::class_<gtsam::ComponentDerivativeFactor<gtsam::FourierBasis>, gtsam::NoiseModelFactor, std::shared_ptr<gtsam::ComponentDerivativeFactor<gtsam::FourierBasis>>>(m_, "ComponentDerivativeFactorFourierBasis")
        .def(py::init<>())
        .def(py::init<gtsam::Key, const double, const std::shared_ptr<gtsam::noiseModel::Base>, const size_t, const size_t, size_t, double>(), py::arg("key"), py::arg("z"), py::arg("model"), py::arg("P"), py::arg("N"), py::arg("i"), py::arg("x"))
        .def(py::init<gtsam::Key, const double, const std::shared_ptr<gtsam::noiseModel::Base>, const size_t, const size_t, size_t, double, double, double>(), py::arg("key"), py::arg("z"), py::arg("model"), py::arg("P"), py::arg("N"), py::arg("i"), py::arg("x"), py::arg("a"), py::arg("b"));

    py::class_<gtsam::ComponentDerivativeFactor<gtsam::Chebyshev1Basis>, gtsam::NoiseModelFactor, std::shared_ptr<gtsam::ComponentDerivativeFactor<gtsam::Chebyshev1Basis>>>(m_, "ComponentDerivativeFactorChebyshev1Basis")
        .def(py::init<>())
        .def(py::init<gtsam::Key, const double, const std::shared_ptr<gtsam::noiseModel::Base>, const size_t, const size_t, size_t, double>(), py::arg("key"), py::arg("z"), py::arg("model"), py::arg("P"), py::arg("N"), py::arg("i"), py::arg("x"))
        .def(py::init<gtsam::Key, const double, const std::shared_ptr<gtsam::noiseModel::Base>, const size_t, const size_t, size_t, double, double, double>(), py::arg("key"), py::arg("z"), py::arg("model"), py::arg("P"), py::arg("N"), py::arg("i"), py::arg("x"), py::arg("a"), py::arg("b"));

    py::class_<gtsam::ComponentDerivativeFactor<gtsam::Chebyshev2Basis>, gtsam::NoiseModelFactor, std::shared_ptr<gtsam::ComponentDerivativeFactor<gtsam::Chebyshev2Basis>>>(m_, "ComponentDerivativeFactorChebyshev2Basis")
        .def(py::init<>())
        .def(py::init<gtsam::Key, const double, const std::shared_ptr<gtsam::noiseModel::Base>, const size_t, const size_t, size_t, double>(), py::arg("key"), py::arg("z"), py::arg("model"), py::arg("P"), py::arg("N"), py::arg("i"), py::arg("x"))
        .def(py::init<gtsam::Key, const double, const std::shared_ptr<gtsam::noiseModel::Base>, const size_t, const size_t, size_t, double, double, double>(), py::arg("key"), py::arg("z"), py::arg("model"), py::arg("P"), py::arg("N"), py::arg("i"), py::arg("x"), py::arg("a"), py::arg("b"));

    py::class_<gtsam::ComponentDerivativeFactor<gtsam::Chebyshev2>, gtsam::NoiseModelFactor, std::shared_ptr<gtsam::ComponentDerivativeFactor<gtsam::Chebyshev2>>>(m_, "ComponentDerivativeFactorChebyshev2")
        .def(py::init<>())
        .def(py::init<gtsam::Key, const double, const std::shared_ptr<gtsam::noiseModel::Base>, const size_t, const size_t, size_t, double>(), py::arg("key"), py::arg("z"), py::arg("model"), py::arg("P"), py::arg("N"), py::arg("i"), py::arg("x"))
        .def(py::init<gtsam::Key, const double, const std::shared_ptr<gtsam::noiseModel::Base>, const size_t, const size_t, size_t, double, double, double>(), py::arg("key"), py::arg("z"), py::arg("model"), py::arg("P"), py::arg("N"), py::arg("i"), py::arg("x"), py::arg("a"), py::arg("b"));

    py::class_<gtsam::FitBasis<gtsam::FourierBasis>, std::shared_ptr<gtsam::FitBasis<gtsam::FourierBasis>>>(m_, "FitBasisFourierBasis")
        .def(py::init<const std::map<double, double>&, const std::shared_ptr<gtsam::noiseModel::Base>, size_t>(), py::arg("sequence"), py::arg("model"), py::arg("N"))
        .def("parameters",[](gtsam::FitBasis<gtsam::FourierBasis>* self){return self->parameters();})
        .def_static("NonlinearGraph",[](const std::map<double, double>& sequence, const std::shared_ptr<gtsam::noiseModel::Base> model, size_t N){return gtsam::FitBasis<gtsam::FourierBasis>::NonlinearGraph(sequence, model, N);}, py::arg("sequence"), py::arg("model"), py::arg("N"))
        .def_static("LinearGraph",[](const std::map<double, double>& sequence, const std::shared_ptr<gtsam::noiseModel::Base> model, size_t N){return gtsam::FitBasis<gtsam::FourierBasis>::LinearGraph(sequence, model, N);}, py::arg("sequence"), py::arg("model"), py::arg("N"));

    py::class_<gtsam::FitBasis<gtsam::Chebyshev1Basis>, std::shared_ptr<gtsam::FitBasis<gtsam::Chebyshev1Basis>>>(m_, "FitBasisChebyshev1Basis")
        .def(py::init<const std::map<double, double>&, const std::shared_ptr<gtsam::noiseModel::Base>, size_t>(), py::arg("sequence"), py::arg("model"), py::arg("N"))
        .def("parameters",[](gtsam::FitBasis<gtsam::Chebyshev1Basis>* self){return self->parameters();})
        .def_static("NonlinearGraph",[](const std::map<double, double>& sequence, const std::shared_ptr<gtsam::noiseModel::Base> model, size_t N){return gtsam::FitBasis<gtsam::Chebyshev1Basis>::NonlinearGraph(sequence, model, N);}, py::arg("sequence"), py::arg("model"), py::arg("N"))
        .def_static("LinearGraph",[](const std::map<double, double>& sequence, const std::shared_ptr<gtsam::noiseModel::Base> model, size_t N){return gtsam::FitBasis<gtsam::Chebyshev1Basis>::LinearGraph(sequence, model, N);}, py::arg("sequence"), py::arg("model"), py::arg("N"));

    py::class_<gtsam::FitBasis<gtsam::Chebyshev2Basis>, std::shared_ptr<gtsam::FitBasis<gtsam::Chebyshev2Basis>>>(m_, "FitBasisChebyshev2Basis")
        .def(py::init<const std::map<double, double>&, const std::shared_ptr<gtsam::noiseModel::Base>, size_t>(), py::arg("sequence"), py::arg("model"), py::arg("N"))
        .def("parameters",[](gtsam::FitBasis<gtsam::Chebyshev2Basis>* self){return self->parameters();})
        .def_static("NonlinearGraph",[](const std::map<double, double>& sequence, const std::shared_ptr<gtsam::noiseModel::Base> model, size_t N){return gtsam::FitBasis<gtsam::Chebyshev2Basis>::NonlinearGraph(sequence, model, N);}, py::arg("sequence"), py::arg("model"), py::arg("N"))
        .def_static("LinearGraph",[](const std::map<double, double>& sequence, const std::shared_ptr<gtsam::noiseModel::Base> model, size_t N){return gtsam::FitBasis<gtsam::Chebyshev2Basis>::LinearGraph(sequence, model, N);}, py::arg("sequence"), py::arg("model"), py::arg("N"));

    py::class_<gtsam::FitBasis<gtsam::Chebyshev2>, std::shared_ptr<gtsam::FitBasis<gtsam::Chebyshev2>>>(m_, "FitBasisChebyshev2")
        .def(py::init<const std::map<double, double>&, const std::shared_ptr<gtsam::noiseModel::Base>, size_t>(), py::arg("sequence"), py::arg("model"), py::arg("N"))
        .def("parameters",[](gtsam::FitBasis<gtsam::Chebyshev2>* self){return self->parameters();})
        .def_static("NonlinearGraph",[](const std::map<double, double>& sequence, const std::shared_ptr<gtsam::noiseModel::Base> model, size_t N){return gtsam::FitBasis<gtsam::Chebyshev2>::NonlinearGraph(sequence, model, N);}, py::arg("sequence"), py::arg("model"), py::arg("N"))
        .def_static("LinearGraph",[](const std::map<double, double>& sequence, const std::shared_ptr<gtsam::noiseModel::Base> model, size_t N){return gtsam::FitBasis<gtsam::Chebyshev2>::LinearGraph(sequence, model, N);}, py::arg("sequence"), py::arg("model"), py::arg("N"));


// Specializations for STL classes
#include "python/gtsam/specializations/basis.h"

}

