#include<iostream>
#include<string>

using namespace std;

int main ()
{
    char char_hello1[]  =  "Hello"; //  6 chars "Hello\0"
    
    char char_hello2[6] = {'H', 'e', 'l', 'l', 'o', '\0'};
    
    string str_hello  = "Hello";
    
    cout << str_hello  << endl;
    for (int i=0; i < 5; i++) cout << char_hello1[i] << endl;  
    for (int i=0; i < 5; i++) cout << char_hello2[i] << endl;  
    
    return 0;
}


