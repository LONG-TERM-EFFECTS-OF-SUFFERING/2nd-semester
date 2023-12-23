#include "Recipient.h"
using namespace std;

#ifndef LABORATORY_H
#define LABORATORY_H


class Laboratory {
	private:
		Recipient* recipient;

	public:
		Laboratory(Recipient* recipient);
		~Laboratory();
		void increaseRecipientTemperature();
};

#endif
