#include <cstdlib>

#include "RandomPresenter.h"


RandomPresenter::RandomPresenter(string name) : Presenter(name, "Random") {

}

RandomPresenter::~RandomPresenter() {

}

double RandomPresenter::getPrizeValue() {
	return rand() % 300;
}
