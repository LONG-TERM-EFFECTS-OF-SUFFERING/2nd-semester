#include "ElectronicBook.h"


ElectronicBook::ElectronicBook(string name, string description) : Book(name, description) {
	this -> type = "electronic";
}

ElectronicBook::~ElectronicBook() {

}

string ElectronicBook::getBookInformation() {
	string output = Book::getBookInformation();
	output += "I have circuits on me\n";

	return output;
}
