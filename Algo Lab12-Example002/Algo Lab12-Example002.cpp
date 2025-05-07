// Using array as stack
#include <iostream>
using namespace std;

const int MAX = 100;
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

int main() {
	push(10);
	push(20);
	push(30);
	cout << "Top element: " << peek() << endl;
	pop();
	cout << "Top element after pop: " << peek() << endl;
	return 0;
}