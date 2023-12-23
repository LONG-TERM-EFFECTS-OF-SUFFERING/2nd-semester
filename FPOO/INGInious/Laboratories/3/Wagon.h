#ifndef WAGON_H
#define WAGON_H

using namespace std;

class Wagon {
	private:
		int ID;
		bool isInfected;

	public:
		Wagon(int ID, bool isInfected);
		~Wagon();
		int getID();
};

#endif
