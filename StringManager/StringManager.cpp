#include "StringManager.h"
#include<string>
#include<iostream>

stringmanager* stringmanager::sharedInstance = NULL;
stringmanager* stringmanager::getSharedInstance() {
	if (!sharedInstance) sharedInstance = new stringmanager;
	return sharedInstance;
}

stringmanager::stringmanager() {
	size = 0;
	capacity = 10;
	strings = new string* [capacity];
}

void stringmanager::add(string *s) {
	strings[size] = s;
	size++;
}

void stringmanager::printAll() {
	for (int i = 0; i < size; i++){
		cout << *strings[i] << endl;
	}
}

int stringmanager::charCount(char targetChar) {
	int count = 0;
	for (int i = 0; i < size; i++) {
		string temp = *strings[i];
		for (size_t j = 0; j < temp.length(); j++) {
			if (temp[j] == targetChar) count++;
		}
	}
	return count;
}

int stringmanager::spaceCount() {
	int count = 0;
	for (int i = 0; i < size; i++) {
		string temp = *strings[i];
		for (size_t j = 0; j < temp.length(); j++) {
			if (temp[j] == ' ') count++;
		}
	}
	return count;
}

int stringmanager::vowelCount() {
	int count = 0;
	for (int i = 0; i < size; i++) {
		string temp = *strings[i];
		for (size_t j = 0; j < temp.length(); j++) {
			if (temp[j] == 'A' || temp[j] == 'a') count++;
			if (temp[j] == 'E' || temp[j] == 'e') count++;
			if (temp[j] == 'I' || temp[j] == 'i') count++;
			if (temp[j] == 'O' || temp[j] == 'o') count++;
			if (temp[j] == 'U' || temp[j] == 'u') count++;
			if (temp[j] == 'Y' || temp[j] == 'y') count++;
		}
	}
	return count;
}

int stringmanager::wordCount() {
	int count = 0;
	for (int i = 0; i < size; i++) {
		string temp = *strings[i];

		//count the first word in each index
		count++;
		
		for (size_t j = 0; j < temp.length(); j++) {
			if (temp[j] == ' ') count++;
		}
	}
	return count;
}

int stringmanager::palindromeCount() {
	int count = 0;
	for (int i = 0; i < size; i++) {
		string temp = *strings[i];
		bool isPalindrome = true;
		for (size_t j = 1; j < temp.length(); j++) {
			if (temp[j - 1] != temp[temp.length() - j]) isPalindrome = false;
		}
		if (isPalindrome) count++;
	}
	return count;
}

stringmanager& stringmanager::operator<<(string& s) {
	this->add(&s);
	return *this;
}