#include<string>
using namespace std;
#ifndef TICTACTOEBOARD_H
#define TICTACTOEBOARD_H

class TicTacToeBoard {
private:
	string board;
	bool isX(int index);
	bool isO(int index);
public:
	TicTacToeBoard();
	string getDisplayString();
	void setToX(int index);
	void setToO(int index);
	bool xHasWon();
	bool oHasWon();
	bool catsGame();
};

#endif