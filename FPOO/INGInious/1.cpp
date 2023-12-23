// This program decomposes a given number into its prime factors.
#include <iostream>
using namespace std;


int main() {
	int number, divisor = 2;

	cout << "Write the number you want to decompose: "; cin >> number;

	while (divisor <= number) {
		while (number % divisor == 0) {
			number = number / divisor;
			if (number == 1) cout << divisor << endl;
			else cout << divisor << " * ";
		}
		divisor++;
	}

	return 0;
}
