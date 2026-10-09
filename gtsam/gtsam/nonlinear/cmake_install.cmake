# Install script for directory: /home/geneta/project/gtsam_zhou/gtsam/gtsam/nonlinear

# Set the install prefix
if(NOT DEFINED CMAKE_INSTALL_PREFIX)
  set(CMAKE_INSTALL_PREFIX "/usr/local")
endif()
string(REGEX REPLACE "/$" "" CMAKE_INSTALL_PREFIX "${CMAKE_INSTALL_PREFIX}")

# Set the install configuration name.
if(NOT DEFINED CMAKE_INSTALL_CONFIG_NAME)
  if(BUILD_TYPE)
    string(REGEX REPLACE "^[^A-Za-z0-9_]+" ""
           CMAKE_INSTALL_CONFIG_NAME "${BUILD_TYPE}")
  else()
    set(CMAKE_INSTALL_CONFIG_NAME "Release")
  endif()
  message(STATUS "Install configuration: \"${CMAKE_INSTALL_CONFIG_NAME}\"")
endif()

# Set the component getting installed.
if(NOT CMAKE_INSTALL_COMPONENT)
  if(COMPONENT)
    message(STATUS "Install component: \"${COMPONENT}\"")
    set(CMAKE_INSTALL_COMPONENT "${COMPONENT}")
  else()
    set(CMAKE_INSTALL_COMPONENT)
  endif()
endif()

# Install shared libraries without execute permission?
if(NOT DEFINED CMAKE_INSTALL_SO_NO_EXE)
  set(CMAKE_INSTALL_SO_NO_EXE "1")
endif()

# Is this installation the result of a crosscompile?
if(NOT DEFINED CMAKE_CROSSCOMPILING)
  set(CMAKE_CROSSCOMPILING "FALSE")
endif()

# Set default install directory permissions.
if(NOT DEFINED CMAKE_OBJDUMP)
  set(CMAKE_OBJDUMP "/usr/bin/objdump")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/gtsam/nonlinear" TYPE FILE FILES
    "/home/geneta/project/gtsam_zhou/gtsam/gtsam/nonlinear/AdaptAutoDiff.h"
    "/home/geneta/project/gtsam_zhou/gtsam/gtsam/nonlinear/BatchFixedLagSmoother.h"
    "/home/geneta/project/gtsam_zhou/gtsam/gtsam/nonlinear/CustomFactor.h"
    "/home/geneta/project/gtsam_zhou/gtsam/gtsam/nonlinear/CustomMarginalization.h"
    "/home/geneta/project/gtsam_zhou/gtsam/gtsam/nonlinear/DoglegOptimizer.h"
    "/home/geneta/project/gtsam_zhou/gtsam/gtsam/nonlinear/DoglegOptimizerImpl.h"
    "/home/geneta/project/gtsam_zhou/gtsam/gtsam/nonlinear/Expression-inl.h"
    "/home/geneta/project/gtsam_zhou/gtsam/gtsam/nonlinear/Expression.h"
    "/home/geneta/project/gtsam_zhou/gtsam/gtsam/nonlinear/ExpressionFactor.h"
    "/home/geneta/project/gtsam_zhou/gtsam/gtsam/nonlinear/ExpressionFactorGraph.h"
    "/home/geneta/project/gtsam_zhou/gtsam/gtsam/nonlinear/ExtendedKalmanFilter-inl.h"
    "/home/geneta/project/gtsam_zhou/gtsam/gtsam/nonlinear/ExtendedKalmanFilter.h"
    "/home/geneta/project/gtsam_zhou/gtsam/gtsam/nonlinear/FixedLagSmoother.h"
    "/home/geneta/project/gtsam_zhou/gtsam/gtsam/nonlinear/FunctorizedFactor.h"
    "/home/geneta/project/gtsam_zhou/gtsam/gtsam/nonlinear/GaussNewtonOptimizer.h"
    "/home/geneta/project/gtsam_zhou/gtsam/gtsam/nonlinear/GncOptimizer.h"
    "/home/geneta/project/gtsam_zhou/gtsam/gtsam/nonlinear/GncParams.h"
    "/home/geneta/project/gtsam_zhou/gtsam/gtsam/nonlinear/GraphvizFormatting.h"
    "/home/geneta/project/gtsam_zhou/gtsam/gtsam/nonlinear/ISAM2-impl.h"
    "/home/geneta/project/gtsam_zhou/gtsam/gtsam/nonlinear/ISAM2.h"
    "/home/geneta/project/gtsam_zhou/gtsam/gtsam/nonlinear/ISAM2Clique.h"
    "/home/geneta/project/gtsam_zhou/gtsam/gtsam/nonlinear/ISAM2Params.h"
    "/home/geneta/project/gtsam_zhou/gtsam/gtsam/nonlinear/ISAM2Result.h"
    "/home/geneta/project/gtsam_zhou/gtsam/gtsam/nonlinear/ISAM2UpdateParams.h"
    "/home/geneta/project/gtsam_zhou/gtsam/gtsam/nonlinear/LevenbergMarquardtOptimizer.h"
    "/home/geneta/project/gtsam_zhou/gtsam/gtsam/nonlinear/LevenbergMarquardtParams.h"
    "/home/geneta/project/gtsam_zhou/gtsam/gtsam/nonlinear/LinearContainerFactor.h"
    "/home/geneta/project/gtsam_zhou/gtsam/gtsam/nonlinear/Marginals.h"
    "/home/geneta/project/gtsam_zhou/gtsam/gtsam/nonlinear/NonlinearConjugateGradientOptimizer.h"
    "/home/geneta/project/gtsam_zhou/gtsam/gtsam/nonlinear/NonlinearEquality.h"
    "/home/geneta/project/gtsam_zhou/gtsam/gtsam/nonlinear/NonlinearFactor.h"
    "/home/geneta/project/gtsam_zhou/gtsam/gtsam/nonlinear/NonlinearFactorGraph.h"
    "/home/geneta/project/gtsam_zhou/gtsam/gtsam/nonlinear/NonlinearISAM.h"
    "/home/geneta/project/gtsam_zhou/gtsam/gtsam/nonlinear/NonlinearOptimizer.h"
    "/home/geneta/project/gtsam_zhou/gtsam/gtsam/nonlinear/NonlinearOptimizerParams.h"
    "/home/geneta/project/gtsam_zhou/gtsam/gtsam/nonlinear/PriorFactor.h"
    "/home/geneta/project/gtsam_zhou/gtsam/gtsam/nonlinear/Symbol.h"
    "/home/geneta/project/gtsam_zhou/gtsam/gtsam/nonlinear/Values-inl.h"
    "/home/geneta/project/gtsam_zhou/gtsam/gtsam/nonlinear/Values.h"
    "/home/geneta/project/gtsam_zhou/gtsam/gtsam/nonlinear/WhiteNoiseFactor.h"
    "/home/geneta/project/gtsam_zhou/gtsam/gtsam/nonlinear/expressionTesting.h"
    "/home/geneta/project/gtsam_zhou/gtsam/gtsam/nonlinear/expressions.h"
    "/home/geneta/project/gtsam_zhou/gtsam/gtsam/nonlinear/factorTesting.h"
    "/home/geneta/project/gtsam_zhou/gtsam/gtsam/nonlinear/nonlinearExceptions.h"
    "/home/geneta/project/gtsam_zhou/gtsam/gtsam/nonlinear/utilities.h"
    )
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/gtsam/nonlinear/internal" TYPE FILE FILES
    "/home/geneta/project/gtsam_zhou/gtsam/gtsam/nonlinear/internal/CallRecord.h"
    "/home/geneta/project/gtsam_zhou/gtsam/gtsam/nonlinear/internal/ExecutionTrace.h"
    "/home/geneta/project/gtsam_zhou/gtsam/gtsam/nonlinear/internal/ExpressionNode.h"
    "/home/geneta/project/gtsam_zhou/gtsam/gtsam/nonlinear/internal/JacobianMap.h"
    "/home/geneta/project/gtsam_zhou/gtsam/gtsam/nonlinear/internal/LevenbergMarquardtState.h"
    "/home/geneta/project/gtsam_zhou/gtsam/gtsam/nonlinear/internal/NonlinearOptimizerState.h"
    )
endif()

if(NOT CMAKE_INSTALL_LOCAL_ONLY)
  # Include the install script for each subdirectory.
  include("/home/geneta/project/gtsam_zhou/gtsam/gtsam/gtsam/nonlinear/tests/cmake_install.cmake")

endif()

