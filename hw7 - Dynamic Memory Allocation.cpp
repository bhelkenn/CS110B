#include<iostream>
using namespace std;

int main() {
	//1. Create an int pointer named p
	int *p;
	//2. Dynamically allocate an array of three integers, store the address of the first element into p
	p = new int[3];
	//3. Store the value 5 into the first element of the array by dereferencing p
	*p = 5;
	cout << "p[0] = " << p[0] << endl;
	//4. Store the value 10 into the second element in the array using the pointer arithmetic technique
	*(p + 1) = 10;
	cout << "p[1] = " << p[1] << endl;
	//5. Store the value 15 in the third element of the array using the proper square bracket notation
	p[2] = 15;
	cout << "p[2] = " << p[2] << endl;
	//6. Prompt the user to enter an integer value and save it in a variable named size
	int size;
	cout << "Enter an integer value: ";
	cin >> size;
	//7. Allocate an array with 'size' elements using the value stored in the size variable.
	//Store the address of the first element in p
	p = new int[size];
	//8. Write a FOR loop that initializes all of the elements in this array
	for (int i = 0; i < size; i++){
		cout << "p[" << i << "]: ";
		cin >> p[i];
	}
	//9. Create a char pointer named cp
	char *cp;
	//10. Dynamically allocate an array of 100 chars, and store the address of the first element into cp
	cp = new char[100];
	//11. Prompt the user to enter a string, then use cin to read this input into the dynamically allocated char array
	cout << "Enter a char string: ";
	cin.ignore();
	cin.getline(cp, 100);
	//12. Use cout to print the input stored in cp
	cout << cp << endl;

	return 0;
}