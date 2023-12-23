#include "Book.h"

#ifndef AUDIO_BOOK_H
#define AUDIO_BOOK_H


class AudioBook : public Book {
	public:
		AudioBook(string name, string description);
		~AudioBook();
		string getBookInformation() override;
};

#endif
