#include <iostream>
#include <string>
using namespace std;

// Declaration of the structure Patient
struct Patient{
	string name;
    double billing ;
	  double test[3][3];
};

int main(){
// Initialize a structure 
    Patient patient[2];
    patient[0].name    = "Joun Doe";
    patient[0].billing = 127.0;
    patient[1].name    = "Ann Lane";
    patient[1].billing = 28.50;
    
    double data0[3][3] = {{79, 75, 73}, {180, 178, 177.5}, {220, 210, 205}}; 
    double data1[3][3] = {{68, 70, 68}, {118, 118, 119}, {172, 170, 169}}; 
    
    for (int row=0; row<3; row++) {
      for (int col=0; col<3; col++) 
        { 
           patient[0].test[row][col] = data0[row][col];
           patient[1].test[row][col] = data1[row][col];
        }
    }     
// Display
   cout << "patient name is " << patient[0].name << endl;
   cout << "patient billing is " << patient[0].billing << endl;
    for (int row=0; row<3; row++) {
      for (int col=0; col<3; col++) 
        {
          cout << "patient test data for " << "row " << row 
          << " column " << col << " is " << patient[0].test[row][col] << endl;
        }
    }
    
   cout << "patient name is " << patient[1].name << endl;
   cout << "patient billing is " << patient[1].billing << endl;
   for (int row=0; row<3; row++) {
     for (int col=0; col<3; col++) 
        {
          cout << "patient test data for " << "row " << row 
          << " column " << col << " is " << patient[1].test[row][col] << endl;
        }
    }
  
    return 0;
}
