#include "Presenter.h"

#ifndef CRAZY_PRESENTER_H
#define CRAZY_PRESENTER_H


class CrazyPresenter : public Presenter {
	public:
		CrazyPresenter (string name);
		~CrazyPresenter ();
		double getPrizeValue() override;
};

#endif
