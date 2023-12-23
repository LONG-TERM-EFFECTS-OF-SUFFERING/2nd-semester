#include "Person.h"

#ifndef SPECTATOR_H
#define SPECTATOR_H


class Spectator : public Person {
	private:
		bool likesReggaeton;

	public:
		Spectator(string name);
		~Spectator();
		void setLikesReggaeton(bool likesReggaeton);
		void print(ostream &stream) override;
};

#endif
