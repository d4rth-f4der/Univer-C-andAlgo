#include <iostream>
#include <windows.h>
using namespace std;
int main()
{
	SetConsoleOutputCP(1251);

	int n;
	cout << "¬вед≥ть число N" << endl;
	cin >> n;
	if (n > 0) {
		cout << "positive" << endl;
	}
	else if (n < 0) {
		cout << "negative" << endl;
	}
	else if (n == 0) {
		cout << "zero";
	}
}