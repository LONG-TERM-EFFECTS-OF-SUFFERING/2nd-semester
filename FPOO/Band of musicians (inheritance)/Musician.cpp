#include <iostream>

#include "Musician.h"


Musician::Musician(string name) : Person(name) {
	this -> instrument = "nn";
	instrumentsNumber = 0;
}

Musician::~Musician() {

}

void Musician::setInstrument(string instrument) {
	this-> instrument = instrument;
}

void Musician::setInstrumentsNumber(int instrumentsNumber) {
	this -> instrumentsNumber = instrumentsNumber;
	getInstrumentsNumber();
}

int Musician::getInstrumentsNumber() {
	if (instrumentsNumber < 0) throw 6;

	return instrumentsNumber;
}

void Musician::print(ostream &stream) {
	if (instrument.size() == 0) throw 4;

	stream << "Name: " << this -> getName() << endl;
	stream << "Instrument: " << this -> instrument << endl;
	stream << "Age: " << this -> age << endl;
	stream << "Instruments number: " << getInstrumentsNumber() << endl;
}
