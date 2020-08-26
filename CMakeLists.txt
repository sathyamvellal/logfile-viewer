cmake_minimum_required(VERSION 3.8)
project(cpp-bootstrap)

set(CMAKE_CXX_STANDARD 20)

set(CMAKE_INSTALL_PREFIX install)

set(PROJECT_INCLUDE_DIR include)
set(COMMON_INCLUDE_DIR common/include)

include_directories(thirdparty/spdlog/include)
include_directories(thirdparty/glfw/include)

include_directories(${CMAKE_BINARY_DIR}/thirdparty/gl3w/include)
include_directories(${CMAKE_BINARY_DIR}/thirdparty/imgui/include)

include_directories(${PROJECT_INCLUDE_DIR})
include_directories(${PROJECT_SOURCE_DIR})
include_directories(${COMMON_INCLUDE_DIR})

# Thirdparty libraries
add_subdirectory(thirdparty)

# Common code, packaged as a library
add_subdirectory(common)

# Sub-projects, packaged as libraries
add_subdirectory(src)

# Tests for Sub-projects, as execiutables
add_subdirectory(test)
