#include <iostream>
#include <windows.h>
#include <math.h>
using namespace std;
int main()
{
	SetConsoleOutputCP(1251);
	int a;
	cout << "¬вед≥ть будь-€ке натуральне число: ";
	cin >> a;
	for (; a != 1; ) {
		if (a % 2 == 0) {
			a /= 2;
			cout << a <<" ";
		}
		else {
			a = (a * 3 + 1) / 2;
			cout << a << " ";
		}
	}
}