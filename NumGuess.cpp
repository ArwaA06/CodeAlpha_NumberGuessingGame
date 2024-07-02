#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

void NumGuess(){

	//random number generator
	srand(time(0));

	//setting range from 1 to 100
	int HiddenNum = rand() % 100 + 1;
	int UserInput;

	int attempts = 0;
	//fixing the maximum attempts range
	const int maxattempt = 3;

	bool Guess = false;

	while (!Guess && attempts < maxattempt) {
		cout << "Enter your number" << endl;
		cin >> UserInput;
		attempts++;

		if (UserInput == HiddenNum) {
			Guess = true;
		}
	
        else if (abs(UserInput - HiddenNum) <= 10) {
	         if (UserInput > HiddenNum) {
		         cout << "Close, but still high! Try again." << endl;
	         }else {
		         cout << "Close, but still low! Try again." << endl;
	         }

		} else {
	          if (UserInput > HiddenNum) {
		          cout << "Too high! Try again." << endl;
	          }else {
		          cout << "Too low! Try again." << endl;
	          }
		}
	}

	if (Guess) {
		cout << "Congratulations!!!!!!" << endl;
		cout << "Your guess is correct." << endl;
		cout << "You guessed it in " << attempts << " attempts." << endl;
	}
	else {

		cout << "------------------------------------------" << endl;
		cout << "You lose! The correct number was " << " { " << HiddenNum << " } " << endl;
		cout << "------------------------------------------" << endl;
	}

}
