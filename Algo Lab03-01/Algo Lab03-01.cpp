#include <iostream>
using namespace std;

unsigned long long factorialRecur(int number) {
	if (number <= 1) return 1;
	return number * factorialRecur(number - 1);
}

unsigned long long algoSum(int depth) {
	if (depth <= 0) return 0;
		unsigned long long addend = factorialRecur(depth * 2) / depth;
		return addend + algoSum(depth - 1);
}

int main() {
	int depth;
	cout << "Set algorythm range (positive int), from 1 to ";
	cin >> depth;
	cout << "\nThe sum of progression ending on " << depth << " is " << algoSum(depth) << endl;
	return 0;
}