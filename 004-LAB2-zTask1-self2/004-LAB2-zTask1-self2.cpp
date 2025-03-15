#include <iostream>
#include <windows.h>
using namespace std;
int main()
{
	SetConsoleOutputCP(1251);
	float x, y, B;
	cout << "Введіть координати точки (x,y):\n";
	cin >> x >> y;
	cout << "Введіть довжину сторони ромба:\n";
	cin >> B;
	float yxmax = ((1.0/sqrt(2.0)*B)); // cos45 x B - довжина "одиничного" відрізка,
	                                  // де знаходяться вершини ромба
	cout << "Чи лежить точка в межах заданої області? відповідь: " << boolalpha << 
		((abs(x) + abs(y)) <= yxmax);
}