#include<iostream>
#include "NumberGuesser.h"
using namespace std;

int main() {
	int lower = 1;
	int higher = 100;
	char input = 'y';

	numberguesser ng(lower, higher);

	do {
		ng.reset(lower, higher);
		cout << "Think of a number between 1 and 100" << endl;
		do {
			ng.setCurrentGuess();
			cout << "Is the number " << ng.getCurrentGuess() << "? (h/l/c): ";
			cin >> input;
			if (input == 'h') {
				ng.higher();
				ng.setCurrentGuess();
			}
			if (input == 'l') {
				ng.lower();
				ng.setCurrentGuess();
			}
			if (input == 'c') {
				cout << "You picked " << ng.getCurrentGuess() << "? Great pick." << endl;
			}
		} while (input != 'c');
		cout << "Do you want to play again: (y/n): " << endl;
		cin >> input;
	} while (input == 'y');

	cout << "Good bye." << endl;

	return 0;
}