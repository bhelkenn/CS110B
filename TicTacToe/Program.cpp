#include<iostream>
#include "TicTacToeBoard.h"
using namespace std;

int main(){
	int choice;
	TicTacToeBoard t1;
	cout << t1.getDisplayString() << endl;
	
	do {
		cout << "X's turn (enter an index number from 1-9): " << endl;
		cin >> choice;
		t1.setToX(choice);
		if (t1.xHasWon()) {
			cout << "X has won!" << endl;
			cout << t1.getDisplayString() << endl;
			return 0;
		}
		else if (t1.catsGame()) {
			cout << "Cat's game!!! :(" << endl;
			cout << t1.getDisplayString() << endl;
			return 0;
		}
		cout << t1.getDisplayString() << endl;
		
		cout << "O's turn (enter an index number from 1-9): " << endl;
		cin >> choice;
		t1.setToO(choice);
		if (t1.oHasWon()) {
			cout << "O has won!" << endl;
			cout << t1.getDisplayString() << endl;
			return 0;
		}
		cout << t1.getDisplayString() << endl;
	} while (choice >= 1 && choice <= 9);

	return 0;
}