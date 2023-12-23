#include <string>
using namespace std;

#ifndef CONTESTANT_H
#define CONTESTANT_H


class Contestant {
	private:
		string name;
		double bitcoins;

	public:
		Contestant(string name);
		~Contestant();
		string getName();
		double getBitcoins();
		void addBitcoins(double bitcoins);
};

#endif
