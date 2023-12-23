#include <vector>

#include "Truck.h"

#ifndef MOVING_COMPANY_H
#define MOVING_COMPANY_H


class MovingCompany {
	private:
		vector <Truck> trucks;
		string name;
		string nit;

	public:
		MovingCompany(string name, string nit);
		~MovingCompany();
		void addTruck(string licensePlate, int maximumCapacity);
		int loadObjects(vector <int> objectWeights);
};

#endif
