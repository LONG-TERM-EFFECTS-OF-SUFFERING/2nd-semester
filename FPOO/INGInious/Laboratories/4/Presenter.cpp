#include "Presenter.h"


Presenter::Presenter(string name, string type) : name(name), type(type) {

}

Presenter::~Presenter() {

}

string Presenter::getName() {
	return name;
}
