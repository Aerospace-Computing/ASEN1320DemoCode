#include <iostream> 
#include <fstream>
#include <string>
using namespace std;

int main() {

 ifstream F;
 F.open("file.csv");
 string stringX, stringY;
 
 for( int i=0; i<10; i++){
	 getline(F, stringX, ',' );
  getline(F, stringY );
	 double a = stod(stringX);
	 double b = stod(stringY);
	 cout << "X: " << a  << " Y: " << b << endl;
 }
 
 F.close();
 
 return 0;
}