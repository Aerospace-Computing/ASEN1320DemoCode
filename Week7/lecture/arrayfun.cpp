#include<iostream>

using namespace std;

void myFunction(int x[], int size);

int main(){
    int const SIZE = 4;
    int myArray[SIZE] = {9, 5, 3, 1};    
    for (int i = 0; i < SIZE; i++) cout << myArray[i] << " ";
    myFunction(myArray,  SIZE);
    for (int i = 0; i < SIZE; i++) cout << myArray[i] << " ";
    return 0;
}  

void myFunction(int a[], int len){ 
   for (int i = 0; i < len; i++) a[i] = a[i]*a[i];
}