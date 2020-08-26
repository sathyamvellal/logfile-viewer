cmake_minimum_required(VERSION 3.9)
project(${CMAKE_PROJECT_NAME}-test)

add_executable(test_hello test_hello.cpp)
target_link_libraries(test_hello common)

add_executable(test_spdlog test_spdlog.cpp)
target_link_libraries(test_spdlog PRIVATE spdlog::spdlog)

install(TARGETS test_hello DESTINATION bin)
install(TARGETS test_spdlog DESTINATION bin)