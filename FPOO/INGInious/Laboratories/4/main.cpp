/**
 * Creates a contest, initializes contestants and presenters, delivers prizes, and
 * shows the results.
 */
#include "Contest.h"
#include "Contestant.h"
#include "CrazyPresenter.h"
#include "Presenter.h"
#include "RandomPresenter.h"
#include "TemporaryPresenter.h"


int main() {
	srand(time(0));

	Contest contest("Do you want to be a trillionaire?");

	vector <Contestant*> contestants = {
		new Contestant("Sofía"),
		new Contestant("Esteban"),
		new Contestant("Antonio"),
		new Contestant("Rosita"),
		new Contestant("Ana"),
		new Contestant("Rosendo")
	};

	vector <Presenter*> presenters = {
		new CrazyPresenter("Carlos"),
		new TemporaryPresenter("Maria"),
		new TemporaryPresenter("Juan"),
		new RandomPresenter("Pedro")
	};


	contest.setContestants(contestants);
	contest.setPresenters(presenters);
	contest.deliverPrizes();
	contest.showResults();

	return 0;
}
