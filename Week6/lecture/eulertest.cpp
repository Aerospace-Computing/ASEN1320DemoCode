#include <iostream> 
using namespace std; 
 
//prototype  
double func(double x, double y);
void euler(double &x, double &y, double h, double xstop);

int main() // Driver program 
{ 
    double x = 0.0, y = 1.0, h = 0.025; // Initial Values 
    double xstop = 1; // Value of x at which an approximation of y is needed
    euler(x, y, h, xstop); // function call
    cout << "Approximate solution at x = " << x << "  is  " << y << endl;  
    return 0; 
} 

double func(double x, double y) // Function for dy/dx=(x + y + xy) - call-by-value 
{ 
    return (x + y + x * y); 
} 
  
void euler(double &x, double &y, double h, double xstop) // Euler integrator - call-by-reference
{ 
    while (x < xstop) { // Iterating till x becomes larger than xstop
        y = y + h * func(x, y); 
        x = x + h;
}}
  