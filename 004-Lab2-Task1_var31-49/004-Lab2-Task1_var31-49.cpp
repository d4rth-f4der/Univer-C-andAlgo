#include <iostream>
#include <windows.h>
using namespace std;
void main()
{
	SetConsoleOutputCP(1251);
	float x, y, r;
	cout << "Введіть координати точки (x,y):\n";
	cin >> x >> y;
	cout << "Введіть довжину радіуса r:\n";
	cin >> r;
	r = abs(r);
	cout << "Чи лежить точка в межах заданої області? відповідь: " << boolalpha
		<< ((x <= 0 && x >= -r && y >= 0 && y <= r) ||
			((x * x + y * y) <= r * r && ((y >= 0 && x >= 0) || (y <= 0 && x <= 0))));
}