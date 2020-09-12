#include <iostream>

using namespace std;

int sum = 0;
int n;

int main() 
{
    for (n = 1; n <= 10; n++) 
    {
      sum += n;  // sum = sum + n 
      cout << sum << endl;
    }
    
return 0;
}