// Завдання 13
#include <iostream>
#include <windows.h>
#include <math.h>
using namespace std;
int main()
{
	SetConsoleOutputCP(1251);
	float x, y;
	cout << "Введіть х: ";
	cin >> x;
	cout << "Введіть y: ";
	cin >> y;
	int res;
	if ((x > 0) && (x > y)) {
		res = cbrt(x + y) - y;
	}
	else {
		res = x - y;
	}
	cout << res;
}