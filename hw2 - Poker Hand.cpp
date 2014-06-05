#include<iostream>
using namespace std;

//Prototypes
void cinArray(int[], int);
void sortArray(int[], int);
void coutArray(int[], int);
void pokerHandType(int[], int);
int valueMatch(int[], int, int);
bool hasFourOfAKind(int[], int);
bool hasFullHouse(int[], int);
bool hasStraight(int[], int);
bool hasThreeOfAKind(int[], int);
bool hasTwoPair(int[], int);
bool hasPair(int[], int);

int main() {

	//Size of the poker hand
	const int SIZE = 5;

	int hand[SIZE];

	cinArray(hand, SIZE);

	sortArray(hand, SIZE);

	cout << "Running coutArray" << endl;
	coutArray(hand, SIZE);

	pokerHandType(hand, SIZE);

	return 0;
}

void cinArray(int hand[], int size) {
	for (int i = 0; i < size; i++) {
		do {
			cout << "Enter value #" << i + 1 << ": ";
			cin >> hand[i];
		} while (hand[i] < 2 || hand[i] > 9);
		
	}
}

void sortArray(int hand[], int size) {
	int temp;
	for (int i = 0; i < size; i++) {
		for (int i = 1; i < size; i++) {
			if (hand[i] > hand[i - 1]) {
				temp = hand[i];
				hand[i] = hand[i - 1];
				hand[i - 1] = temp;
			}
		}
	}
}

void coutArray(int hand[], int size) {
	for (int i = 0; i < size; i++) {
		cout << "hand[" << i << "] = " << hand[i] << endl;
	}
}

void pokerHandType(int hand[], int size) {
	
	if (hasFourOfAKind(hand, size) == true)
		cout << "You have 4-of-a-kind!" << endl;
	else if (hasFullHouse(hand, size) == true)
		cout << "You have a full house!" << endl;
	else if (hasStraight(hand, size) == true)
		cout << "You have a 5-card straight!" << endl;
	else if (hasThreeOfAKind(hand, size) == true)
		cout << "You have 3-of-a-kind!" << endl;
	else if (hasTwoPair(hand, size) == true)
		cout << "You have 2 pair!" << endl;
	else if (hasPair(hand, size) == true)
		cout << "You have a pair!" << endl;
	else cout << "You have a high card of " << hand[0] << endl;
}

int valueMatch(int hand[], int size, int value){
	int total = 0;
	for (int i = 0; i < size; i++){
		if (hand[i] == value)
			total++;
	}
	return total;
}

bool hasFourOfAKind(int hand[], int size){
	for (int i = 0; i < size; i++){
		if (valueMatch(hand, size, hand[i]) >= 4)
			return true;
	}
	return false;
}

bool hasFullHouse(int hand[], int size){
	int three = 0;
	int two = 0;
	for (int i = 0; i < size; i++){
		if (valueMatch(hand, size, hand[i]) == 3)
			three = 3;
	}
	for (int i = 0; i < size; i++){
		if (valueMatch(hand, size, hand[i]) == 2)
			two = 2;
	}
	if (three == 3 && two == 2)
			return true;
	else return false;
}

bool hasStraight(int hand[], int size) {
	for (int i = 1; i < size; i++){
		if (hand[i] != (hand[i - 1] - 1))
			return false;
	}
	return true;
}

bool hasThreeOfAKind(int hand[], int size){
	for (int i = 0; i < size; i++){
		if (valueMatch(hand, size, hand[i]) == 3)
			return true;
	}
	return false;
}

bool hasTwoPair(int hand[], int size){
	int first;
	int second;
	for (int i = 0; i < size; i++){
		if (valueMatch(hand, size, hand[i]) == 2)
			first = hand[i];
	}
	for (int i = 0; i < size; i++){
		if (valueMatch(hand, size, hand[i]) == 2 && hand[i] != first)
				second = hand[i];
	}
	return first != second;
}

bool hasPair(int hand[], int size){
	for (int i = 0; i < size; i++){
		if (valueMatch(hand, size, hand[i]) == 2)
			return true;
	}
	return false;
}