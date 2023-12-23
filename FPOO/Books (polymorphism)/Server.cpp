#include "Server.h"


Server::Server() {

}

Server::~Server() {
	for (Book* book: books) {
		delete book;
		book = nullptr;
	}
}

void Server::setBooks(vector <Book*> books) {
	this -> books = books;
}

string Server::getBooksByType(string type) {
	string output = "";

	for (Book* book: books) {
		if (book -> getType() == type) output += book -> getBookInformation();
	}

	return output;
}
