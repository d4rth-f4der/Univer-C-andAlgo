#include <iostream>
using namespace std;

int main() {
	unsigned long long sum = 2;
	int depth;
	cout << "Set algorythm range (positive int), from 1 to ";
	cin >> depth;

	unsigned long long numerator = 2;
	for (int i = 2; i <= depth; ++i) {
		numerator = numerator * (2 * i) * (2 * i - 1);
		sum += numerator / i;
	}

	cout << "\nThe sum of progression ending on " << depth << " is " << sum << endl;
	return 0;
}
