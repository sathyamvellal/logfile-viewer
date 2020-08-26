cmake_minimum_required(VERSION 3.8)
project(imgui-wrapper)

file(COPY
        imgui/imconfig.h
        imgui/imgui.h
        imgui/imgui_internal.h
        imgui/imstb_textedit.h
        imgui/imstb_rectpack.h
        imgui/imstb_truetype.h
        imgui/examples/imgui_impl_glfw.h
        imgui/examples/imgui_impl_opengl3.h
        imgui/misc/cpp/imgui_stdlib.h
    DESTINATION
        include)

file(COPY
        imgui/imgui.cpp
        imgui/imgui_demo.cpp
        imgui/imgui_draw.cpp
        imgui/imgui_widgets.cpp
        imgui/examples/imgui_impl_glfw.cpp
        imgui/examples/imgui_impl_opengl3.cpp
        imgui/misc/cpp/imgui_stdlib.cpp
    DESTINATION
        src)

include_directories(include)

set(IMGUI_SOURCES
    src/imgui.cpp
    src/imgui_demo.cpp
    src/imgui_draw.cpp
    src/imgui_widgets.cpp
    src/imgui_impl_glfw.cpp
    src/imgui_impl_opengl3.cpp
    src/imgui_stdlib.cpp)

add_library(imgui STATIC ${IMGUI_SOURCES})
target_compile_definitions(imgui PUBLIC IMGUI_IMPL_OPENGL_LOADER_GL3W)

install(TARGETS imgui DESTINATION lib)