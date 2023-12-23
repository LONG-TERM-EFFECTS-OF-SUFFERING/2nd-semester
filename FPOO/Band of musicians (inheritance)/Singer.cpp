#include <iostream>

#include "Singer.h"


Singer::Singer(string name) : Person(name) {
	this-> singsWell = true;
	this-> artisticName = "nn";
}

void Singer::setSingsWell(bool singsWell) {
	this -> singsWell = singsWell;
}

void Singer::setArtisticName(string artisticName) {
	this -> artisticName = artisticName;
}

void Singer::print(ostream &stream) {
	if (artisticName.size() == 0) throw 5;

	stream << "Name: " << this -> getName() << endl;
	stream << "Artistic name:" << this -> artisticName << endl;
	stream << "Age: " << this-> age << endl;

	if (singsWell)
		stream << "sings well" << endl;
	else
		stream << "does not sing well" << endl;
}

void Singer::sing() {
	cout << "I sing" << endl;
}
