#include <iostream>
#include <windows.h>
using namespace std;
void main()
{
	SetConsoleOutputCP(1251);
	float x, y, r;
	cout << "������ ���������� ����� (x,y):\n";
	cin >> x >> y;
	cout << "������ ������� ������ r:\n";
	cin >> r;
	r = abs(r);
	cout << "�� ������ ����� � ����� ������ ������? �������: " << boolalpha
		<< ((x <= 0 && x >= -r && y >= 0 && y <= r) ||
			((x * x + y * y) <= r * r && ((y >= 0 && x >= 0) || (y <= 0 && x <= 0))));
}