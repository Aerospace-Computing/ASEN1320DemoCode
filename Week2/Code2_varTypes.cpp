#include <iostream>
#include <string>  // for string variables

using namespace std;

int main()
{
    // declaring variables
	char c;		// c = ?  Uses single quotes ''
	int i;		// i = ?  Integer
	double d;	// d = ?  Double -> Decimals
	string s;	// s = ?  Uses double quotes ""
	bool b;		// b = ?  True/False -> 1/0
	

	// undefined behavior if variables are used before declaration (can't assume initalized to zero)
	cout << "i = " << i << " and d = " << d << endl;
	
	
	// initializing variables
	c = 'a';							cout << "c = " << c << endl;
	i = 9;								cout << "i = " << i << endl;
	i = 5.5;							cout << "i = " << i << endl; 
	d = 1.2;							cout << "d = " << d << endl;
	s = "strings use DOUBLE quotes";	cout << "s = " << s << endl;
	b = true;							cout << "b = " << b << "\n\n"; // lowercase 't' in true and 'f' in false

	
	// special characters
	char newline = '\n';
	char tab = '\t'; 
	cout << "Here's a newline:" << newline << "and a tab:" << tab << "!\n\n";


	// constants
	const double pi = 3.14159;
	
	// ERRORS  Uncomment below syntax to see the error. Uncomment one at a time.
	// double d; // redeclaring a variable
	// pi = 3; // redefining constants
	
	
    return 0;
}

