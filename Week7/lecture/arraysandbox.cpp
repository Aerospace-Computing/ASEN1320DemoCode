#include<iostream>
using namespace std;

void myArrFunc(int arr[]);
void funcval(int x);
void funcref(int &x);

int main(){

    int myArray[] = {5, 2};    
    // What does myArray actually store?
    cout << " myArray[0] = " << myArray[0]  << endl; 
    cout << "&myArray[0] = " << &myArray[0] << endl; 
    cout << " myArray    = " << myArray     << endl;
    cout << " myArray[1] = " << myArray[1]  << endl; 
    cout << "&myArray[1] = " << &myArray[1] << endl; 
    cout << " myArray    = " << myArray     << endl;
    

	myArrFunc(myArray);

	cout << " myArray[1] = " << myArray[1]  << endl; 
	funcval(myArray[1]);
	cout << " myArray[1] = " << myArray[1]  << endl; 
	funcref(myArray[1]);
	cout << " myArray[1] = " << myArray[1]  << endl; 

	return 0;
}


void myArrFunc(int Array[]){
	cout << "address from myArrFunc: "<< Array << endl;
}

void funcval(int x){
   cout << "value of x: "  << x << endl;
   cout << "address of x from funval: " << &x << endl;
   x = -1;
}

void funcref(int &x){
   cout << "value of x: "   << x << endl;
   cout << "address of x from funref: " << &x << endl;
   x = -1;
}