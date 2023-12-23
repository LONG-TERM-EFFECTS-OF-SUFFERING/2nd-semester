#include "Singer.h"

#ifndef RAPPER_H
#define RAPPER_H


class Rapper : public Singer {
	public:
		Rapper(string name);
		~Rapper();
		void sing() override;
};

#endif
