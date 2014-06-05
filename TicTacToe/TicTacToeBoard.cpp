#include<iostream>
#include "TicTacToeBoard.h"
using namespace std;

TicTacToeBoard::TicTacToeBoard() {board.assign(9, '-');};

string TicTacToeBoard::getDisplayString() {
	string display;
	for (int i = 0; i < 9; i++) {
		display.push_back(board[i]);
		if ((i + 1) % 3 == 0) display.append(2, '\n');
		else display.push_back('\t');
	}
	return display;
}

void TicTacToeBoard::setToX(int index) {board[index - 1] = 'X';}
void TicTacToeBoard::setToO(int index) {board[index - 1] = 'O';}
bool TicTacToeBoard::isX(int index) {return (board[index - 1] == 'X');}
bool TicTacToeBoard::isO(int index) {return (board[index - 1] == 'O');}

bool TicTacToeBoard::xHasWon() {
	if (TicTacToeBoard::isX(1) && TicTacToeBoard::isX(2) && TicTacToeBoard::isX(3)) return true;
	else if (TicTacToeBoard::isX(4) && TicTacToeBoard::isX(5) && TicTacToeBoard::isX(6)) return true;
	else if (TicTacToeBoard::isX(7) && TicTacToeBoard::isX(8) && TicTacToeBoard::isX(9)) return true;
	else if (TicTacToeBoard::isX(1) && TicTacToeBoard::isX(4) && TicTacToeBoard::isX(7)) return true;
	else if (TicTacToeBoard::isX(2) && TicTacToeBoard::isX(5) && TicTacToeBoard::isX(8)) return true;
	else if (TicTacToeBoard::isX(3) && TicTacToeBoard::isX(6) && TicTacToeBoard::isX(9)) return true;
	else if (TicTacToeBoard::isX(1) && TicTacToeBoard::isX(5) && TicTacToeBoard::isX(9)) return true;
	else if (TicTacToeBoard::isX(3) && TicTacToeBoard::isX(5) && TicTacToeBoard::isX(7)) return true;
	else return false;
}

bool TicTacToeBoard::oHasWon() {
	if (TicTacToeBoard::isO(1) && TicTacToeBoard::isO(2) && TicTacToeBoard::isO(3)) return true;
	else if (TicTacToeBoard::isO(4) && TicTacToeBoard::isO(5) && TicTacToeBoard::isO(6)) return true;
	else if (TicTacToeBoard::isO(7) && TicTacToeBoard::isO(8) && TicTacToeBoard::isO(9)) return true;
	else if (TicTacToeBoard::isO(1) && TicTacToeBoard::isO(4) && TicTacToeBoard::isO(7)) return true;
	else if (TicTacToeBoard::isO(2) && TicTacToeBoard::isO(5) && TicTacToeBoard::isO(8)) return true;
	else if (TicTacToeBoard::isO(3) && TicTacToeBoard::isO(6) && TicTacToeBoard::isO(9)) return true;
	else if (TicTacToeBoard::isO(1) && TicTacToeBoard::isO(5) && TicTacToeBoard::isO(9)) return true;
	else if (TicTacToeBoard::isO(3) && TicTacToeBoard::isO(5) && TicTacToeBoard::isO(7)) return true;
	else return false;
}

bool TicTacToeBoard::catsGame() {
	for (int i = 0; i < 9; i++) {
		if (board[i] == '-') return false;
	}
	return true;
}