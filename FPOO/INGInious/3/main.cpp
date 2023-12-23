#include "Stack.h"


int main() {
	Stack numbers;

	for (int i = 2; i <= 20; i += 2) numbers.push(i);

	numbers.sum();
	numbers.empty();
	numbers.size();

	return 0;
}
