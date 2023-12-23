#include "Presenter.h"

#ifndef RANDOM_PRESENTER_H
#define RANDOM_PRESENTER_H


class RandomPresenter : public Presenter {
	public:
		RandomPresenter(string name);
		~RandomPresenter();
		double getPrizeValue() override;
};


#endif
