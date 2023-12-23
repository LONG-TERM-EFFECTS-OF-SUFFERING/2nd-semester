/**
 * Creates two Truck objects, loads assets onto the trucks, and then prints out the license plate
 * and loaded weight of each truck.
 */
#include <iostream>

#include "Truck.h"


int main() {
	Truck truck1("ABC-001", 10000);
	Truck truck2("DEF-002", 5000);

	int assets[8] = { 1000, 3000, 5000, 2000, 500, 1800, 4000, 30 };

	for (int i = 0; i < 8; i++) {
		int assetWeight = assets[i];

		if (not truck1.loadAnObject(assetWeight)) {
			if (not truck2.loadAnObject(assetWeight)) cout << "The asset number " << i << " weighing " << assetWeight << " cannot be loaded on any truck." << endl;
		}
	}

	cout << "The truck with license plate of " << truck1.getLicensePlate() << " transported " << truck1.getLoadedWeight() << " kg." << endl;
	cout << "The truck with license plate of " << truck2.getLicensePlate() << " transported " << truck2.getLoadedWeight() << " kg." << endl;

	return 0;
}
