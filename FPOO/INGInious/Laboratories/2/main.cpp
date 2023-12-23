/**
 * Creates a MovingCompany object, adds trucks to it, loads objects onto the trucks,
 * and prints the result.
 */
 #include <iostream>

#include "MovingCompany.h"
#include "Truck.h"


int main() {
	vector <int> assets = { 1000, 3000, 5000, 2000, 500, 1800, 4000, 30 };

	MovingCompany movingCompany("Camiones Mountain", "2498024-9");

	movingCompany.addTruck("YUI-988", 10000);
	movingCompany.addTruck("OIJ-807", 5000);
	movingCompany.addTruck("KHO-193", 5000);

	cout << movingCompany.loadObjects(assets) << endl;

	return 0;
}
