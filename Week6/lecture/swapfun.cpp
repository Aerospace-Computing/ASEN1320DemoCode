#include <string>
#include <iostream>

using namespace std;

// function prototype
void swap (int &x, int &y);

int main ()
{
   int a = 5;
   int b = 9;

   cout << "This program exchanges 2 values using call-by-reference" << endl;
   cout << "MAIN: Values before the exchange:" << endl;
   cout << "a= " << a << " b= " << b << endl;

   swap(a, b);  // code that calls the function

   cout << "MAIN: Values after the exchange:" << endl;
   cout << "a= " << a << " b= " << b << endl;
   
   return 0;
}


// function for passing by reference 
void swap (int &x, int &y)
{

   cout << "FUNCTION: Values before the exchange:" << endl;
   cout << "x= " << x << " y= " << y << endl;    
    
   int temp;
   temp = x;
   x = y;
   y = temp;
   
   cout << "FUNCTION: Values after the exchange:" << endl;
   cout << "x= " << x << " y= " << y << endl;
   
   return;
} // end swap