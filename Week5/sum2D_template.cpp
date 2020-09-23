#include<iostream>

using namespace std;

int main ()
{
    
const int COUNTRIES = 7;
const int MEDALS = 3;

int counts[COUNTRIES][MEDALS] = 
{ 
    {1, 0, 1},
    {1, 1, 0},
    {0, 0, 1},
    {1, 0, 0},
    {0, 1, 1},
    {0, 1, 1},
    {1, 1, 0}
};
 
// Compute row total   
int total_row[COUNTRIES] = {0}; // initializing all the elements to zero. it only works for zero






// Compute column total 
int total_columns[MEDALS] = {0}; // initializing all the elements to zero. it only works for zero





return 0;    
}
