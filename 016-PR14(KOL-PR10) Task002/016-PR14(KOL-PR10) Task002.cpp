#include <iostream>
#include <string>
using namespace std;

int concatSTR(string a, string b) {
	string c;
	c = a + b;
	cout << c;
	return 0;
}

int main() {
	string str1 = "first string.";
	string str2 = "second string";
	concatSTR(str1, str2);
}
