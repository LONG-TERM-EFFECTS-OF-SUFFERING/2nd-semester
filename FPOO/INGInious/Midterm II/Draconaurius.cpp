#include "Draconaurius.h"


Draconaurius::Draconaurius(bool isSuper) : Character("Draconaurius", 2, 1, isSuper) {
	this -> setSuperAttributes(isSuper);
}

Draconaurius::~Draconaurius() {

}

void Draconaurius::setSuperAttributes(bool isSuper) {
	if (isSuper) {
		name = "Draconaurius++ " + to_string(number);
		life = 3;
		damage = 1;
	}
}
