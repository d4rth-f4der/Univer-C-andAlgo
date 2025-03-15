#include<iostream>
using namespace std;

int nextEven(int a) {
	if (a % 2 == 0) return a + 2;
	else return a + 1;
}

int main() {
	int x;
	cout << "input number:\n";
	cin >> x;
	cout << "Next even: " << nextEven(x);
}