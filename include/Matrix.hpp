#ifndef SUDOKU_SOLVER_MATRIX_HPP
#define SUDOKU_SOLVER_MATRIX_HPP

#include <iostream>
#include <algorithm>

class Matrix {

private:
    int _rows;
    int _cols;
    int* _array;

public:
    Matrix(int m, int n);
    Matrix(int m, int n, const int *data);

    ~Matrix();

    friend std::ostream &operator<<(std::ostream& os, const Matrix& matrix);

    int rows();
    int cols();
    int* values();

    int get(int row, int col);
    Matrix& set(int row, int col, int value);
};

#endif
