#include<string>
class Time12{
  private:
    int hour;
    int minute;
    std::string ampm;
  public:
    Time12();
    void setHour(int);
    int getHour();
    int getMinute();
    std::string getAMPM();    
};