#include <iostream>
using namespace std;

#include "httplib.h"


int main() {
	httplib::Client cli("http://localhost:8080");

	auto res = cli.Get("/Books/1");

	if (res) {
		cout << res -> status << endl;
		cout << res -> body << endl;
	}
	else cout << "error: " << httplib::to_string(res.error()) << endl;

	auto res2 = cli.Get("/Books/2");

	if (res2) {
		cout << res -> status << endl;
		cout << res -> body << endl;
	}
	else cout << "error: " << httplib::to_string(res.error()) << endl;

	auto res3 = cli.Get("/Books/3");

	if (res3) {
		cout << res -> status << endl;
		cout << res -> body << endl;
	}
	else cout << "error: " << httplib::to_string(res.error()) << endl;
}
