/* Лабораторна робота 12

Додаткові завдання

1 Імітувати перевірку балансу дужок (5 балів)
2 Перемістити всі від’ємні значення вниз (1 бал)
3 Сортувати стек вручну (через додатковий стек) (1 бал)
4 Вивести усі елементи в зворотному порядку (1 бал)
*/

#include <iostream>
#include <stack>
#include <string>

using namespace std;

void inputStackInt(stack<int>& targetStack) { // наповнення цілочисельного стеку
	while (true) {
		string currentString;
		cout << "input stack element (int number) or type 'quit' to end: ";
		cin >> currentString;
		if (currentString == "quit") break;

		try {
			int number = stoi(currentString);
			targetStack.push(number);
		}
		catch (invalid_argument&) {
			cout << "Wrong input! Please enter a valid integer." << endl;
		}
		catch (out_of_range&) {
			cout << "Number out of range! Please enter a smaller integer." << endl;
		}
	}
}

void moveNegativeToBottom(stack<int>& targetStack) { // від'ємні значення вниз (#2)
	stack<int> tempStack;
	stack<int> negativeStack;
	while (!targetStack.empty()) {
		if (targetStack.top() < 0) negativeStack.push(targetStack.top());
		else tempStack.push(targetStack.top());
		targetStack.pop();
	}
	while (!negativeStack.empty()) {
		targetStack.push(negativeStack.top());
		negativeStack.pop();
	}
	while (!tempStack.empty()) {
		targetStack.push(tempStack.top());
		tempStack.pop();
	}
	cout << endl;
}

void sortIntStackDecrease(stack<int>& targetStack) { // сортування стеку (#3)
	stack<int> tempStack;

	while (!targetStack.empty()) {
		int current = targetStack.top();
		targetStack.pop();

		while (!tempStack.empty() && tempStack.top() > current) {
			targetStack.push(tempStack.top());
			tempStack.pop();
		}

		tempStack.push(current);
	}

	while (!tempStack.empty()) {
		targetStack.push(tempStack.top());
		tempStack.pop();
	}
}

void inputStackChars(stack<char>& targetStack) { // наповнення символьного стеку
	while (true) {
		string currentString;
		cout << "input stack character or string of characters (type 'quit' to end): ";
		getline(cin, currentString);
		if (currentString == "quit") break;

		for (char ch : currentString) {
			targetStack.push(ch);
		}
	}
}

void printStack(stack<char> targetStack) { // виведення елементів згори до дна - char
	while (!targetStack.empty()) {
		cout << targetStack.top();
		targetStack.pop();
	}
	cout << endl;
}

void printStack(stack<int> targetStack) { // виведення елементів згори до дна - int
	while (!targetStack.empty()) {
		cout << targetStack.top() << " ";
		targetStack.pop();
	}
	cout << endl;
}

void printCharStackBackwards(stack<char> targetStack) { // виведення елементів з дна до гори (#4)
	stack<char> inverseStack;
	while (!targetStack.empty()) {
		inverseStack.push(targetStack.top());
		targetStack.pop();
	}
	printStack(inverseStack);
	cout << endl;
}

bool countParanthesisBallance(stack<char> targetStack) { // перевірка балансу дужок (#1)
	int openParCount = 0;
	int closeParCount = 0;
	bool bottomSideNotClose = true;

	while (!targetStack.empty()) {
		if (targetStack.top() == '(' && closeParCount == 0) {
			return false;
		}
		else if (targetStack.top() == '(') {
			++openParCount;
			bottomSideNotClose = true;
		}
		else if (targetStack.top() == ')') {
			++closeParCount;
			bottomSideNotClose = false;
		}
		targetStack.pop();
	}

	if (openParCount == closeParCount && bottomSideNotClose) return true;
	else return false;
}

int main() {
	stack<char> charStack;

	inputStackChars(charStack);
	cout << "\nContents of stack 'charStack' (top to bottom):\n";
	printStack(charStack);
	cout << "\nContents of stack 'charStack' (! bottom to top !):\n";
	printCharStackBackwards(charStack);
	cout << "Parenthesis ballance: " << boolalpha << countParanthesisBallance(charStack) << endl << endl;

	stack<int> intStack;
	inputStackInt(intStack);
	cout << "\nContents of stack 'intStack' (top to bottom):\n";
	printStack(intStack);

	moveNegativeToBottom(intStack);
	cout << "After moving negative to bottom (top to bottom):\n";
	printStack(intStack);

	sortIntStackDecrease(intStack);
	cout << "After sorting decreasingly (top to bottom): "; printStack(intStack);

	return 0;
}