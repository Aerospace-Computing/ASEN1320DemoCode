#include <iostream>
#include <fstream>
#include <cmath>

using namespace std;
double const PI = 3.14159265358979323846;

int main()
{
	double theta = 90.0;
	double price = 100.0/3, dlen = cos(theta*PI/180.0);
	cout << "The price is $" << price << endl;
	cout << "The cosine of " << theta << " deg is " << dlen << endl;	
	return 0; 
}
	/*
cout.setf(ios::fixed);
    cout.setf(ios::showpoint);
    cout.precision(2);	
	
		cout.precision(4);

	ofstream outputExample;
	outputExample.open("Number.txt");
	outputExample << number << ", " << year << endl;
	outputExample.close(); */