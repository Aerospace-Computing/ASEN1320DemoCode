#include <iostream>
using namespace std;

struct AnimalPatient{
	string name;
    string species;
	int age;
};

void displayAgeInHumanYears(AnimalPatient a0);
void collectUserInputs(AnimalPatient &a0);

int main(){
    AnimalPatient a;
    collectUserInputs(a);
    displayAgeInHumanYears(a);
    return 0;
}

void displayAgeInHumanYears(AnimalPatient a0){
    cout << a0.name << "'s age is " << a0.age << endl;

    if(a0.species == "cat"){
        cout << "the age in cat years is: " << a0.age * 7 << endl;
    }
}

void collectUserInputs(AnimalPatient &a0){
    cout << "Enter the species: ";
    cin >> a0.species;
    cout << "Enter the name: ";
    cin >> a0.name;
    cout << "Enter age: ";
    cin >> a0.age;
}
