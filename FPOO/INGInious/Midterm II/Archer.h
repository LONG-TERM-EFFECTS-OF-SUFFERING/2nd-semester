#include "Character.h"

#ifndef ARCHER_H
#define ARCHER_H


class Archer : public Character {
	public:
		Archer(bool isSuper);
		~Archer();
		virtual void setSuperAttributes(bool isSuper) override;
};

#endif
