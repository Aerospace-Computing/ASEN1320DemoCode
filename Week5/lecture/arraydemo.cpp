#include <iostream>

using namespace std;

int main( )
{
   // x is an array of 5 integer, but only first 3 elements are initialized
   int x[5] = { 1, 2, 3 } ; 
   // for-loop to print value and address of each element of array 
   for ( int i = 0 ; i < 6 ; i++ )
   {
      cout <<"x["<<i<<"]: value is "<< x[i] <<" and address is "<< &x[i] << endl; 
   }
   return 0;
}
