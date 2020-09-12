#include <iostream>

using namespace std;

int sum = 0;
int n = 1;

int main() 
{
    while (n <= 10) 
    {
      sum += n;  // sum = sum + n
      n++; 
      cout << sum << endl;
    }
    
return 0;
}