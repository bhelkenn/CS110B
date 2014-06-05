#ifndef STRINGMANAGER_H
#define STRINGMANAGER_H
#include<string>
using namespace std;

class stringmanager {
private:
	string **strings;
	int size;
	int capacity;
	static stringmanager *sharedInstance;
public:
	static stringmanager *getSharedInstance();

	stringmanager();

	void add(string *s);
	string* get(int index) {return strings[index];};
	int Size() {return size;};

	void printAll();

	int charCount(char targetChar);
	int spaceCount();
	int vowelCount();
	int wordCount();
	int palindromeCount();

	stringmanager& operator<<(string& s);

};

#endif