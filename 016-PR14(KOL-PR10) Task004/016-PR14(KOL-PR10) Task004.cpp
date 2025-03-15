#include <iostream>
using namespace std;

double AVGfrom3(double a, double b, double c) {
	return (a + b + c) / 3;
}

int main() {
	double x, y, z;
	cout << "input 3 numbers:\n";
	cin >> x >> y >> z;
	cout << "Average:" << AVGfrom3(x, y, z);
	return 0;
}