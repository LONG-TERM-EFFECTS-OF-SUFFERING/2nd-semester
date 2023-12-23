#include "Presenter.h"

#ifndef TEMPORARY_PRESENTER_H
#define TEMPORARY_PRESENTER_H


class TemporaryPresenter : public Presenter {
	public:
		TemporaryPresenter(string name);
		~TemporaryPresenter();
		double getPrizeValue() override;
};

#endif
