# Install script for directory: /home/geneta/project/gtsam_zhou/gtsam/gtsam/slam

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
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/gtsam/slam" TYPE FILE FILES
    "/home/geneta/project/gtsam_zhou/gtsam/gtsam/slam/AntiFactor.h"
    "/home/geneta/project/gtsam_zhou/gtsam/gtsam/slam/BearingFactor.h"
    "/home/geneta/project/gtsam_zhou/gtsam/gtsam/slam/BearingRangeFactor.h"
    "/home/geneta/project/gtsam_zhou/gtsam/gtsam/slam/BetweenFactor.h"
    "/home/geneta/project/gtsam_zhou/gtsam/gtsam/slam/BoundingConstraint.h"
    "/home/geneta/project/gtsam_zhou/gtsam/gtsam/slam/EssentialMatrixConstraint.h"
    "/home/geneta/project/gtsam_zhou/gtsam/gtsam/slam/EssentialMatrixFactor.h"
    "/home/geneta/project/gtsam_zhou/gtsam/gtsam/slam/FrobeniusFactor.h"
    "/home/geneta/project/gtsam_zhou/gtsam/gtsam/slam/GeneralSFMFactor.h"
    "/home/geneta/project/gtsam_zhou/gtsam/gtsam/slam/InitializePose.h"
    "/home/geneta/project/gtsam_zhou/gtsam/gtsam/slam/InitializePose3.h"
    "/home/geneta/project/gtsam_zhou/gtsam/gtsam/slam/JacobianFactorQ.h"
    "/home/geneta/project/gtsam_zhou/gtsam/gtsam/slam/JacobianFactorQR.h"
    "/home/geneta/project/gtsam_zhou/gtsam/gtsam/slam/JacobianFactorSVD.h"
    "/home/geneta/project/gtsam_zhou/gtsam/gtsam/slam/KarcherMeanFactor-inl.h"
    "/home/geneta/project/gtsam_zhou/gtsam/gtsam/slam/KarcherMeanFactor.h"
    "/home/geneta/project/gtsam_zhou/gtsam/gtsam/slam/OrientedPlane3Factor.h"
    "/home/geneta/project/gtsam_zhou/gtsam/gtsam/slam/PoseRotationPrior.h"
    "/home/geneta/project/gtsam_zhou/gtsam/gtsam/slam/PoseTranslationPrior.h"
    "/home/geneta/project/gtsam_zhou/gtsam/gtsam/slam/PriorFactor.h"
    "/home/geneta/project/gtsam_zhou/gtsam/gtsam/slam/ProjectionFactor.h"
    "/home/geneta/project/gtsam_zhou/gtsam/gtsam/slam/RangeFactor.h"
    "/home/geneta/project/gtsam_zhou/gtsam/gtsam/slam/ReferenceFrameFactor.h"
    "/home/geneta/project/gtsam_zhou/gtsam/gtsam/slam/RegularImplicitSchurFactor.h"
    "/home/geneta/project/gtsam_zhou/gtsam/gtsam/slam/RotateFactor.h"
    "/home/geneta/project/gtsam_zhou/gtsam/gtsam/slam/SmartFactorBase.h"
    "/home/geneta/project/gtsam_zhou/gtsam/gtsam/slam/SmartFactorParams.h"
    "/home/geneta/project/gtsam_zhou/gtsam/gtsam/slam/SmartProjectionFactor.h"
    "/home/geneta/project/gtsam_zhou/gtsam/gtsam/slam/SmartProjectionPoseFactor.h"
    "/home/geneta/project/gtsam_zhou/gtsam/gtsam/slam/SmartProjectionRigFactor.h"
    "/home/geneta/project/gtsam_zhou/gtsam/gtsam/slam/StereoFactor.h"
    "/home/geneta/project/gtsam_zhou/gtsam/gtsam/slam/TriangulationFactor.h"
    "/home/geneta/project/gtsam_zhou/gtsam/gtsam/slam/dataset.h"
    "/home/geneta/project/gtsam_zhou/gtsam/gtsam/slam/expressions.h"
    "/home/geneta/project/gtsam_zhou/gtsam/gtsam/slam/lago.h"
    )
endif()

if(NOT CMAKE_INSTALL_LOCAL_ONLY)
  # Include the install script for each subdirectory.
  include("/home/geneta/project/gtsam_zhou/gtsam/gtsam/gtsam/slam/tests/cmake_install.cmake")

endif()

