#include <string>
using namespace std;

#ifndef CHARACTER_H
#define CHARACTER_H


class Character {
	protected:
		static int nextNumber;
		int number;
		string name;
		int life;
		int damage;
		bool isSuper;

	public:
		Character(string name, int life, int damage, bool isSuper);
		virtual ~Character();
		virtual void setSuperAttributes(bool isSuper) = 0;
		string getName();
		void setLife(int life);
		int getLife();
		int getDamage();
		void attack(Character* character);
};

#endif
