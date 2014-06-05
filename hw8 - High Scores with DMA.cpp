#include<iostream>
using namespace std;

//Prototypes
void cinScores(int*, char**, int);
int findHighest(int*, int);

int main() {

	//Create array pointers
	int *scores;
	char **names;

	//Determine scope of arrays
	int number;
	cout << "How many scores will you enter?: ";
	cin >> number;
	
	//Assign scope of arrays
	scores = new int[number];
	names = new char*[number];
	for (int i = 0; i < number; i++){
		names[i] = new char[100];
	}

	//Collect score information
	cinScores(scores, names, number);

	//Display top score results
	cout << "Top Scorers:" << endl;
	for (int i = 0; i < number; i++){
		cout << names[i] << ": " << scores[i] << endl;
	}

	//Determine top score, and display
	int location = findHighest(scores, number);
	cout << "The highest of the high-scores is " << names[location];
	cout << ", with " << scores[location] << endl;

	return 0;
}

void cinScores(int *scores, char **names, int number){
	for (int i = 0; i < number; i++){
		cout << "Enter the name for score #" << i + 1 << ": ";
		cin.ignore();
		cin >> names[i];
		cout << "Enter the score for score #" << i + 1 << ": ";
		cin >> scores[i];
	}
}

int findHighest(int *scores, int number){
	int highest = scores[0];
	int location = 0;
	for (int i = 1; i < number; i++){
		if (scores[i] > highest){
			highest = scores[i];
			location = i;
		}
	}
	return location;
}
