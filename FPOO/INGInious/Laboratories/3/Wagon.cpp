#include "Wagon.h"


Wagon::Wagon(int ID, bool isInfected) {
	this -> ID = ID;
	this -> isInfected = isInfected;
}

Wagon::~Wagon() {

}

int Wagon::getID() {
	return ID;
}
