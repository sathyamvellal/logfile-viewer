cmake_minimum_required(VERSION 3.9)
project(${CMAKE_PROJECT_NAME}-test)

add_executable(test_hello test_hello.cpp)
target_link_libraries(test_hello common)

add_executable(test_spdlog test_spdlog.cpp)
target_link_libraries(test_spdlog PRIVATE spdlog::spdlog)

add_executable(test_glfw test_glfw.cpp)
target_link_libraries(test_glfw PRIVATE glfw)

add_executable(test_imgui test_imgui.cpp)
target_link_libraries(test_imgui imgui glfw gl3w)

install(TARGETS test_hello DESTINATION bin)
install(TARGETS test_spdlog DESTINATION bin)
install(TARGETS test_glfw DESTINATION bin)
install(TARGETS test_imgui DESTINATION bin)