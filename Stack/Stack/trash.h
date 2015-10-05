#ifndef STACK_H
#define STACK_H
#include <iostream>
#include <stack>
#include <string>
using namespace std;

class Stack {
private:
	int top;
	int capacity;
	int *storage;
public:
	Stack(int capacity) {
		if (capacity <= 0)
			throw string("");
		storage = new int[capacity];
		this->capacity = capacity;
		top = -1;
	}

	void push(int value) {
		if (top == capacity)
			throw string("");
		top++;
		storage[top] = value;
	}

	int peek() {
		if (top == -1)
			throw string("");
		return storage[top];
	}

	void pop() {
		if (top == -1)
			throw string("");
		top--;
	}

	bool isEmpty() {
		return (top == -1);
	}

	~Stack() {
		delete[] storage;
	}
};








































#endif
