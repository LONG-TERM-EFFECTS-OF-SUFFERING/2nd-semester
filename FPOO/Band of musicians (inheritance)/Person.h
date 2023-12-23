#include <exception>
#include <string>
using namespace std;

#ifndef PERSON_H
#define PERSON_H


class Person {
	protected:
		string name;
		int age;

	public:
		Person(string name);
		virtual ~Person();
		string getName();
		void setAge(int age);
		virtual void print(ostream &stream);
};

#endif
