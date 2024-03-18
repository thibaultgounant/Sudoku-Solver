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
