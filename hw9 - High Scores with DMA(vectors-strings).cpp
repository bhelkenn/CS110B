#include<iostream>
#include<vector>
#include<string>
using namespace std;

//Prototypes
int findHighest(vector<int>, int);

int main() {

	vector<int> scores;
	vector<int>::iterator itint;
	vector<string> names;
	vector<string>::iterator itstr;

	//Determine scope
	int number;
	cout << "How many scores will you enter?: ";
	cin >> number;
	names.resize(number);
	scores.resize(number);
	
	//Collect score information
	for (int i = 0; i < number; i++){
		cout << "Enter the name for score #" << i + 1 << ": ";
		cin >> names[i];
		cout << "Enter the score for score #" << i + 1 << ": ";
		cin >> scores[i];
	}

	//Display top score results
	cout << "Top Scorers:" << endl;
	for (itstr = names.begin(), itint = scores.begin(); itstr != names.end(); itstr++, itint++){
		cout << *itstr << ": " << *itint << endl;
	}

	//Determine top score, and display
	int location = findHighest(scores, number);
	cout << "The highest of the high-scores is " << names[location];
	cout << ", with " << scores[location] << endl;

	return 0;
}

int findHighest(vector<int> scores, int number){
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