#include <string>
using namespace std;

#ifndef BOOK_H
#define BOOK_H


class Book {
	protected:
		string name;
		string description;
		string type;

	public:
		Book(string name, string description);
		~Book();
		virtual string getBookInformation();
		string getType();
};

#endif
