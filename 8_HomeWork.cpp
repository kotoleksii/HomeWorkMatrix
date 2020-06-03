#include "Matrix_.h"

Matrix::Matrix() : _row{ 5 }, _column{ 5 }
{
	this->_matrix = new int* [this->_row];
	for (int count_row = 0; count_row < this->_row; count_row++)
	{
		this->_matrix[count_row] = new int[this->_column];
		for (int count_column = 0; count_column < this->_column; count_column++)
		{
			this->_matrix[count_row][count_column] = 0;
		}
	}
}
Matrix::Matrix(const Matrix& obj) : _row{ obj._row }, _column{ obj._column }
{
	this->_matrix = new int* [this->_row];
	*this->_matrix = *(obj._matrix);
	for (int count_row = 0; count_row < this->_row; count_row++)
	{
		this->_matrix[count_row] = new int[this->_column];
		*this->_matrix[count_row] = *(obj._matrix[count_row]);
		for (int count_column = 0; count_column < this->_column; count_column++)
		{
			this->_matrix[count_row][count_column] = obj._matrix[count_row][count_column];
		}
	}
}
Matrix& Matrix::operator++()
{
	for (int count_row = 0; count_row < this->_row; count_row++)
	{
		for (int count_column = 0; count_column < this->_column; count_column++)
		{
			this->_matrix[count_row][count_column]++;
		}
	}
	return *this;
}
Matrix& Matrix::operator--()
{
	for (int count_row = 0; count_row < this->_row; count_row++)
	{
		for (int count_column = 0; count_column < this->_column; count_column++)
		{
			this->_matrix[count_row][count_column]--;
		}
	}
	return *this;
}
Matrix Matrix::operator++(int)
{
	Matrix tmp = *this;
	for (int count_row = 0; count_row < this->_row; count_row++)
	{
		for (int count_column = 0; count_column < this->_column; count_column++)
		{
			this->_matrix[count_row][count_column]++;
		}
	}
	return tmp;
}
Matrix Matrix::operator--(int)
{
	Matrix tmp = *this;
	for (int count_row = 0; count_row < this->_row; count_row++)
	{
		for (int count_column = 0; count_column < this->_column; count_column++)
		{
			this->_matrix[count_row][count_column]--;
		}
	}
	return tmp;
}
bool Matrix::operator==(const Matrix& obj) const
{
	for (int count_row = 0; count_row < this->_row && count_row < obj._row; count_row++)
	{
		for (int count_column = 0; count_column < this->_column && count_column < obj._column; count_column++)
		{
			this->_matrix[count_row][count_column] && obj._matrix[obj._row][obj._column];
		}
	}
	return this->_matrix == obj._matrix;
}
bool Matrix::operator!=(const Matrix& obj) const
{
	return !(*this == obj);
}
bool Matrix::operator<(const Matrix& obj) const
{
	for (int count_row = 0; count_row < this->_row && count_row < obj._row; count_row++)
	{
		for (int count_column = 0; count_column < this->_column && count_column < obj._column; count_column++)
		{
			this->_matrix[count_row][count_column] && obj._matrix[obj._row][obj._column];
		}
	}
	return this->_matrix < obj._matrix;
}
bool Matrix::operator<=(const Matrix& obj) const
{
	for (int count_row = 0; count_row < this->_row && count_row < obj._row; count_row++)
	{
		for (int count_column = 0; count_column < this->_column && count_column < obj._column; count_column++)
		{
			this->_matrix[count_row][count_column] && obj._matrix[obj._row][obj._column];
		}
	}
	return this->_matrix <= obj._matrix;
}
bool Matrix::operator>(const Matrix& obj) const
{
	for (int count_row = 0; count_row < this->_row && count_row < obj._row; count_row++)
	{
		for (int count_column = 0; count_column < this->_column && count_column < obj._column; count_column++)
		{
			this->_matrix[count_row][count_column] && obj._matrix[obj._row][obj._column];
		}
	}
	return this->_matrix > obj._matrix;
}
bool Matrix::operator>=(const Matrix& obj) const
{
	for (int count_row = 0; count_row < this->_row && count_row < obj._row; count_row++)
	{
		for (int count_column = 0; count_column < this->_column && count_column < obj._column; count_column++)
		{
			this->_matrix[count_row][count_column] && obj._matrix[obj._row][obj._column];
		}
	}
	return this->_matrix >= obj._matrix;
}
Matrix& Matrix::operator=(const Matrix& obj)
{
	if (this == &obj) { return *this; }
	this->_row = obj._row;
	this->_column = obj._column;

	for (int count_row = 0; count_row < this->_row; count_row++)
	{
		this->_matrix[count_row] = new int[this->_column];
		*this->_matrix[count_row] = *(obj._matrix[count_row]);
		for (int count_column = 0; count_column < this->_column; count_column++)
		{
			this->_matrix[count_row][count_column] = obj._matrix[count_row][count_column];
		}
	}
	return *this;
}
int& Matrix::operator[](int row)
{
	for (int count = 0; count < row; count++)
	{
		cout << *this->_matrix[count] << " ";
	}
	return *this->_matrix[row];
}
int& Matrix::operator()(int row, int column)
{
	return this->_matrix[row][column];
}
Matrix::operator int()
{
	int sum = 0;
	for (int count_row = 0; count_row < this->_row; count_row++)
	{
		for (int count_column = 0; count_column < this->_column; count_column++)
		{
			sum += this->_matrix[count_row][count_column];
		}
	}
	return sum;
}
void Matrix::fill()
{
	for (int count_row = 0; count_row < this->_row; count_row++)
	{
		for (int count_column = 0; count_column < this->_column; count_column++)
		{
			this->_matrix[count_row][count_column] = (rand() % 10 + 1);
		}
	}
}
void Matrix::show()
{
	for (int count_row = 0; count_row < this->_row; count_row++)
	{
		for (int count_column = 0; count_column < this->_column; count_column++)
		{
			cout << setw(4) << this->_matrix[count_row][count_column] << " ";
		}
		cout << endl;
	}
}
Matrix::~Matrix()
{
	if (this->_matrix != nullptr)
		for (int count = 0; count < this->_row; count++)
			delete this->_matrix[count];
	delete this->_matrix;
}