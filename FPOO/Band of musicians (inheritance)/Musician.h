#include "Person.h"

#ifndef MUSICIAN_H
#define MUSICIAN_H


class Musician : public Person {
	private:
		string instrument;
		int instrumentsNumber;

	public:
		Musician(string name);
		virtual ~Musician();
		void setInstrument(string instrument);
		void setInstrumentsNumber(int instrumentsNumber);
		int getInstrumentsNumber();
		void print(ostream &stream) override;
};

#endif
