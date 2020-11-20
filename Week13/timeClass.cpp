#include<iostream>
#include"timeClass.h"
using namespace std;

Time12::Time12(){  //constructor 
    hour = 12;
    minute = 59;
    ampm = "AM";
  }

void Time12::setHour(int h ){  //mutator
    if ( h > 0 && h <= 12 )
       hour = h;
    else
       cout << "bad choice " << endl;
  }      
    
int Time12::getHour(){   //accessor
    return hour;
  }  
    
int Time12::getMinute(){ //accessor
    return minute;
  }
 
string Time12::getAMPM(){ //accessor
    return ampm;
}

