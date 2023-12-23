#include <stack>
using namespace std;

#ifndef STACK_H
#define STACK_H


class Stack {
	private:
		stack <int> numbers;

	public:
		Stack();
		~Stack();
		void size();
		void push(int);
		void sum();
		void empty();
};

#endif
