# Generated by CMake

if("${CMAKE_MAJOR_VERSION}.${CMAKE_MINOR_VERSION}" LESS 2.5)
   message(FATAL_ERROR "CMake >= 2.6.0 required")
endif()
cmake_policy(PUSH)
cmake_policy(VERSION 2.6...3.17)
#----------------------------------------------------------------
# Generated CMake target import file.
#----------------------------------------------------------------

# Commands may need to know the format version.
set(CMAKE_IMPORT_FILE_VERSION 1)

# Protect against multiple inclusion, which would fail when already imported targets are added once more.
set(_targetsDefined)
set(_targetsNotDefined)
set(_expectedTargets)
foreach(_expectedTarget mvsim::mvsim-msgs)
  list(APPEND _expectedTargets ${_expectedTarget})
  if(NOT TARGET ${_expectedTarget})
    list(APPEND _targetsNotDefined ${_expectedTarget})
  endif()
  if(TARGET ${_expectedTarget})
    list(APPEND _targetsDefined ${_expectedTarget})
  endif()
endforeach()
if("${_targetsDefined}" STREQUAL "${_expectedTargets}")
  unset(_targetsDefined)
  unset(_targetsNotDefined)
  unset(_expectedTargets)
  set(CMAKE_IMPORT_FILE_VERSION)
  cmake_policy(POP)
  return()
endif()
if(NOT "${_targetsDefined}" STREQUAL "")
  message(FATAL_ERROR "Some (but not all) targets in this export set were already defined.\nTargets Defined: ${_targetsDefined}\nTargets not yet defined: ${_targetsNotDefined}\n")
endif()
unset(_targetsDefined)
unset(_targetsNotDefined)
unset(_expectedTargets)


# Create imported target mvsim::mvsim-msgs
add_library(mvsim::mvsim-msgs SHARED IMPORTED)

set_target_properties(mvsim::mvsim-msgs PROPERTIES
  INTERFACE_COMPILE_DEFINITIONS "MVSIM_HAS_PROTOBUF;MVSIM_HAS_ZMQ"
  INTERFACE_INCLUDE_DIRECTORIES "/home/swaminathan/catkin_ws/src/mvsim/build/modules/msgs"
)

# Import target "mvsim::mvsim-msgs" for configuration "Release"
set_property(TARGET mvsim::mvsim-msgs APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(mvsim::mvsim-msgs PROPERTIES
  IMPORTED_LOCATION_RELEASE "/home/swaminathan/catkin_ws/src/mvsim/build/modules/msgs/lib/libmvsim-msgs.so.0.11.2"
  IMPORTED_SONAME_RELEASE "libmvsim-msgs.so.0.11.2"
  )

# This file does not depend on other imported targets which have
# been exported from the same project but in a separate export set.

# Commands beyond this point should not need to know the version.
set(CMAKE_IMPORT_FILE_VERSION)
cmake_policy(POP)
