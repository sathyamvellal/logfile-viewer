cmake_minimum_required(VERSION 3.9)
project(${CMAKE_PROJECT_NAME}-thirdparty)

# spdlog
add_subdirectory(spdlog)

# fmt
add_subdirectory(fmt)

# glfw
set(GLFW_BUILD_DOCS OFF CACHE BOOL "" FORCE)
set(GLFW_BUILD_TESTS OFF CACHE BOOL "" FORCE)
set(GLFW_BUILD_EXAMPLES OFF CACHE BOOL "" FORCE)
add_subdirectory(glfw)

# gl3w
add_subdirectory(gl3w)

# Dear, ImGui
add_subdirectory(imgui)