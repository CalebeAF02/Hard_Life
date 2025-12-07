cmake_minimum_required(VERSION 3.16)
project(Hard_Life C CXX)

set(CMAKE_C_STANDARD 99)
set(CMAKE_CXX_STANDARD 17)

include_directories(
        ${CMAKE_SOURCE_DIR}/include
        ${CMAKE_SOURCE_DIR}/docs
)
link_directories(
        ${CMAKE_SOURCE_DIR}/lib
)

add_executable(Hard_Life
        src/main.cpp
        src/sistema.cpp
)

target_link_libraries(Hard_Life
        raylib
        opengl32
        gdi32
        winmm
)
