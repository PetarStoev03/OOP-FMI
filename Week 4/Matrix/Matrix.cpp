#include "Matrix.h"

void Matrix::destroy() {
	for (int i = 0; i < m_rows; i++)
	{
		delete[] m_data[i];
	}

	delete[] m_data;
}

void Matrix::copy(const Matrix& other) {
	m_cols = other.m_cols;
	m_rows = other.m_rows;

	m_data = new int* [other.m_rows];
	for (int i = 0; i < other.m_rows; i++)
	{
		*m_data = new int[other.m_cols];
	}

	for (int i = 0; i < m_rows; i++)
	{
		for (int j = 0; j < m_cols; j++)
		{
			m_data[i][j] = other.m_data[i][j];
		}
	}
}

Matrix::Matrix(int rows, int cols) {
	m_rows = rows;
	m_cols = cols;

	m_data = new int* [rows];
	for (int i = 0; i < rows; i++)
	{
		*m_data = new int[cols];
	}

	for (int i = 0; i < m_rows; i++)
	{
		for (int j = 0; j < m_cols; j++)
		{
			m_data[i][j] = 0;
		}
	}
}

Matrix::~Matrix() {
	destroy();
}

Matrix& Matrix::operator=(const Matrix& other) {
	if (this != &other)
	{
		destroy();
		copy(other);
	}

	return *this;
}

Matrix::Matrix(Matrix&& other) {
	m_rows = other.m_rows;
	m_cols = other.m_cols;
	m_data = other.m_data;

	other.m_data = nullptr;
	other.m_rows = 0;
	other.m_cols = 0;
}

Matrix& Matrix::operator=(Matrix&& other) {
	if (this != &other)
	{
		destroy();
		m_rows = other.m_rows;
		m_cols = other.m_cols;
		m_data = other.m_data;

		other.m_data = nullptr;
		other.m_rows = 0;
		other.m_cols = 0;
	}
	
	return *this;
}

int& Matrix::operator()(int row, int col) {
	return m_data[row][col];
}

Matrix Matrix::operator+(const Matrix& other) const  {
	if (m_rows != other.m_rows || m_cols != other.m_cols)
	{
		throw std::exception();
	}

	Matrix sum(m_rows, m_cols);

	for (int i = 0; i < m_rows; i++)
	{
		for (int j = 0; j < m_cols; j++)
		{
			sum.m_data[i][j] = m_data[i][j] + other.m_data[i][j];
		}
	}

	return sum;
}

Matrix Matrix::operator-(const Matrix& other) const {
	if (m_rows != other.m_rows || m_cols != other.m_cols)
	{
		throw std::exception();
	}

	Matrix diff(m_rows, m_cols);

	for (int i = 0; i < m_rows; i++)
	{
		for (int j = 0; j < m_cols; j++)
		{
			diff.m_data[i][j] = m_data[i][j] - other.m_data[i][j];
		}
	}

	return diff;
}

Matrix Matrix::operator*(const Matrix& other) const {
	if (m_cols != other.m_rows)
	{
		throw std::exception();
	}

	Matrix product(m_rows, m_cols);

	for (int i = 0; i < m_rows; i++)
	{
		for (int j = 0; j < m_cols; j++)
		{
			for (int k = 0; k < m_cols; j++)
			{
				product.m_data[i][j] += m_data[i][k] * other.m_data[k][j];
			}
			
		}
	}

	return product;
}

bool Matrix::operator==(const Matrix& other) const {

	if (m_rows != other.m_rows || m_cols != other.m_cols)
	{
		return false;
	}

	for (int i = 0; i < m_rows; i++)
	{
		for (int j = 0; j < m_cols; j++)
		{
			if (m_data[i][j] != other.m_data[i][j])
			{
				return false;
			}
		}
	}

	return true;
}

bool Matrix::operator!=(const Matrix& other) const {
	return !(*this == other);
}