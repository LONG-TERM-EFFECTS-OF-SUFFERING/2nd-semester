#ifndef RECIPIENT_H
#define RECIPIENT_H

using namespace std;


class Recipient {
	private:
		float* temperature;

	public:
		Recipient(float* temperature);
		~Recipient();
		void increaseTemperature();
		float getTemperature();
};

#endif
