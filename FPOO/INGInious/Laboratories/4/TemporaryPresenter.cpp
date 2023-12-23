#include <ctime>

#include "TemporaryPresenter.h"


TemporaryPresenter::TemporaryPresenter(string name) : Presenter(name, "Temporary") {

}

TemporaryPresenter::~TemporaryPresenter() {

}

double TemporaryPresenter::getPrizeValue() {
	time_t actualTime;
	actualTime = time(NULL);
	tm *tm_local = localtime(&actualTime);

	return 100 * tm_local -> tm_min;
}
