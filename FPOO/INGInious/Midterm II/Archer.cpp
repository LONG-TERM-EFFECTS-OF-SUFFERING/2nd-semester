#include "Archer.h"


Archer::Archer(bool isSuper) : Character("Archer", 5, 3, isSuper) {
	this -> setSuperAttributes(isSuper);
}

Archer::~Archer() {

}

void Archer::setSuperAttributes(bool isSuper) {
	if (isSuper) {
		name = "Archer++ " + to_string(number);
		life = 4;
		damage = 5;
	}
}
