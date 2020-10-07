// TO BE COMPLETED 
#include<iostream>
#include<ctime>
using namespace std;

int rand0toX(int &x); // Call-by-reference. Takes in an integer value x. Returns a random value between 0 and x.

int guessNumber();   //  Takes in nothing. Prompts user to guess a number. Keeps prompting until user guessed correctly. Returns number of tries as a value.

int main(){
	srand(time(NULL));  // Reset random number seed with the time (sec) since the Epoch (00:00:00 UTC, January 1, 1970)
	int noOfTries = guessNumber();
	cout << "Good job. You geessed the correct number in " << noOfTries << " tries." << endl;
	return 0;
}

int rand0toX(int x){


}

int guessNumber(){

	int userGuess;
	int hiddenNumber
	
	do{

		cout << "Guess a number between 0 and 20 ";
		cin >> userGuess;

	}while(userGuess != hiddenNumber);
	
	cout << "Correct number is " << hiddenNumber << endl;
	
}
