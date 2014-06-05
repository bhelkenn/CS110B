#include<iostream>
#include "StringManager.h"
using namespace std;

int main() {
	
	stringmanager sm;
	string temp("murderredrum");
	sm.add(&temp);
	
	cout << "Using printAll() function" << endl;
	sm.printAll();
	sm.operator<<(temp);
	cout << "Using printAll() function" << endl;
	sm.printAll();

	cout << "There are " << sm.palindromeCount() << " palindromes in sm." << endl;
	cout << "There are " << sm.spaceCount() << " spaces in sm." << endl;
	cout << "There are " << sm.wordCount() << " words in sm." << endl;
	cout << "There are " << sm.vowelCount() << " vowels in sm." << endl;
	cout << "There are " << sm.charCount('m') << " m's in sm." << endl;
	cout << "There are " << sm.charCount('r') << " r's in sm." << endl;
	cout << "There are " << sm.Size() << " strings in sm." << endl;

	return 0;
}