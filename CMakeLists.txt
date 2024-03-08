cmake_minimum_required(VERSION 3.25.3)

project(Sudoku_Solver CXX)

set(CMAKE_C_STANDARD 23)

add_executable(${PROJECT_NAME} ./src/main.cpp)
