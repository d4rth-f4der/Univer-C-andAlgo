#include<iostream>
using namespace std;

double findMaxValue(double x, double y) {
	if (x > y) return x;
	else if (x < y) return y;
}

void findAndPrintMaxValue(double x, double y) {
	cout << findMaxValue(x, y);
}

int main() {
	double a, b;
	cout << "Input 2 numbers:\n";
	cin >> a >> b;
	findAndPrintMaxValue(a, b);


	return 0;
}