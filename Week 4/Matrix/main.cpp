#include "Matrix.h"

Matrix transpose(const Matrix& matrix) {
    Matrix tMatrix(matrix.m_rows, matrix.m_cols);

    for (int i = 0; i < tMatrix.m_rows; i++)
    {
        for (int j = 0; j < tMatrix.m_cols; j++)
        {
            tMatrix.m_data[j][i] = matrix.m_data[i][j];
        }
    }

    return tMatrix;
}

void print(const Matrix& matrix) {
    for (int i = 0; i < matrix.m_rows; i++)
    {
        for (int j = 0; j < matrix.m_cols; j++)
        {
            std::cout << matrix.m_data[i][j] << " ";
        }
        std::cout << std::endl;
    }
}

int main() {
    Matrix a(2, 2);
    a(0, 0) = 1;
    a(0, 1) = 2;
    a(1, 0) = 3;
    a(1, 1) = 4;
    print(a);

    Matrix b(2, 2);
    b(0, 0) = 5;
    b(0, 1) = 6;
    b(1, 0) = 7;
    b(1, 1) = 8;
    print(b);

    Matrix c = a + b;
    print(c);

    Matrix d = a - b;
    print(d);

    Matrix e = a * b;
    print(e);

    if (a == b) {
        std::cout << "a is equal to b" << std::endl;
    }
    else {
        std::cout << "a is not equal to b" << std::endl;
    }

    Matrix f = a;
}