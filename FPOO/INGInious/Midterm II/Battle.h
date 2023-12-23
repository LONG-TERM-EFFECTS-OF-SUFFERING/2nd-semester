#include <vector>

#include "Character.h"

#ifndef BATTLE_H
#define BATTLE_H


class Battle {
	private:
		vector <Character*> army1;
		vector <Character*> army2;

	public:
		Battle();
		~Battle();
		int getSoldiersNumber(int armyNumber);
		vector <Character*> getSoldiers(int armyNumber);
		void setArmy(vector <Character*> army, int armyNumber);
		void fight(Character* soldier1, Character* soldier2);
		int getSoldiersAliveNumber(vector <Character*> army);
};

#endif
