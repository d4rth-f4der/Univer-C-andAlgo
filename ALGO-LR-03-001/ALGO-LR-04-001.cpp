#include <iostream>
#include <string>
using namespace std;

string deleteSeparationSymbols(string someString, int index) {
	if (index < 0) return someString;
	if ((someString[index] == ':') || (someString[index] == ';') || (someString[index] == '.')
		|| (someString[index] == ',') || (someString[index] == '-')) {
		someString.erase(index, 1);
	}
	return deleteSeparationSymbols(someString, index - 1);
}

int main() {
	string initialString = "Hello, this; is: a. test- string";
	cout << "Initial string: " << initialString;
	cout << "\nEdited string: " << deleteSeparationSymbols(initialString, initialString.length() - 1);
	return 0;
}