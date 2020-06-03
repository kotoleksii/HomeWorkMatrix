#include <iostream>
#include <ctime>
#include <iomanip>

class Matrix
{
private:
	int _row;
	int _column;
	int** _matrix;
public:
	explicit Matrix();
	Matrix(const Matrix& obj);
	Matrix& operator++();
	Matrix& operator--();
	Matrix operator++(int);
	Matrix operator--(int);
	bool operator==(const Matrix& obj) const;
	bool operator!=(const Matrix& obj) const;
	bool operator<(const Matrix& obj) const;
	bool operator<=(const Matrix& obj) const;
	bool operator>(const Matrix& obj) const;
	bool operator>=(const Matrix& obj) const;
	Matrix& operator=(const Matrix& obj);
	int& operator[](int row);
	int& operator()(int r, int c);
	operator int();
	void fill();
	void show();	
	~Matrix();
};