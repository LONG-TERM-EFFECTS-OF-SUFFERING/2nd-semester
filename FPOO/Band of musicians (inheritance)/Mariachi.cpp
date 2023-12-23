#include <iostream>

#include "Mariachi.h"


Mariachi::Mariachi(string name) : Singer(name) {

}

Mariachi::~Mariachi() {
}

void Mariachi::sing() {
	cout << endl << "Abusadas mamacitas que ya llegó su aventurero" << endl;
	cout << "Ay lara la, ay lara la, ay lara la lara la " << endl;
	cout << "Ay lara la, ay lara la, ay lara la lara la" << endl;
}