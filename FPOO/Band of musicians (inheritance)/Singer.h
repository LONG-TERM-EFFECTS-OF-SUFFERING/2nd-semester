#include "Person.h"

#ifndef SINGER_H
#define SINGER_H


class Singer : public Person {
	private:
		bool singsWell;
		string artisticName;

	public:
		Singer(string name);
		void setSingsWell(bool singsWell);
		void setArtisticName(string artisticName);
		void print(ostream &stream) override;
		virtual void sing();
};

#endif
