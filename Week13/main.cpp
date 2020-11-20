#include<iostream>
#include"timeClass.h"
using namespace std;
int main(){
  Time12 x;
  x.setHour(24);
  cout << x.getHour() << endl;
  cout << x.getMinute() << endl;
  cout << x.getAMPM() << endl;
  return 0;
}
