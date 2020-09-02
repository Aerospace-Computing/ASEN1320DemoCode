#include <iostream>

using namespace std;

int main()
{
    int a, b; // a = ? and b = ?
	
	a = 5;
	b = 2;
	cout << "a = " << a << " and b = " << b << endl;
	
	
	// operations
	cout << "a + b = " << a + b << endl; // Addition
	cout << "a - b = " << a - b << endl; // Subtraction
	cout << "a * b = " << a * b << endl; // Multiplication
	cout << "a / b = " << a / b << endl; // Division					
	cout << "(double)a / b = " << (double)a / b << endl;	// casting from int to double
	cout << "a % b = " << a % b << "\n";                  // Modulo Operator
	cout << "5/7 = " << 5/7 << "\n";		// Integer division
	cout << "5.0/7.0 = " << 5.0/7.0 << "\n";  // Float division
	cout << "5.0/7 = " << 5.0/7 << "\n\n";   // Float division (1 float and 1 int)
    return 0;
}