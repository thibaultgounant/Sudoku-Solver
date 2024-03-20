#include "Matrix.hpp"

Matrix::Matrix(int m, int n) : _rows(m), _cols(n) {
    size_t size = m * n;
    _array = new int[size];
}

Matrix::Matrix(int m, int n, const int* values) : _rows(m), _cols(n) {
    size_t size = m * n;
    _array = new int[size];
    std::copy(values, values + size, _array);
}

Matrix::~Matrix() {
    delete[] _array;
}

std::ostream &operator<<(std::ostream &os, const Matrix& matrix) {
    for (int row = 0; row < matrix._rows; ++row) {
        for (int col = 0; col < matrix._cols; ++col) {
            os << matrix._array[row * matrix._cols + col] << " ";
        }
        os << std::endl;
    }
    return os;
}

int Matrix::rows() {
    return _rows;
}

int Matrix::cols() {
    return _cols;
}

int* Matrix::values() {
    return _array;
}

int Matrix::get(int row, int col) {
    return _array[row * _cols + col];
}

Matrix& Matrix::set(int row, int col, int value) {
    _array[row * _cols + col] = value;
    return *this;
}
