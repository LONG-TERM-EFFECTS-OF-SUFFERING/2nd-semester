#include "PaperBook.h"


PaperBook::PaperBook(string name, string description) : Book(name, description) {
	this -> type = "paper";
}

PaperBook::~PaperBook() {

}

string PaperBook::getBookInformation() {
	string output = Book::getBookInformation();
	output += "Do not throw water on me!\n";

	return output;
}
