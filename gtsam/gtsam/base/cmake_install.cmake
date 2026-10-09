# Install script for directory: /home/geneta/project/gtsam_zhou/gtsam/gtsam/base

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
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/gtsam/base" TYPE FILE FILES
    "/home/geneta/project/gtsam_zhou/gtsam/gtsam/base/ConcurrentMap.h"
    "/home/geneta/project/gtsam_zhou/gtsam/gtsam/base/DSFMap.h"
    "/home/geneta/project/gtsam_zhou/gtsam/gtsam/base/DSFVector.h"
    "/home/geneta/project/gtsam_zhou/gtsam/gtsam/base/FastDefaultAllocator.h"
    "/home/geneta/project/gtsam_zhou/gtsam/gtsam/base/FastList.h"
    "/home/geneta/project/gtsam_zhou/gtsam/gtsam/base/FastMap.h"
    "/home/geneta/project/gtsam_zhou/gtsam/gtsam/base/FastSet.h"
    "/home/geneta/project/gtsam_zhou/gtsam/gtsam/base/FastVector.h"
    "/home/geneta/project/gtsam_zhou/gtsam/gtsam/base/GenericValue.h"
    "/home/geneta/project/gtsam_zhou/gtsam/gtsam/base/Group.h"
    "/home/geneta/project/gtsam_zhou/gtsam/gtsam/base/Lie.h"
    "/home/geneta/project/gtsam_zhou/gtsam/gtsam/base/Manifold.h"
    "/home/geneta/project/gtsam_zhou/gtsam/gtsam/base/Matrix.h"
    "/home/geneta/project/gtsam_zhou/gtsam/gtsam/base/MatrixSerialization.h"
    "/home/geneta/project/gtsam_zhou/gtsam/gtsam/base/OptionalJacobian.h"
    "/home/geneta/project/gtsam_zhou/gtsam/gtsam/base/ProductLieGroup.h"
    "/home/geneta/project/gtsam_zhou/gtsam/gtsam/base/SymmetricBlockMatrix.h"
    "/home/geneta/project/gtsam_zhou/gtsam/gtsam/base/Testable.h"
    "/home/geneta/project/gtsam_zhou/gtsam/gtsam/base/TestableAssertions.h"
    "/home/geneta/project/gtsam_zhou/gtsam/gtsam/base/ThreadsafeException.h"
    "/home/geneta/project/gtsam_zhou/gtsam/gtsam/base/Value.h"
    "/home/geneta/project/gtsam_zhou/gtsam/gtsam/base/Vector.h"
    "/home/geneta/project/gtsam_zhou/gtsam/gtsam/base/VectorSerialization.h"
    "/home/geneta/project/gtsam_zhou/gtsam/gtsam/base/VectorSpace.h"
    "/home/geneta/project/gtsam_zhou/gtsam/gtsam/base/VerticalBlockMatrix.h"
    "/home/geneta/project/gtsam_zhou/gtsam/gtsam/base/WeightedSampler.h"
    "/home/geneta/project/gtsam_zhou/gtsam/gtsam/base/chartTesting.h"
    "/home/geneta/project/gtsam_zhou/gtsam/gtsam/base/cholesky.h"
    "/home/geneta/project/gtsam_zhou/gtsam/gtsam/base/concepts.h"
    "/home/geneta/project/gtsam_zhou/gtsam/gtsam/base/debug.h"
    "/home/geneta/project/gtsam_zhou/gtsam/gtsam/base/kruskal-inl.h"
    "/home/geneta/project/gtsam_zhou/gtsam/gtsam/base/kruskal.h"
    "/home/geneta/project/gtsam_zhou/gtsam/gtsam/base/lieProxies.h"
    "/home/geneta/project/gtsam_zhou/gtsam/gtsam/base/make_shared.h"
    "/home/geneta/project/gtsam_zhou/gtsam/gtsam/base/numericalDerivative.h"
    "/home/geneta/project/gtsam_zhou/gtsam/gtsam/base/serialization.h"
    "/home/geneta/project/gtsam_zhou/gtsam/gtsam/base/serializationTestHelpers.h"
    "/home/geneta/project/gtsam_zhou/gtsam/gtsam/base/std_optional_serialization.h"
    "/home/geneta/project/gtsam_zhou/gtsam/gtsam/base/testLie.h"
    "/home/geneta/project/gtsam_zhou/gtsam/gtsam/base/timing.h"
    "/home/geneta/project/gtsam_zhou/gtsam/gtsam/base/treeTraversal-inst.h"
    "/home/geneta/project/gtsam_zhou/gtsam/gtsam/base/types.h"
    "/home/geneta/project/gtsam_zhou/gtsam/gtsam/base/utilities.h"
    )
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/gtsam/base/treeTraversal" TYPE FILE FILES
    "/home/geneta/project/gtsam_zhou/gtsam/gtsam/base/treeTraversal/parallelTraversalTasks.h"
    "/home/geneta/project/gtsam_zhou/gtsam/gtsam/base/treeTraversal/statistics.h"
    )
endif()

if(NOT CMAKE_INSTALL_LOCAL_ONLY)
  # Include the install script for each subdirectory.
  include("/home/geneta/project/gtsam_zhou/gtsam/gtsam/gtsam/base/tests/cmake_install.cmake")

endif()

