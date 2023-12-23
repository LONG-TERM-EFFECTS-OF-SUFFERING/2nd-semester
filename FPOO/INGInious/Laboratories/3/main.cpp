/**
 * Creates three Rail objects and performs a series of operations on them.
 */
#include "Rail.h"


int main() {
	Rail mainRail, leftRail, rightRail;

	mainRail.addWagon(new Wagon(1, false));
	mainRail.addWagon(new Wagon(2, true));
	mainRail.addWagon(new Wagon(3, false));
	mainRail.addWagon(new Wagon(4, true));
	mainRail.addWagon(new Wagon(5, false));
	mainRail.addWagon(new Wagon(6, false));

	mainRail.printActualState();

	mainRail.backTo(leftRail);
	mainRail.backTo(leftRail);
	mainRail.backTo(rightRail);
	mainRail.backTo(leftRail);
	mainRail.backTo(rightRail);
	mainRail.advanceFrom(leftRail);
	mainRail.advanceFrom(leftRail);
	mainRail.advanceFrom(leftRail);
	mainRail.advanceFrom(leftRail);
	mainRail.advanceFrom(rightRail);
	mainRail.advanceFrom(rightRail);

	mainRail.printActualState();

	return 0;
}
