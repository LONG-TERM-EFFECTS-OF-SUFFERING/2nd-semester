#include <string>
using namespace std;

#ifndef TRUCK_H
#define TRUCK_H


class Truck {
	private:
		string licensePlate;
		int maximumCapacity, loadedWeight = 0;

	public:
		Truck(string licensePlate, int maximumCapacity);
		~Truck();
		string getLicensePlate();
		int getLoadedWeight();
		bool loadAnObject(int objectWeight);
};

#endif
