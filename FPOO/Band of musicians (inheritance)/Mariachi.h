#include "Singer.h"

#ifndef MARIACHI_H
#define MARIACHI_H


class Mariachi : public Singer {
	public:
		Mariachi(string name);
		~Mariachi();
		void sing() override;
};

#endif
