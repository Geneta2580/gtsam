# Install script for directory: /home/geneta/project/gtsam_zhou/gtsam/gtsam/inference

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
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/gtsam/inference" TYPE FILE FILES
    "/home/geneta/project/gtsam_zhou/gtsam/gtsam/inference/BayesNet-inst.h"
    "/home/geneta/project/gtsam_zhou/gtsam/gtsam/inference/BayesNet.h"
    "/home/geneta/project/gtsam_zhou/gtsam/gtsam/inference/BayesTree-inst.h"
    "/home/geneta/project/gtsam_zhou/gtsam/gtsam/inference/BayesTree.h"
    "/home/geneta/project/gtsam_zhou/gtsam/gtsam/inference/BayesTreeCliqueBase-inst.h"
    "/home/geneta/project/gtsam_zhou/gtsam/gtsam/inference/BayesTreeCliqueBase.h"
    "/home/geneta/project/gtsam_zhou/gtsam/gtsam/inference/ClusterTree-inst.h"
    "/home/geneta/project/gtsam_zhou/gtsam/gtsam/inference/ClusterTree.h"
    "/home/geneta/project/gtsam_zhou/gtsam/gtsam/inference/Conditional-inst.h"
    "/home/geneta/project/gtsam_zhou/gtsam/gtsam/inference/Conditional.h"
    "/home/geneta/project/gtsam_zhou/gtsam/gtsam/inference/DotWriter.h"
    "/home/geneta/project/gtsam_zhou/gtsam/gtsam/inference/EliminateableFactorGraph-inst.h"
    "/home/geneta/project/gtsam_zhou/gtsam/gtsam/inference/EliminateableFactorGraph.h"
    "/home/geneta/project/gtsam_zhou/gtsam/gtsam/inference/EliminationTree-inst.h"
    "/home/geneta/project/gtsam_zhou/gtsam/gtsam/inference/EliminationTree.h"
    "/home/geneta/project/gtsam_zhou/gtsam/gtsam/inference/Factor.h"
    "/home/geneta/project/gtsam_zhou/gtsam/gtsam/inference/FactorGraph-inst.h"
    "/home/geneta/project/gtsam_zhou/gtsam/gtsam/inference/FactorGraph.h"
    "/home/geneta/project/gtsam_zhou/gtsam/gtsam/inference/ISAM-inst.h"
    "/home/geneta/project/gtsam_zhou/gtsam/gtsam/inference/ISAM.h"
    "/home/geneta/project/gtsam_zhou/gtsam/gtsam/inference/JunctionTree-inst.h"
    "/home/geneta/project/gtsam_zhou/gtsam/gtsam/inference/JunctionTree.h"
    "/home/geneta/project/gtsam_zhou/gtsam/gtsam/inference/Key.h"
    "/home/geneta/project/gtsam_zhou/gtsam/gtsam/inference/LabeledSymbol.h"
    "/home/geneta/project/gtsam_zhou/gtsam/gtsam/inference/MetisIndex-inl.h"
    "/home/geneta/project/gtsam_zhou/gtsam/gtsam/inference/MetisIndex.h"
    "/home/geneta/project/gtsam_zhou/gtsam/gtsam/inference/Ordering.h"
    "/home/geneta/project/gtsam_zhou/gtsam/gtsam/inference/Symbol.h"
    "/home/geneta/project/gtsam_zhou/gtsam/gtsam/inference/VariableIndex-inl.h"
    "/home/geneta/project/gtsam_zhou/gtsam/gtsam/inference/VariableIndex.h"
    "/home/geneta/project/gtsam_zhou/gtsam/gtsam/inference/VariableSlots.h"
    "/home/geneta/project/gtsam_zhou/gtsam/gtsam/inference/graph-inl.h"
    "/home/geneta/project/gtsam_zhou/gtsam/gtsam/inference/graph.h"
    "/home/geneta/project/gtsam_zhou/gtsam/gtsam/inference/inference-inst.h"
    "/home/geneta/project/gtsam_zhou/gtsam/gtsam/inference/inferenceExceptions.h"
    )
endif()

if(NOT CMAKE_INSTALL_LOCAL_ONLY)
  # Include the install script for each subdirectory.
  include("/home/geneta/project/gtsam_zhou/gtsam/gtsam/gtsam/inference/tests/cmake_install.cmake")

endif()

