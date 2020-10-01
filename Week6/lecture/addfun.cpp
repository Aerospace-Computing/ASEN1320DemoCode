#include<iostream>

using namespace std;

int myInput = 5;  // global variable

void myFunction(int &x); // vs. void myFunction(int x);

int main(){
    int myVar=0; // myVar is local to main()
    myFunction(myVar);
    cout << "myVar= " << myVar << endl;
    return 0;
}

void myFunction(int &x){ // vs. void myFunction(int x){ 
    x = myInput + x;     // x is local to myFunction()
    cout << "x= " << x << endl;
}