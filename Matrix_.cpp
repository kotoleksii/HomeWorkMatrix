#include "Matrix_.h"

int main()
{
	srand(time(NULL));

	Matrix a;
	a.fill();

	Matrix b(a);

	std::cout << "1. Increment and decrement (both forms), which change all elements by 1. " << std::endl << "\t";
	std::cout << "Matrix b\n"; b.show(); std::cout << "\t";
	std::cout << "Matrix ++b\n"; (++b).show(); std::cout << "\t";
	std::cout << "Matrix b++\n"; (b++).show(); std::cout << "\t";
	std::cout << "Matrix b\n"; b.show(); std::cout << "\t";
	std::cout << "Matrix --b\n"; (--b).show(); std::cout << "\t";
	std::cout << "Matrix b--\n"; (b--).show(); std::cout << "\t";
	std::cout << "Matrix b\n"; b.show(); std::cout << "\t";

	std::cout << std::endl << "2. Comparison operators for two matrices (== and =!) " << std::endl <<"\t";
	Matrix c;
	c.fill();
	std::cout << "Matrix c\n"; c.show(); std::cout << "\t";
	std::cout << "Matrix b\n"; b.show();
	std::cout << std::boolalpha << "c == b " << (c == b) << "\t";
	std::cout << std::boolalpha << "c != b " << (c != b) << std::endl;

	std::cout << std::endl << "3. Logical operators (<, <= , > , >=) " << std::endl;
	std::cout << std::boolalpha << "c < b  " << (c < b) << "\t";
	std::cout << std::boolalpha << "c <= b  " << (c <= b) << "\t";
	std::cout << std::boolalpha << "c > b  " << (c > b) << "\t";
	std::cout << std::boolalpha << "c >= b  " << (c >= b) << std::endl;

	std::cout << std::endl << "4. Matrix c = Matrix b " << std::endl << "\t";
	std::cout << "Matrix c " << std::endl;
	c = b;
	c.show();

	Matrix g;
	g.fill();
	std::cout << std::endl << "5. The operator [], which returns a string in the form of a one - dimensional array" << std::endl << "\t";
	std::cout << "Matrix g " << std::endl;
	g.show(); std::cout << "     ";
	std::cout << "Line - "; g[5];

	std::cout << std::endl << std::endl << "6. Operator() to access any matrix element" << std::endl;
	Matrix d;
	d.fill();
	std::cout << "      Matrix d(2,2): " << d(2, 2) << std::endl;
	d.show();
	d(2, 2) = 100;
	std::cout << "    Matrix d(2,2) = 100 " << std::endl;
	d.show();

	std::cout << std::endl << "7. Type to int conversion operator (sum of all matrix elements)" << std::endl;
	Matrix m;
	m.fill();
	int sum = m;
	m.show();
	std::cout << "Sum of all matrix elements - " << (int)sum << std::endl;

	return 0;
}