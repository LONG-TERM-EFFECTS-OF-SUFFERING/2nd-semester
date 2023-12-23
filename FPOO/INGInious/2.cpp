/**
 * This program prints two triangles of asterisks, one with odd number of asterisks per row and the
 * other with even number of asterisks per row, based on the user input for the height of the
 * triangles.
 */
#include <iostream>
using namespace std;


int main() {
	int height;

	cout << "Write the height of the triangles: "; cin >> height;
	cout << endl;

	for (int i = 1; i <= height; i++) {
		for (int j = 0; j < height - i; j++) cout << " ";
		for (int j = 0; j < i * 2 - 1; j++) cout << "*";
		cout << endl;
	}

	cout << endl;

	for (int i = 1; i <= height; i++) {
		for (int j = 0; j < height - i; j++) cout << " ";
		for (int j = 0; j < i * 2; j++) cout << "*";
		cout << endl;
	}
}
