#include <iostream>

#include "Rapper.h"


Rapper::Rapper(string name) : Singer(name) {

}

Rapper::~Rapper() {

}

void Rapper::sing() {
	cout << "Uh, sama lama duma lamaa you assuming I'm a human What I gotta do to get it through to you I'm superhuman Innovative and I'm made of rubber" << endl;
}
