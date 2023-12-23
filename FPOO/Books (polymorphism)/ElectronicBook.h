#include "Book.h"

#ifndef ELECTRONIC_BOOK_H
#define ELECTRONIC_BOOK_H


class ElectronicBook : public Book {
	public:
		ElectronicBook(string name, string description);
		~ElectronicBook();
		string getBookInformation() override;
};

#endif
