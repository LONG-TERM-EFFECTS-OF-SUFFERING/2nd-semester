#include "Book.h"


Book::Book(string name, string description): name(name), description(description) {

}

Book::~Book() {

}

string Book::getBookInformation() {
	string output = "";

	output += "Type: " + type + "\n";
	output += "Name: " + name + "\n";
	output += "Description: " + description + "\n";

	return output;
}

string Book::getType() {
	return type;
}
