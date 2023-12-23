/**
 * This program takes a string as input and counts the number of vowels in it.
 * It then prints the count of vowels to the console.
 */
#include <iostream>
using namespace std;


bool isVowel(char &letter) {
	switch (letter) {
		case 'a':
		case 'e':
		case 'i':
		case 'o':
		case 'u':
			return true;
			break;
		default:
			return false;
	}
}

int main(int argc, char* argv[]) {
	string text = argv[1]; int counter = 0;

	for (char letter : text) {
		if (isVowel(letter)) counter++;
	}

	cout << counter << endl;

	return 0;
}
