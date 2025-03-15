// Завдання 16
#include <iostream>
#include <windows.h>
#include <math.h>
using namespace std;
int main()
{
	SetConsoleOutputCP(1251);
	int x;
	cout << "Введіть х: ";
	cin >> x;
	int res;
	if ((x % 2 == 0) && (x < 10) || (x > 20)) {
		res = pow (x, 2);
	}
	else {
		res = x;
	}
	cout << res;
}