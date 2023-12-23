#include <iostream>

#include "Contest.h"


Contest::Contest(string name) : name(name) {

}

Contest::~Contest() {
	for (int i = 0; i < contestants.size(); i++) {
		delete contestants[i];
		contestants[i] = nullptr;
	}

	for (int i = 0; i < presenters.size(); i++) {
		delete presenters[i];
		presenters[i] = nullptr;
	}
}

string Contest::getName() {
	return name;
}

void Contest::setContestants(vector <Contestant*> contestants) {
	this -> contestants = contestants;
}

void Contest::setPresenters(vector <Presenter*> presenters) {
	this -> presenters = presenters;
}

void Contest::deliverPrizes() {
	for (int i = 0; i < contestants.size(); i++) {
		string name = contestants[i] -> getName();
		double prize = presenters[i % presenters.size()] -> getPrizeValue();

		contestants[i] -> addBitcoins(prize);
	}
}

void Contest::showResults() {
	for (int i = 0; i < contestants.size(); i++) {
		cout << contestants[i] -> getName() << " won " << contestants[i] -> getBitcoins() << " bitcoins" << endl;
	}
}
