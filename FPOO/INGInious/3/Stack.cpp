#include <iostream>

#include "Stack.h"


Stack::Stack() {

}

Stack::~Stack() {

}

void Stack::size() {
	cout << "The stack size is " << numbers.size() << endl;
}

void Stack::push(int number) {
	numbers.push(number);
}

void Stack::empty() {
	while (!numbers.empty()) {
		numbers.pop();
	}
}

void Stack::sum() {
	stack <int> numbersCopy = numbers; int sum = 0;

	while (!numbersCopy.empty()) {
		sum += numbersCopy.top();
		numbersCopy.pop();
	}

	cout << "The sum of the numbers in the stack is " << sum << endl;
}
