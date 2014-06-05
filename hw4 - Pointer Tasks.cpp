#include<iostream>
using namespace std;

//Prototypes
void noNegatives(int *x);

int main() {
	//1. Create two integer variables named x and y
	int x, y;
	
	//2-3. Create an int pointer named p1 and store the addres of x in p1
	int *p1 = &x;
	cout << "p1 = " << p1 << endl;

	//4. Use p1 to set the value of x to 99
	*p1 = 99;

	//5. Using cout, display the value of x
	cout << "x = " << x << endl;

	//6. Using cout and the pointer p1, display the value of x
	cout << "x = " << *p1 << endl;

	//7. Store the address of y into p1
	p1 = &y;
	cout << "p1 = " << p1 << endl;

	//8. Use p1 to set the value of y to -300
	*p1 = -300;
	cout << "y = " << y << endl;

	//9. Create two new variables: an int named temp, and an int pointer named p2
	int temp, *p2;

	//10. Use temp, p1, and p2 to swap the values in x and y
	p1 = &x;
	p2 = &y;
	temp = *p1;
	*p1 = *p2;
	*p2 = temp;
	cout << "x = " << x << " and y = " << y << endl;

	//12. Invoke the function twice: once with the address of x as the argument,
	//and once with the address of y
	noNegatives(p1);
	noNegatives(p2);

	//13. Use p2 to display the values in x and y
	p2 = &x;
	cout << "x = " << *p2 << " and ";
	p2 = &y;
	cout << "y = " << *p2 << endl;

	//14. Create an int array with two elements. The array should be named a
	int a[2];

	//15. Use p2 to initialize the first element of a with the value of x
	p2 = &x;
	a[0] = *p2;

	//16. Use p2 to initialize the second element of a with the value of y
	p2 = &y;
	a[1] = *p2;

	//17. Using cout, display the address of the first element in a
	cout << "a[0] = " << a[0] << endl;

	//18. Using cout, display the address of the second element in a
	cout << "a[1] = " << a[1] << endl;

	//19. Use p1, p2, and temp to swap the values in the two elements of a
	p1 = &a[0];
	p2 = &a[1];	
	temp = *p1;
	*p1 = *p2;
	*p2 = temp;

	//20. Display the values of the two elements.
	for (int i = 0; i < 2; i++){
		cout << "a[" << i << "] = " << a[i] << endl;
	}

	return 0;
}

//11. Write a function with the following signature: void noNegatives(int *x).
//The function should accept the address of an int variable.
//If the value of this int is negative it should set it to zero.
void noNegatives(int *x){
	if (*x < 0) *x = 0;
}