#include <iostream>

using namespace std;

int main()
{
    int i = 1;
	bool result;
	
	// assignment operators
	cout << "i = " << i << endl;
	i++;		cout << "i = " << i << " after i++\n";
	i++;		cout << "i = " << i << " after i++\n";
	i--;		cout << "i = " << i << " after i--\n";
	i+=2;		cout << "i = " << i << " after i+=2\n";
	i-=3;		cout << "i = " << i << " after i-=3\n\n";
	
	int k = 1;  cout<<"2 * k++ = " << 2*k++ << "\n";  //Post Increment
	k = 1;      cout<<"2 * ++k = " << 2*++k << "\n\n";  //Pre Increment
	
	// comparisons
	result = 1 == 1;	cout << "1 == 1 --> " << result << endl;  // Equal to
	result = 1 != 2;	cout << "1 != 2 --> " << result << endl;  // Not Equal to
	result = 1 > 1;		cout << "1 > 1  --> " << result << endl;  // Greater than
	result = 1 >= 1;	cout << "1 >= 1 --> " << result << endl;  // Greater than or equal to
	result = 1 < 2;		cout << "1 < 2  --> " << result << endl;  // Less Than
	result = 1 <= 2;	cout << "1 <= 2 --> " << result << "\n\n";// Less than or equal to
	
	// logical operators
	result = !true;				cout << "!true = " << result << endl;
	result = !false;			cout << "!false = " << result << endl;
	result = true && true;		cout << "true && true = " << result << endl; // and
	result = true && false;		cout << "true && false = " << result << endl;
	result = false && false;	cout << "false && false = " << result << endl;
	result = true || true;		cout << "true || true = " << result << endl; // or
	result = true || false;		cout << "true || false = " << result << endl;
	result = false || false;	cout << "false || false = " << result << endl;
    return 0;
}