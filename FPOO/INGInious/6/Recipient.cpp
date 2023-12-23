#include <iostream>

#include "Recipient.h"


Recipient::Recipient(float* temperature) {
	this -> temperature = temperature;

}

Recipient::~Recipient() {

}

void Recipient::increaseTemperature() {
	for (int i = 0; i < 18; i++) {
		*(this -> temperature) += 10;
		cout << "Actual temperature -> " << *(this -> temperature) << endl;
	}
}

float Recipient::getTemperature() {
	return *(this -> temperature);
}
