#include<iostream>
using namespace std;

int myDotFunction(int x[], int y[], int size); 

int main(){
    int RowNum = 4;
    int myArray1[] = {1,2,3,4}, myArray2[] = {1,2,3,4};      
    cout << myDotFunction(myArray1, myArray2, RowNum) << endl;
    return 0;
}

int myDotFunction(int a[], int b[], int size){
   int sum = 0;
   for (int i = 0; i < size; i++) sum += a[i]*b[i];
   return sum;
}

