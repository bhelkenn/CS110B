#include<iostream>
using namespace std;

//Prototypes
int spaceCount(char[]);
int negativeCount(double[], int);
void setAllToHighest(int&, int&, int&);
int commonCharCount(char[], char[]);

int main() {
	//For spaceCount function
	char test[30];
	cout << "Enter a character string: ";
	cin.getline(test, 30);
	cout << test << endl;
	cout << spaceCount(test) << endl;

	//For negativeCount function
	const int SIZE = 5;
	double neg[SIZE];
	cout << "Enter a value for each value." << endl;
	for (int i = 0; i < SIZE; i++){
		cout << "#" << i + 1 << ": ";
		cin >> neg[i];
	}
	cout << "There are " << negativeCount(neg, SIZE) << " negative numbers in neg" << endl;

	//For setAllToHigheset function
	int a[3];
	cout << "Enter three values: " << endl;
	for (int i = 0; i < 3; i++){
		cout << "#" << i + 1 << ": ";
		cin >> a[i];
	}
	setAllToHighest(a[0], a[1], a[2]);
	for (int i = 0; i < 3; i++){
		cout << "#" << i + 1 << ": = " << a[i] << endl;
	}

	//For commonCharCount function
	char x[20], y[20];
	cout << "Enter two char strings: " << endl;
	cin.ignore();
	cin.getline(x, 20);
	cin.getline(y, 20);
	cout << "There are " << commonCharCount(x, y) << " characters in common ";
	cout << "between '" << x << "' and '" << y << "'" << endl;

	return 0;
}

int spaceCount(char a[]){
	int count = 0;

	for (int i = 0; a[i] != '\0'; i++){
		if (a[i] == ' ') count++;
	}
	return count;
}

int negativeCount(double a[], int size){
	int count = 0;
	for (int i = 0; i < size; i++){
		if (a[i] < 0) count++;
	}
	return count;
}

void setAllToHighest(int &a, int &b, int &c){
	if (a < b) a = b;
	if (a < c) a = c;
	if (b < a) b = a;
	if (b < c) b = c;
	if (c < a) c = a;
	if (c < b) c = b;
}

int commonCharCount(char a[], char b[]){
	int count = 0;
	for (int i = 0; a[i] != '\0'; i++){
		for (int j = 0; b[j] != '\0'; j++){
			if (a[i] == b[j]){
				count++;
				i++;
			}
		}
	}
	return count;
}