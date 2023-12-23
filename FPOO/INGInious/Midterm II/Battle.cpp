#include <iostream>

#include "Battle.h"


Battle::Battle() {

}

Battle::~Battle() {
	for (Character* character : army1) {
		delete character;
		character = nullptr;
	}

	for (Character* character : army2) {
		delete character;
		character = nullptr;
	}
}

int Battle::getSoldiersNumber(int armyNumber) {
	if (armyNumber == 1) return army1.size();
	else return army2.size();
}

vector <Character*> Battle::getSoldiers(int armyNumber) {
	if (armyNumber == 1) return army1;
	else return army2;
}

void Battle::setArmy(vector <Character*> army, int armyNumber) {
	if (armyNumber == 1) army1 = army;
	else army2 = army;
}

void Battle::fight(Character* soldier1, Character* soldier2) {
	cout << soldier1 -> getName() << " attacked " << soldier2 -> getName() << endl;

	if (soldier1 -> getLife() >= 0) soldier1 -> attack(soldier2); // A soldier can only attack if he is alive
}

int Battle::getSoldiersAliveNumber(vector <Character*> army) {
	int alive = 0;

	for (int i = 0; i < army.size(); i++) {
		if (army[i] -> getLife() > 0) alive++;
	}

	return alive;
}
