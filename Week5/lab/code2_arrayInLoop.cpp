#include <iostream>     // include to use cout and cin
#include <fstream>      // include to use file streams
#include <string>       // include to use string

using namespace std;

int main() 
{
    
     int my_array[5] = {2, 4, 6, 8, 10};
    

    /*    
    Other way of initiliaze the variable
    my_array[0] = 7;  
    my_array[1] = 8; 
    my_array[2] = 9; 
    my_array[3] = 19; 
    my_array[4] = 91; 
    
    */
    

    int i;
    cout << "my_array: ";
    
    
    for (i = 0; i < 5; i++) {
        cout << my_array[i] << " ";
    }
    cout << endl;
    
}