#include <iostream>

#include "Spectator.h"


Spectator::Spectator(string name) : Person(name) {
	this -> likesReggaeton = true;
}

Spectator::~Spectator() {

}

void Spectator::setLikesReggaeton(bool likesReggaeton) {
	this -> likesReggaeton = likesReggaeton;
}

void Spectator::print(ostream &stream) {
	if (name.size() == 0) throw 5;

	stream << "Name:" << this -> getName() << endl;

	if (likesReggaeton) stream << "Likes Reggaeton " << endl;
	else stream << "Does not Like Reggaeton" << endl;
}