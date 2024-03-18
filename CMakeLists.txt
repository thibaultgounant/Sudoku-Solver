cmake_minimum_required(VERSION 3.25.3)

project(Sudoku_Solver CXX)

set(CMAKE_C_STANDARD 23)

set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${PROJECT_SOURCE_DIR}/bin)
set(CMAKE_LIBRARY_OUTPUT_DIRECTORY ${PROJECT_SOURCE_DIR}/lib)

include_directories(./include)

aux_source_directory(./src/classes CLASSES)

add_executable(${PROJECT_NAME} ./src/main.cpp ${CLASSES})
add_executable(${PROJECT_NAME}_test ./tests/main.cpp ${CLASSES})
