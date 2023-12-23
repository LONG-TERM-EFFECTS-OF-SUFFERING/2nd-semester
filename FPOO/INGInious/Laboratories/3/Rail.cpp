#include <iostream>
#include <string>

#include "Rail.h"


Rail::Rail() {

}

Rail::~Rail() {
	for (int i = 0; i < wagons.size(); i++) {
		delete wagons[i];
		wagons[i] = nullptr;
	}
}

int Rail::getWagonsSize() {
	return wagons.size();
}

void Rail::addWagon(Wagon* wagon) {
	wagons.push_back(wagon);
}

Wagon* Rail::getLastWagon() {
	return wagons.back();
}

void Rail::deleteLastWagon() {
	wagons.pop_back();
}

void Rail::backTo(Rail &rail) {
	rail.addWagon(wagons.back());
	this -> deleteLastWagon();
}

void Rail::advanceFrom(Rail &rail) {
	if (rail.getWagonsSize() > 0) {
		this -> addWagon(rail.getLastWagon());
		rail.deleteLastWagon();
	}
}

void Rail::printActualState() {
	for (Wagon* wagon : wagons) {
		cout << "| " << wagon -> getID() << " ";
	}
	cout << "|" << endl;
}
