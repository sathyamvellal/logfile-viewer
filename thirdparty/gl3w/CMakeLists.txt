cmake_minimum_required(VERSION 3.8)
project(gl3w)

file(COPY
        gl3w/gl3w_gen.py
    DESTINATION
        ${CMAKE_BINARY_DIR}/thirdparty/gl3w)

file(COPY
        gl3w/src/glfw_test.c
        gl3w/src/glut_test.c
    DESTINATION
        ${CMAKE_BINARY_DIR}/thirdparty/gl3w/src)

execute_process(
    COMMAND
        python gl3w_gen.py
    WORKING_DIRECTORY
        ${CMAKE_BINARY_DIR}/thirdparty/gl3w
)

add_library(gl3w STATIC ${CMAKE_BINARY_DIR}/thirdparty/gl3w/src/gl3w.c)

install(TARGETS gl3w DESTINATION lib)