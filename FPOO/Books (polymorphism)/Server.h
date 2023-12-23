#include <vector>

#include "Book.h"

#ifndef SERVER_H
#define SERVER_H


class Server {
	private:
		vector <Book*> books;

	public:
		Server();
		~Server();
		void setBooks(vector <Book*> books);
		string getBooksByType(string type);
};

#endif
