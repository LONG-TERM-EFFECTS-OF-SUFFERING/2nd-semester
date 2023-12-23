#include "Contestant.h"


Contestant::Contestant(string name) : name(name), bitcoins(0) {

}

Contestant::~Contestant() {
}

string Contestant::getName() {
	return name;
}

double Contestant::getBitcoins() {
	return bitcoins;
}

void Contestant::addBitcoins(double bitcoins) {
	this -> bitcoins += bitcoins;
}
