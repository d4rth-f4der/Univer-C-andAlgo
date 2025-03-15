#include<iostream>
using namespace std;

int reverseint(int x) {
	int revnum =0;
	while (x > 0) {
		revnum *= 10;
		revnum += x % 10;
		x /= 10;
	}
	return revnum;
}

int main() {
	cout << reverseint(1564892);
}