#include <iostream>
#include <windows.h>
using namespace std;
int main()
{
	SetConsoleOutputCP(1251);
	float x, y, r;
	cout << "������ ���������� ����� (x,y):\n";
	cin >> x >> y;
	cout << "������ ������� ������ r:\n";
	cin >> r;
	r = abs(r); // ���� � ������� 0 � ��������� �� r ����������� |x|+|y|=r
	cout << "�� ������ ����� � ����� ������ ������? �������: " << boolalpha
		<< ((x >= 0 && x <= r && y >= 0 && y <= r && (abs(x) + abs(y) <= r)) ||
		(x >= 0 && x <= r && y <= 0 && y >= -r && (abs(x) + abs(y) <= r)) ||
			((x * x + y * y) <= r * r && (x <= 0)));
}