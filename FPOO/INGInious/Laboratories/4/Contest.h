#include <vector>

#include "Contestant.h"
#include "Presenter.h"

#ifndef CONTEST_H
#define CONTEST_H


class Contest {
	private:
		string name;
		vector <Contestant*> contestants;
		vector <Presenter*> presenters;

	public:
		Contest(string name);
		~Contest();
		string getName();
		void setContestants(vector <Contestant*> contestants);
		void setPresenters(vector <Presenter*> presenters);
		void deliverPrizes();
		void showResults();
};

#endif
