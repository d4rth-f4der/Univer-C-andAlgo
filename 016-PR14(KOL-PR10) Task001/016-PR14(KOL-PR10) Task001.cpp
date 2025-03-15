#include <iostream>
using namespace std;

void printHELLO(int n) {
	for (int i = 0; i < n; ++i) {
		cout << "Hello! ";
	}
}

int main() {
	int a;
	cout << "How many times to greet? ";
	cin >> a;
	printHELLO(a);
}
