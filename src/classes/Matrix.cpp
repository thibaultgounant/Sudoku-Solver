#include "Matrix.hpp"

Matrix::Matrix(int m, int n) : rows(m), columns(n) {
    array = new int[m * n];
}

Matrix::Matrix(int m, int n, const int* data) : rows(m), columns(n) {
    array = new int[m * n];
    std::copy(data, data + m * n, array);
}

Matrix::~Matrix() {
    delete[] array;
}

std::ostream &operator<<(std::ostream &os, const Matrix& matrix) {
    for (int i = 0; i < matrix.rows; ++i) {
        for (int j = 0; j < matrix.columns; ++j) {
            os << matrix.array[i * matrix.columns + j] << " ";
        }
        os << std::endl;
    }
    return os;
}
