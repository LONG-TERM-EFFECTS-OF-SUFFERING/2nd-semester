#include "Battle.h"

#ifndef WORLD_H
#define WORLD_H


class World {
	private:
		string name;
		Battle battle;

	public:
		World(string name);
		~World();
		void setArmies(vector <Character*> army1, vector <Character*> army2);
		void startFight();
};

#endif
