#include<iostream>
using namespace std;

int main() {
	int num = 0;
	char repeat = 'y';

	while (repeat != 'n') {
		cout << "How many asterisks would you like? ";
		cin >> num;

		for (int i = 0; i < num; i++) {
			cout << "*";
		}
		cout << "\nAgain? (y/n): ";
		cin >> repeat;
	}
	return 0;
}
