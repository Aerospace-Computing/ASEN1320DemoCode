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
    Patient patient;
    patient.name    = "Joun Doe";
    patient.billing = 127.0;
    double data[3][3] = {{79, 75, 73}, {180, 178, 177.5}, {220, 210, 205}}; 
    
    for (int row=0; row<3; row++) {
      for (int col=0; col<3; col++) 
        { 
           patient.test[row][col] = data[row][col];
        }
    }     
// Display
   cout << "patient name is " << patient.name << endl;
   cout << "patient billing is " << patient.billing << endl;
    for (int row=0; row<3; row++) {
      for (int col=0; col<3; col++) 
        {
          cout << "patient test data for " << "row " << row 
          << " column " << col << " is " << patient.test[row][col] << endl;
        }
    }
    return 0;
}
