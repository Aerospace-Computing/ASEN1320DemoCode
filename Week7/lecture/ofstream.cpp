#include <iostream>
#include <fstream>

using namespace std;

int main()
{
	int number, year;
	ofstream outputExample;
	outputExample.open("Number.csv");
	cout << "Enter Course Number: ";
	cin  >> number; 
    cout << "Enter Year: ";
	cin  >> year; 
	outputExample << number << ", " << year << endl;
	outputExample.close();
	return 0; 
}