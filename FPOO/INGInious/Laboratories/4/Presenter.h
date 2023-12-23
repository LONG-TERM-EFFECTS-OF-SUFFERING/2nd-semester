#include <string>
using namespace std;

#ifndef PRESENTER_H
#define PRESENTER_H


class Presenter {
	protected:
		string name;
		string type;

	public:
		Presenter(string name, string type);
		~Presenter();
		string getName();
		virtual double getPrizeValue() = 0;
};

#endif
