/**
 * This program takes an integer as a command line argument and counts the frequency of each digit in the number.
 */
#include <iostream>
using namespace std;


int main(int argc, char* argv[]) {
	int number = stoi(argv[1]), digit;
	int frequency[10] = { 0 };

	while (number > 0) {
		digit = number % 10;
		number = number / 10;

		frequency[digit] += 1;
	}

	for (int i = 0; i < 10; i++) {
		cout << i << " = " << frequency[i] << endl;
	}

	return 0;
}
