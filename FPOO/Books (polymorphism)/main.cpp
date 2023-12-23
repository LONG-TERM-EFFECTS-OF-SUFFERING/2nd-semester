#include <iostream>
#include <vector>

#include "../API/httplib.h"
#include "AudioBook.h"
#include "ElectronicBook.h"
#include "PaperBook.h"
#include "Server.h"


int main(int argc, char const *argv[]) {
	if (stoi(argv[1]) == 1) {
		int answer;
		Server server;

		vector <Book*> books = {
			new AudioBook("The Lord of the Rings", "A book about a ring"),
			new ElectronicBook("The Hobbit", "A book about a hobbit"),
			new PaperBook("Harry Potter", "A book about a wizard"),
		};

		server.setBooks(books);

		cout << "What type of book do you want to filter the database by? " << endl;
		cout << "1. Audio \n2. Electronic \n3. Paper \n"; cin >> answer;

		switch (answer) {
			case 1:
				cout << server.getBooksByType("audio"); break;
			case 2:
				cout << server.getBooksByType("electronic"); break;
			case 3:
				cout << server.getBooksByType("paper"); break;
			default:
				cout << "Invalid option" << endl; break;
		}
	} else {
		httplib::Server webServer;

		// Option 1 - Audio books
		// Option 2 - Electronic books
		// Option 3 - Paper books

		webServer.Get(R"(/Books/(\d+))", [&](const auto &req, auto &res) {
			auto numbers = req.matches[1];
			string number = numbers;
			int option = atoi(number.c_str());

			Server server;

			vector <Book*> books = {
				new AudioBook("The Lord of the Rings", "A book about a ring"),
				new ElectronicBook("The Hobbit", "A book about a hobbit"),
				new PaperBook("Harry Potter", "A book about a wizard"),
			};

			server.setBooks(books);

			switch (option) {
				case 1:
					res.set_content(server.getBooksByType("audio"), "text/plain"); break;
				case 2:
					res.set_content(server.getBooksByType("electronic"), "text/plain"); break;
				case 3:
					res.set_content(server.getBooksByType("paper"), "text/plain"); break;
				default:
					res.set_content("Invalid option", "text/plain"); break;
			}
		});

			cout << "Server running on port 8080" << endl;
			webServer.listen("0.0.0.0", 8080);
	}

	return 0;
}
