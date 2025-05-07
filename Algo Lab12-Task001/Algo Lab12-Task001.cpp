/* Лабораторна робота 12, завдання 30

Перевірити, чи стек містить x
(використовувати stack)
*/

#include <iostream>
#include <stack>

using namespace std;

bool ifIntStackContains(stack <int> thisStack, int num) {
	while (!thisStack.empty()) {
		if (thisStack.top() == num) {
			return true;
		}
		else {
			thisStack.pop();
		}
	}
	return false;
}

int main() {
	stack <int> myStack;
	myStack.push(1);
	myStack.push(2);
	myStack.push(3);
	myStack.push(4);
	myStack.push(5);

	cout << "Does myStack contain 2? - " << boolalpha << ifIntStackContains(myStack, 2) << endl;
	cout << "Does myStack contain 5? - " << boolalpha << ifIntStackContains(myStack, 5) << endl;
	cout << "Does myStack contain 0? - " << boolalpha << ifIntStackContains(myStack, 0) << endl;
}