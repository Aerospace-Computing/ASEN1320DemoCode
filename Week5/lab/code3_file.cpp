#include <iostream>     // include to use cout and cin
#include <fstream>      // include to use file streams
#include <string>       // include to use string

using namespace std;

int main() 
{
    int n_grades = 5;
    string category[n_grades];
    double score[n_grades];
    int percent[n_grades];
    
    
    ifstream grades_file; // ifstream
    
    grades_file.open("Grades.txt");
    if (!grades_file.is_open()) {
      cout << "Failed to open Grades.txt" << endl;
      return 1;
    }
    
    // Inputting to the array.
    for(int i =0;i<n_grades;i++)
    {
        grades_file >> category[i] >> score[i] >> percent[i]; // Inputting
        cout << category[i] << " " << score[i] << " " << percent[i] << endl;
    }
    
    double final_grade = 0;
    
    for(int i =0;i<n_grades;i++)
    {
        final_grade += score[i] * percent[i] /100.0;
    }
    
    cout << endl << "The final grade is " << final_grade << endl;
    
 
 

    
}