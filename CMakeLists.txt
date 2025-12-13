cmake_minimum_required(VERSION 3.16)
project(Hard_Life C CXX)

set(CMAKE_C_STANDARD 99)
set(CMAKE_CXX_STANDARD 17)

include_directories(
        ${CMAKE_SOURCE_DIR}/include
        ${CMAKE_SOURCE_DIR}/include/dominios
        ${CMAKE_SOURCE_DIR}/include/dominios/acoes
        ${CMAKE_SOURCE_DIR}/include/dominios/objetos

        ${CMAKE_SOURCE_DIR}/docs
)
link_directories(
        ${CMAKE_SOURCE_DIR}/lib
)

add_executable(Hard_Life
        src/main.cpp
        src/sistema.cpp

        src/dominios/objetos/personagem.cpp
        src/dominios/objetos/planoDeFundo.cpp

        src/dominios/acoes/texto.cpp
        src/utils/Utilitarios.cpp
        include/utils/utilitarios.hpp
        src/dominios/acoes/movimento.cpp
        include/dominios/acoes/movimento.hpp
)

target_link_libraries(Hard_Life
        raylib
        opengl32
        gdi32
        winmm
)
