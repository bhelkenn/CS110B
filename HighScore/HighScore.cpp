#include "HighScore.h"
#include<string>
#include<sstream>
using namespace std;

highscore::highscore(){
	name = "Unknown";
	score = 0;
}
highscore::highscore(const char* n, int s){
	name = n;
	score = s;
}
string highscore::getDisplayString() {
		stringstream ss;
		ss << name << ": " << score;
		return ss.str();
}