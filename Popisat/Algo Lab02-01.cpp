#include <iostream>
using namespace std;

unsigned long long factorial(int number) {
	unsigned long long  factorialValue = 1;

	if (number > 1) {
		for (int i = 2; i <= number; ++i) {
			factorialValue *= i;
		}
	}

	return factorialValue;
}

int main() {
	unsigned long long sum = 0;
	int depth;
	cout << "Set algorythm range (positive int), from 1 to ";
	cin >> depth;

	for (int i = 1; i <= depth; ++i) {
		unsigned long long addend = factorial(i * 2) / i;
		sum += addend;
	}

	cout << "\nThe sum of progression ending on " << depth << " is " << sum << endl;
	return 0;
}
