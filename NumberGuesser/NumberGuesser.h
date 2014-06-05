#include<iostream>
//using namespace std;

#ifndef NUMBERGUESSER_H
#define NUMBERGUESSER_H

class numberguesser {
private:
	int low;
	int middle;
	int high;
public:
	numberguesser(int lowerBound, int upperBound);
	void higher() {low = middle;}
	void lower() {high = middle;}
	void setCurrentGuess() {middle = (low + high) / 2;}
	int getCurrentGuess() {return middle;}
	void reset(int lowerBound, int upperBound);
};

#endif