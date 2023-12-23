#include <iostream>

#include "World.h"


World::World(string name) {
	this -> name = name;
}

World::~World() {

}

void World::setArmies(vector <Character*> army1, vector <Character*> army2) {
	battle.setArmy(army1, 1);
	battle.setArmy(army2, 2);
}

void World::startFight() {
	int army1Size = battle.getSoldiersNumber(1);
	int army2Size = battle.getSoldiersNumber(2);

	cout << "Army 1 starts with " + to_string(army1Size) + " archers" << endl;
	cout << "Army 2 starts with " + to_string(army2Size) + " draconaurius" << endl;

	vector <Character*> army1 = battle.getSoldiers(1);
	vector <Character*> army2 = battle.getSoldiers(2);

	int i = 0, j = 0;

	for (i; i < army1Size; i++) {
		Character* army1Soldier = army1[i];

		for (j; j < army2Size; j++) {
			Character* army2Soldier = army2[j];

			if (army2Soldier -> getLife() > 0) {
				battle.fight(army1Soldier, army2Soldier);
				if (army1Soldier -> getLife() <= 0) break;
			}
		}
		if (j == army2Size) break;
	}

	if (j == army2Size) {
		cout << "Army 1 won, with " + to_string(battle.getSoldiersAliveNumber(army1)) + " archers left" << endl;
	} else if (i == army1Size) {
		cout << "Army 2 won, with " + to_string(battle.getSoldiersAliveNumber(army2)) + " draconaurius left" << endl;
	}
}
