cmake_minimum_required(VERSION 4.0)
project(Hard_Life)

set(CMAKE_CXX_STANDARD 20)
include_directories(
        include
        docs
        libs

)
add_executable(Hard_Life main.cpp
        src/sistema.cpp

)
