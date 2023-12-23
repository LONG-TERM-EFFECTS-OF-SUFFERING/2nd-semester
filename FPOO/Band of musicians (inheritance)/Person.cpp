#include <iostream>

#include "Person.h"


Person::Person(string name) {
	if (name.size() == 0) throw 1;

	this -> name = name;
	age = 0;
}

Person::~Person() {

}

string Person::getName() {
	return name;
}

void Person::setAge(int age) {
	this -> age = age;
}

void Person::print(ostream &stream) {
	if (name.size() == 0) throw 2;

	stream << "Name: " << this -> name << endl;
}
