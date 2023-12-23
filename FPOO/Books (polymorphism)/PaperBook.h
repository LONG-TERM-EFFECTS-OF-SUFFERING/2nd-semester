#include "Book.h"

#ifndef PAPER_BOOK_H
#define PAPER_BOOK_H


class PaperBook : public Book {
	public:
		PaperBook(string name, string description);
		~PaperBook();
		string getBookInformation() override;
};

#endif
