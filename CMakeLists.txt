cmake_minimum_required(VERSION 3.15)

project(pawn_chess)

set(CMAKE_CXX_STANDARD 20)

set(SOURCES
    src/board_handler.h
    src/board_handler.cpp
    src/evaluation.h
    src/evaluation.cpp
    src/io_manager.h
    src/io_manager.cpp
    src/minmax.h
    src/minmax.cpp
    src/utils.h
    )

add_executable(pawn_chess ${SOURCES} main.cpp)