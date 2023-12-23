#include "AudioBook.h"


AudioBook::AudioBook(string name, string description) : Book(name, description) {
	this -> type = "audio";
}

AudioBook::~AudioBook() {

}

string AudioBook::getBookInformation() {
	string output = Book::getBookInformation();
	output += "You can only hear this book\n";

	return output;
}
