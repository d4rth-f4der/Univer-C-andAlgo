#include <iostream>
#include <windows.h>
using namespace std;
void main()
{
	SetConsoleOutputCP(1251);
	float x, y, r, h;
	cout << "������ ���������� ����� (x,y):\n";
	cin >> x >> y;
	cout << "������ ������� h:\n";
	cin >> h;
	cout << "������ ������� ������ r:\n";
	cin >> r;
	h = abs(h), r = abs(r);
	cout << "�� ������ ����� � ����� ������ ������? �������: " << boolalpha
		<< ((x <= r && x >= -h && y >= 0 && y <= r) ||
			(x >= -h && x <= 0 && y >= -r && y <= 0) ||
			((x * x + y * y) <= r * r && y <= 0 && x >= 0));
}