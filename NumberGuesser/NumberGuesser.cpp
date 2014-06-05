#include<iostream>
#include "NumberGuesser.h"

numberguesser::numberguesser(int lowerBound, int upperBound) {
	low = lowerBound;
	high = upperBound;
}

void numberguesser::reset(int lowerBound, int upperBound) {
	low = 1;
	high = 100;
}