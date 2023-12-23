#include "CrazyPresenter.h"


CrazyPresenter::CrazyPresenter(string name) : Presenter(name, "Crazy") {

}

CrazyPresenter::~CrazyPresenter() {

}

double CrazyPresenter::getPrizeValue() {
	return 200 * name.size();
}
