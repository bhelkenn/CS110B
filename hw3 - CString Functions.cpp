#include<iostream>
using namespace std;

//Prototypes
int cinArray(char s[], int size);
int lastIndexOf(char s[], char target, int size);
void reverseArray(char s[], char r[], int size);
int replace(char s[], char target, char replacementChar, int size);
int findSubstring(char s[], char substring[], int size);
bool isPalindrome(char s[], int size);

int main() {
	const int SIZE = 20;
	char s[SIZE];
	char target;
	char r[SIZE];
	char replacementChar;
	char substring[SIZE];
	//Customizes the size of the character array based on what was input
	int size = cinArray(s, SIZE);

	//To find the last index where the target character can be found in the string
	cout << "Enter a character to search for in '" << s << "': ";
	cin >> target;

	if (lastIndexOf(s, target, size) == -1)
		cout << "The character '" << target << "' was not found in '" << s << "'" << endl;
	
	reverseArray(s, r, size);

	//To determine character to use as a replacement
	cout << "Enter a character to use as a replacement: ";
	cin >> replacementChar;

	if (replace(s, target, replacementChar, size) == 0)
		cout << "The character '" << target << "' was not found in '" << s << "'" << endl;
	else
		cout << "char array s holds '" << s << "'" << endl;

	//Define substring
	cout << "Enter a substring to search '" << s << "' for: ";
	cin >> substring;

	if (findSubstring(s, substring, size) == 2)
		cout << "'" << substring << "' was found in '" << s << "'" << endl;
	else if (findSubstring(s, substring, size) == -1)
		cout << "'" << substring << "' was NOT found in '" << s << "'" << endl;
	else cout << "Invalid result from findSubstring function" << endl;

	//Resizes int size for isPalindrome function
	size = cinArray(s, SIZE);
	if (isPalindrome(s, size) == true)
		cout << "'" << s << "' is a palindrome." << endl;
	else cout << "'" << s << "' is NOT a palindrome." << endl;

	return 0;
}

int cinArray(char s[], int size) {
	cout << "Enter character string: ";
	cin >> s;
	for (int i = 0; i < size; i++){
		if (s[i] == '\0')
			return i - 1;
	}
}

int lastIndexOf(char s[], char target, int size){
	for (int i = size; i >= 0; i--){
		if (s[i] == target){
			cout << "'" << target << "' was last found in s[" << i << "]" << endl;
			return 0;
		}
	}
	return -1;
}

void reverseArray(char s[], char r[], int size){
	int i;
	for (i = 0; i <= size; i++){
		r[i] = s[size - i];
	}
	r[i] = '\0';
}

int replace(char s[], char target, char replacementChar, int size){
	int replaced = 0;
	for (int i = 0; s[i] != '\0'; i++){
		if (s[i] == target){
			s[i] = replacementChar;
			replaced++;
		}
	}
	return replaced;
}

int findSubstring(char s[], char substring[], int size){
	for (int count = 0; count < size; count++){
		if (substring[0] == s[count]){
			for (int i = 1; substring[i] != '\0'; i++){
				if (substring[i] == s[count + i]){
					cout << "substring[" << i << "] = " << substring[i];
					cout << " and s[" << count + i << "] = " << s[count + i] << endl;
				}
				else if (substring[i] != s[count + i] && substring[i] != '\0')
					return -1;
			}
			return 2;
		}
	}
}

bool isPalindrome(char s[], int size){
	char r[20];
	int i;
	for (i = 0; i <= size; i++){
		r[i] = s[size - i];
	}
	r[i] = '\0';

	for (int j = 0; j <= size; j++){
		if (r[j] != s[j])
			return false;
	}
	return true;
}