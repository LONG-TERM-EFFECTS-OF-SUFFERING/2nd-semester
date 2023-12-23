#include "Laboratory.h"


Laboratory::Laboratory(Recipient* recipient) {
	this -> recipient = recipient;

}

Laboratory::~Laboratory() {

}

void Laboratory::increaseRecipientTemperature() {
	(this -> recipient) -> increaseTemperature();
}
