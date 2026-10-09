# Install script for directory: /home/geneta/project/gtsam_zhou/gtsam/gtsam/discrete

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
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/gtsam/discrete" TYPE FILE FILES
    "/home/geneta/project/gtsam_zhou/gtsam/gtsam/discrete/AlgebraicDecisionTree.h"
    "/home/geneta/project/gtsam_zhou/gtsam/gtsam/discrete/Assignment.h"
    "/home/geneta/project/gtsam_zhou/gtsam/gtsam/discrete/DecisionTree-inl.h"
    "/home/geneta/project/gtsam_zhou/gtsam/gtsam/discrete/DecisionTree.h"
    "/home/geneta/project/gtsam_zhou/gtsam/gtsam/discrete/DecisionTreeFactor.h"
    "/home/geneta/project/gtsam_zhou/gtsam/gtsam/discrete/DiscreteBayesNet.h"
    "/home/geneta/project/gtsam_zhou/gtsam/gtsam/discrete/DiscreteBayesTree.h"
    "/home/geneta/project/gtsam_zhou/gtsam/gtsam/discrete/DiscreteConditional.h"
    "/home/geneta/project/gtsam_zhou/gtsam/gtsam/discrete/DiscreteDistribution.h"
    "/home/geneta/project/gtsam_zhou/gtsam/gtsam/discrete/DiscreteEliminationTree.h"
    "/home/geneta/project/gtsam_zhou/gtsam/gtsam/discrete/DiscreteFactor.h"
    "/home/geneta/project/gtsam_zhou/gtsam/gtsam/discrete/DiscreteFactorGraph.h"
    "/home/geneta/project/gtsam_zhou/gtsam/gtsam/discrete/DiscreteJunctionTree.h"
    "/home/geneta/project/gtsam_zhou/gtsam/gtsam/discrete/DiscreteKey.h"
    "/home/geneta/project/gtsam_zhou/gtsam/gtsam/discrete/DiscreteLookupDAG.h"
    "/home/geneta/project/gtsam_zhou/gtsam/gtsam/discrete/DiscreteMarginals.h"
    "/home/geneta/project/gtsam_zhou/gtsam/gtsam/discrete/DiscreteValues.h"
    "/home/geneta/project/gtsam_zhou/gtsam/gtsam/discrete/Signature.h"
    "/home/geneta/project/gtsam_zhou/gtsam/gtsam/discrete/SignatureParser.h"
    "/home/geneta/project/gtsam_zhou/gtsam/gtsam/discrete/TableFactor.h"
    )
endif()

if(NOT CMAKE_INSTALL_LOCAL_ONLY)
  # Include the install script for each subdirectory.
  include("/home/geneta/project/gtsam_zhou/gtsam/gtsam/gtsam/discrete/tests/cmake_install.cmake")

endif()

