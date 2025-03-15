#include <iostream>
#include <windows.h>
using namespace std;
void main()
{
	SetConsoleOutputCP(1251);
	float x, y, r, h;
	cout << "¬вед≥ть координати точки (x,y):\n";
	cin >> x >> y;
	cout << "¬вед≥ть довжину h:\n";
	cin >> h;
	cout << "¬вед≥ть довжину рад≥уса r:\n";
	cin >> r;
	h = abs(h), r = abs(r);
	cout << "„и лежить точка в межах заданоњ област≥? в≥дпов≥дь: " << boolalpha
		<< ((x <= r && x >= -h && y >= 0 && y <= r) ||
			(x >= -h && x <= 0 && y >= -r && y <= 0) ||
			((x * x + y * y) <= r * r && y <= 0 && x >= 0));
}