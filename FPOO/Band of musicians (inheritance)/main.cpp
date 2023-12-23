#include <iostream>

#include "Mariachi.h"
#include "Musician.h"
#include "Rapper.h"
#include "Singer.h"
#include "Spectator.h"


int main() {
	try {
		// Person person(""); // Throws error 1
		// Person person("Belle");
		// person.print(cout);

		/* -------------------------------------------------------------------------- */

		Musician Santana("Santana");
		Santana.setInstrument("Guitar");
		// Santana.print(cout);

		/* -------------------------------------------------------------------------- */

		// Person Santana("Santana");
		// Santana.setInstrument("Guitar");
		// Santana.print(cout);

		/* -------------------------------------------------------------------------- */

		Singer Shakira("Shakira Mebarak");
		Shakira.setSingsWell(false);
		Shakira.setArtisticName("Shakira");
		// Shakira.print(cout);

		/* -------------------------------------------------------------------------- */

		Shakira.setAge(28);
		Santana.setAge(40);

		Shakira.print(cout);
		cout << endl;
		Santana.print(cout);
		cout << endl;

		/* -------------------------------------------------------------------------- */

		Musician KurtCobainn("Kurt");
		KurtCobainn.setInstrument("Guitar");
		KurtCobainn.setInstrumentsNumber(3);
		KurtCobainn.print(cout);

		/* -------------------------------------------------------------------------- */

		Spectator Rojas("Rojas");
		Rojas.setLikesReggaeton(true);
		Rojas.print(cout);
		cout << endl;

	} catch (int &code) {
		cout << "Error: " << code << " setting up the object or defining the properties of the object" << endl;
	} catch (exception &e) {
		cout << "Internal error: " << e.what() << endl;
	} catch (...) {
		cout << "Internal error. Will be fixed in the next version of the application" << endl;
	}
}
