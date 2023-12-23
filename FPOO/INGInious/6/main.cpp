/**
 * Creates a Recipient object and a Laboratory object, increases the temperature of the recipient and
 * prints the temperature values of the recipient and the temperature variable.
 */
#include "Laboratory.h"
#include "Recipient.h"


int main(int argc, char* argv[]) {
	float temperature = stof(argv[1]);
	Recipient recipient(&temperature);
	Laboratory laboratory(&recipient);

	laboratory.increaseRecipientTemperature();

	cout << "var temperature value = "<< temperature << endl;
	cout << "Recipient temperature value = "<< recipient.getTemperature() << endl;

	return 0;
}
