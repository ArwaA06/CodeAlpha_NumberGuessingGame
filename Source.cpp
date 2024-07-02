//CodeAlpha_ThirdTask
//Number Guessing Game

#include <iostream>

using namespace std;

extern void NumGuess();


int main(){

	//asking user if they want to play again
	char UserChoice;

	do {

		cout << "////////////////////////////////" << endl;
		cout << "WELCOME TO NUMBER GUESSING GAME" << endl;
		cout << "////////////////////////////////" << endl;


		NumGuess();


		cout << "Do you want to play again? (y/n): ";
		cin >> UserChoice;
	} while (UserChoice == 'y' || UserChoice == 'Y');

	
		cout << "Game ended" << endl;
	



		return 0;
	}