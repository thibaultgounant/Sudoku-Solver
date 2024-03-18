#ifndef SUDOKU_SOLVER_MATRIX_HPP
#define SUDOKU_SOLVER_MATRIX_HPP

#include <iostream>
#include <algorithm>

class Matrix {

private:
    int rows;
    int columns;
    int* array;

public:
    Matrix(int m, int n);
    Matrix(int m, int n, const int* data);
    ~Matrix();
};

#endif
