cmake_minimum_required(VERSION 3.29)
project(Jun_Xu_NocionesClave)

set(CMAKE_CXX_STANDARD 14)

include_directories(.)

add_executable(Jun_Xu_NocionesClave
        proyectos1,2/main.cpp
        proyectos1,2/main.h
        proyectos1,2/Persona.cpp
        proyectos1,2/Persona.h
        proyectos1,2/Estudiante.cpp
        proyectos1,2/Estudiante.h
)
add_executable(Jun_Xu_NocionesClave2
        proyectos3,4,5/main.cpp
        proyectos3,4,5/main.h
        proyectos3,4,5/nuevo.cpp
        proyectos3,4,5/funciones.cpp
        proyectos3,4,5/funciones.h
        proyectos3,4,5/matematicas.cpp
        proyectos3,4,5/matematicas.h
)

include(FetchContent)
FetchContent_Declare(
        fmt
        GIT_REPOSITORY https://github.com/fmtlib/fmt.git
        GIT_TAG        7.1.3
)

FetchContent_MakeAvailable(fmt)
target_link_libraries(Jun_Xu_NocionesClave2 PRIVATE fmt::fmt)

add_library(matematicas STATIC proyectos3,4,5/matematicas.cpp)
add_library(matematicas2 SHARED proyectos3,4,5/matematicas.cpp)

