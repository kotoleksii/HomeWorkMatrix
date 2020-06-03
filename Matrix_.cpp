#include "Matrix_.h"

int main()
{
	srand(time(NULL));

	Matrix a;
	a.fill();

	Matrix b(a);

	cout << "1. Increment and decrement (both forms), which change all elements by 1. " << endl << "\t";
	cout << "Matrix b\n"; b.show(); cout << "\t";
	cout << "Matrix ++b\n"; (++b).show(); cout << "\t";
	cout << "Matrix b++\n"; (b++).show(); cout << "\t";
	cout << "Matrix b\n"; b.show(); cout << "\t";
	cout << "Matrix --b\n"; (--b).show(); cout << "\t";
	cout << "Matrix b--\n"; (b--).show(); cout << "\t";
	cout << "Matrix b\n"; b.show(); cout << "\t";

	cout << endl << "2. Comparison operators for two matrices (== and =!) " << endl <<"\t";
	Matrix c;
	c.fill();
	cout << "Matrix c\n"; c.show(); cout << "\t";
	cout << "Matrix b\n"; b.show();
	cout << boolalpha << "c == b " << (c == b) << "\t";
	cout << boolalpha << "c != b " << (c != b) << endl;

	cout << endl << "3. Logical operators (<, <= , > , >=) " << endl;
	cout << boolalpha << "c < b  " << (c < b) << "\t";
	cout << boolalpha << "c <= b  " << (c <= b) << "\t";
	cout << boolalpha << "c > b  " << (c > b) << "\t";
	cout << boolalpha << "c >= b  " << (c >= b) << endl;

	cout << endl << "4. Matrix c = Matrix b " << endl << "\t";
	cout << "Matrix c " << endl;
	c = b;
	c.show();

	Matrix g;
	g.fill();
	cout << endl << "5. The operator [], which returns a string in the form of a one - dimensional array" << endl << "\t";
	cout << "Matrix g " << endl;
	g.show(); cout << "     ";
	cout << "Line - "; g[5];

	/*g[2] = 100;
	cout <<"Matrix g[2] = "<< g[2] << endl;
	g.show();*/

	cout << endl << endl << "6. Operator() to access any matrix element" << endl;
	Matrix d;
	d.fill();
	cout << "      Matrix d(2,2): " << d(2, 2) << endl;
	d.show();
	d(2, 2) = 100;
	cout << "    Matrix d(2,2) = 100 " << endl;
	d.show();

	cout << endl << "7. Type to int conversion operator (sum of all matrix elements)" << endl;
	Matrix m;
	m.fill();
	int sum = m;
	m.show();
	cout << "Sum of all matrix elements - " << (int)sum << endl;

	return 0;
}