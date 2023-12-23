#include "Character.h"

#ifndef DRACONAURIUS_H
#define DRACONAURIUS_H


class Draconaurius : public Character {
	public:
		Draconaurius(bool isSuper);
		~Draconaurius();
		virtual void setSuperAttributes(bool isSuper) override;
};

#endif
