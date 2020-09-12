#include <iostream>

using namespace std;

int sum = 0;
int n = 1;

int main() 
{
    do 
    {
      sum += n;  // sum = sum + n
      n++; 
      cout << sum << endl;
    } while (n <= 10);
    
return 0;
}
