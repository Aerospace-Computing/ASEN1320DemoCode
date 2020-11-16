#include <iostream>
#include <string>
using namespace std;

class Student{
  public:
    void setIdNumber(int );
    int getIdNumber();
  private:
    int idNumber;  
};

void Student::setIdNumber(int x){
      idNumber = x; 
    }
int Student::getIdNumber(){
      return idNumber;
    }

int main(){
    Student s1;  
    s1.setIdNumber(1929);
    cout << s1.getIdNumber() << endl;
    return 0;
}
