#include <iostream>

using namespace std;


int main()
{
    
    /*
    
    Valid Cases
        case 1
        case 1 + 2
        case 'a'
        case 'a' < 'b'
    
    Invalid Cases
        case "string"  // string constants are not allowed
        case 1.2       // floating point constants are not allowed
        case a         // variables are not allowed
        case a + b     // variables are not allowed
        case 1,2,3     // each case must contain only one constant

    
    */
    
    int choice = 2;

    
    switch (choice)
    {
        case 1 :    cout<<"We are in Case 1\n";
                    break;    
        
        case 2 :    cout<<"We are in Case 2\n";
                    break;
        
        default :   cout<<"Invalid Choice\n";
    }
    
    // Same implementation as If-Else
    if(choice==1)
    {
        cout<<"IF Case: 1\n";
    }
    else if (choice == 2)
    {
        
        cout<<"IF Case: 2\n";
        
    }
    //else if
    
    else
    {
        cout<<"IF Case: Invalid\n";
    }
    
    return 0;
}



