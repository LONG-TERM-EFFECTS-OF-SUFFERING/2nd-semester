#include "Truck.h"


Truck::Truck(string licensePlate, int maximumCapacity) {
	this -> licensePlate = licensePlate;
	this -> maximumCapacity = maximumCapacity;
}

Truck::~Truck() {

}

string Truck::getLicensePlate() {
	return licensePlate;
}

int Truck::getLoadedWeight() {
	return loadedWeight;
}

bool Truck::loadAnObject(int objectWeight) {
	if (maximumCapacity >= loadedWeight + objectWeight) {
		loadedWeight += objectWeight;
		return true;
	} else return false;
}
