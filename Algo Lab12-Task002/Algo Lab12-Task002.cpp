/* Лабораторна робота 12, завдання 4

Знайти мінімальний елемент у стеку
(використовувати масив)
*/

#include <iostream>
using namespace std;

const int MAX = 10;
int stack[MAX];
int top = -1;

void push(int value) {
	if (top >= MAX - 1) {
		cout << "Stack overflow!" << endl;
		return;
	}
	stack[++top] = value;
}

void pop() {
	if (top < 0) {
		cout << "Stack underflow!" << endl;
		return;
	}
	top--;
}

int peek() {
	if (top < 0) {
		cout << "Stack is empty!" << endl;
		return -1;
	}
	return stack[top];
}

bool isEmpty() {
	return top == -1;
}

int findMinElement() {
	if (isEmpty()) {
		cout << "Stack is empty!" << endl;
		return -1;
	}

	int currentMin = peek();
	int tempStack[MAX];
	int tempTop = -1;

	while (!isEmpty()) {
		int value = peek();
		if (value < currentMin) {
			currentMin = value;
		}
		tempStack[++tempTop] = value;
		pop();
	}

	while (tempTop >= 0) {
		push(tempStack[tempTop--]);
	}

	return currentMin;
}

int main() {
	push(1);
	push(7);
	push(4);
	push(15);
	push(9);

	cout << "Minimum element is: " << findMinElement() << endl;

	return 0;
}