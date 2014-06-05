#include<string>
using namespace std;

#ifndef HIGHSCORE_H
#define HIGHSCORE_H

class highscore {
private:
	string name;
	int score;
public:
	highscore();
	highscore(const char* n, int s);

	void setName(string &value){name = value;}
	void setName(const char* value){name = value;}
	string& getName() {return name;}
	
	void setScore(int value){score = value;}
	int getScore(){return score;}

	string getDisplayString();
};

#endif