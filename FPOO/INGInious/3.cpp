/**
 * This program prints all the leap years between two given years.
 */
#include <iostream>
using namespace std;


int main() {
	int year, year2;

	cout << "Write the years between which you want to print all leap years: "; cin >> year; cin >> year2;

	if (year % 4 != 0) year = year + (4 - (year % 4));

	cout << "Leap years: ";

	for (int i = year; i <= year2; i += 4) {
		if (i % 100 == 0) {
			if (i % 400 == 0) cout << " " << i;
		} else cout << " " << i;
	}
	cout << endl;

	return 0;
}
