#include <vector>

#include "Wagon.h"

#ifndef RAIL_H
#define RAIL_H


class Rail {
	private:
		vector <Wagon*> wagons;

	public:
		Rail();
		~Rail();
		int getWagonsSize();
		Wagon* getLastWagon();
		void addWagon(Wagon* wagon);
		void deleteLastWagon();
		void backTo(Rail &rail);
		void advanceFrom(Rail &rail);
		void printActualState();
};

#endif
