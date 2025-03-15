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

int placement(int n, int k) {
	return (factorial(n) / factorial(n - k));
}

int main() {
	cout << placement(5, 3);
}