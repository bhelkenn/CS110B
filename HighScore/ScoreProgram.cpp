#include<iostream>
#include<vector>
#include "HighScore.h"
using namespace std;

int findHighest(vector<highscore*> vhs){
	int highest = vhs[0]->getScore();
	int location = 0;
	for (int i = 1; i < vhs.size(); i++){
		if (vhs[i]->getScore() > highest){
			highest = vhs[i]->getScore();
			location = i;
		}
	}
	return location;
}

int main() {
	vector<highscore*> vhs;

	//Determine number of players/scores
	int size;
	cout << "How many scores would you like to track?";
	cin >> size;
	
	//Create temp int and string
	int tempscore;
	string tempname;

	for (int i = 0; i < size; i++){
		highscore *h = new highscore;

		cout << "Enter the name for score #" << i + 1 << ": ";
		cin >> tempname;
		h->setName(tempname);

		cout << "Enter the score for score #" << i + 1 << ": ";
		cin >> tempscore;
		h->setScore(tempscore);

		vhs.push_back(h);
	}
	
	cout << "High scores are:\n";
	for (int i = 0; i < size; i++) {
		cout << vhs[i]->getDisplayString() << endl;
	}

	cout << "The high score is:\n" << vhs[findHighest(vhs)]->getDisplayString() << endl;
	return 0;
}