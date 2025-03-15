#include <iostream>
#include <windows.h>
using namespace std;
int main()
{
	SetConsoleOutputCP(1251);
	float x, y, r;
	cout << "Введіть координати точки (x,y):\n";
	cin >> x >> y;
	cout << "Введіть довжину радіуса r:\n";
	cin >> r;
	r = abs(r); // ромб з центром 0 і вершинами на r визначається |x|+|y|=r
	cout << "Чи лежить точка в межах заданої області? відповідь: " << boolalpha
		<< ((x >= 0 && x <= r && y >= 0 && y <= r && (abs(x) + abs(y) <= r)) ||
		(x >= 0 && x <= r && y <= 0 && y >= -r && (abs(x) + abs(y) <= r)) ||
			((x * x + y * y) <= r * r && (x <= 0)));
}