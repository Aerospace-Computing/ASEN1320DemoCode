#include <iostream>
#include <string>
using namespace std;

// Declaration of the class Student
class Student{
  public:
    string studentName;
    int idNumber;    
    void displayInfo(){
      cout << "Name: " << studentName << " idNumber: " << idNumber << endl;
    }
  private:
    string major;
};

int main(){
  // Declare a variable s1 as Student class
    Student s1 ;
  // Initialize s1
    s1.studentName = "Pat";
    s1.idNumber = 1929;
    s1.displayInfo();
}
