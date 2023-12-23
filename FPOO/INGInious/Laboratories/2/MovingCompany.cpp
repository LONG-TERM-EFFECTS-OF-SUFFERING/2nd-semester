#include "MovingCompany.h"


MovingCompany::MovingCompany(string name, string nit) {
	this -> name = name;
	this -> nit = nit;
}

MovingCompany::~MovingCompany() {

}

void MovingCompany::addTruck(string licensePlate, int maximumCapacity) {
	Truck truck(licensePlate, maximumCapacity);
	trucks.push_back(truck);
}

int MovingCompany::loadObjects(vector <int> objectWeights) {
	int loadedWeight = 0;

	for (int i = 0; i < objectWeights.size(); i++) {
		int objectWeight = objectWeights[i];

		for (int j = 0; j < trucks.size(); j++) {
			if (trucks[j].loadAnObject(objectWeight)) loadedWeight += objectWeight; break;
		}
	}

	return loadedWeight;
}
