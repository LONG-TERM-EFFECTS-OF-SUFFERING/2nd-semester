#include "Archer.h"
#include "Draconaurius.h"
#include "World.h"


int main() {
	World Jenkins("Jenkins");

	vector <Character*> army1 = {
		new Archer(true),
		new Archer(true),
		new Archer(false),
		new Archer(false),
		new Archer(false),
		new Archer(false),
		new Archer(false)

	};

	vector <Character*> army2 = {
		new Draconaurius(true),
		new Draconaurius(true),
		new Draconaurius(true),
		new Draconaurius(true),
		new Draconaurius(true),
		new Draconaurius(false),
		new Draconaurius(false)
	};

	Jenkins.setArmies(army1, army2);
	Jenkins.startFight();
}
