#include <iostream>
using namespace std;

int factorial(int x) {
	int fact = x;
	while (x > 1) {
		fact *= (x - 1);
		x -= 1;
	}
	return fact;
}

int main() {
	cout << factorial(5);
	return 0;
}