#include <iostream>
#include "Character.h"


int Character::nextNumber = 1;

Character::Character(string name, int life, int damage, bool esSuper) {
	this -> number = nextNumber;
	this -> name = name + " " + to_string(number);
	this -> life = life;
	this -> damage = damage;

	nextNumber++;
}

Character::~Character() {

}

string Character::getName() {
	return name;
}

void Character::setLife(int life) {
	this -> life = life;
}

int Character::getLife() {
	return life;
}

int Character::getDamage() {
	return damage;
}

void Character::attack(Character* character) {
	int newLife = character -> getLife() - damage;
	character -> setLife(newLife);

	// if (newLife >= 0) life = life - character -> getDamage(); // If the attacker is still alive
	life = life - character -> getDamage();
}
