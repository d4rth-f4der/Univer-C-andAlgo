#include <iostream>
using namespace std;

int digits_sum(int a) {
	int sum = 0;
	while (a > 0) {
		sum += a%10;
		a /= 10;
	}
	return sum;
}

int main() {
	cout << digits_sum(123);
	return 0;
}