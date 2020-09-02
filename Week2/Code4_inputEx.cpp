#include <iostream>

using namespace std;

int main()
{
    // input with strings
	string name;
    cout << "What's your name? ";
    cin >> name;
	cout << "Hello, " << name << "!\n\n";
	
	// input with numbers
	int birth_year;
	cout << "What is your birth year? ";
	cin >> birth_year;

	// operations using inputs
	int age;
	age = 2020 - birth_year;
	cout << "Wow! You're around " << age << " years old!\n";
	cout << "Wow! You're around " << 2020 - birth_year << " years old!\n\n"; // you can do operations inline
	
	// multiple inputs
	string s;
	int i;
	cout << "Input a word and a number: ";
	cin >> s >> i;
	cout << "s = \"" << s << "\" and i = " << i << "\n\n";
	
    return 0;
}