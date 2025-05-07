/* Using "stack" data container:
std::stack::push()		- adding element on top of the stack
std::stack::pop()		- removing element from the top of the stack
std::stack::top()		- getting the top element of the stack
std::stack::empty()		- checking if the stack is empty (true/false)
*/
#include <iostream>
#include <stack>

using namespace std;

void main() {
	stack <int> steck;
	int i = 0;
	cout << "Input any six whole numbers: " << endl;
	while (i != 6) {
		int a;
		cin >> a;
		steck.push(a);
		i++;
	}

	if (!steck.empty()) {
		cout << "Stack is not empty" << endl;
		cout << "The top element is: " << steck.top() << endl;
		cout << "Lets delete the top element" << endl;

		steck.pop();

		cout << "\nNew top element is: " << steck.top() << endl;
	}
}