#include<iostream>

using namespace std;

int myDotFunction(int x[][2], int size); 

int main(){
    int RowNum = 4;
    int myArray[][2] = { 
        {1, 1}, 
        {2, 2}, 
        {3, 3}, 
        {4, 4}
        };       
    cout << myDotFunction(myArray, RowNum) << endl;
    return 0;
}

int myDotFunction(int a[][2], int size){
   int sum = 0;
   for (int i = 0; i < size; i++) sum += a[i][0]*a[i][1];
   return sum;
}

