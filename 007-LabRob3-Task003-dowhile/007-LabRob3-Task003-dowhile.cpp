/* ������ 1 �������� 3(2)
���������� ������� ������� ������� y(x) ��� ����������� ��������� �������� �������
x. �������� ��������, �������������� ����� for, while, do while.
y=cos^3(|x-1|)+sin^3(x+0.2) */
#include <iostream>
#include <windows.h>
#include "math.h"
using namespace std;
int main()
{
	SetConsoleOutputCP(1251);
	double x, x2;
	cout << "������ ��������� �������� �: ";
	cin >> x;
	cout << "������ ������ �������� �: ";
	cin >> x2;
	cout.fill('-'); cout.width(50); cout << "-\n";
	cout << "|\t�������� � \t|\t �������� y\t|\n";
	cout.fill('-'); cout.width(50); cout << "-\n";
	do {
		cout << "|   \t" << x << "\t\t|\t" <<
			(pow((cos(fabs(x - 1))), 3) + pow((sin(x + 0.2)), 3)) << "\t|" << endl;
		x = x + 0.1;
	} while (x <= x2);
	cout.fill('-'); cout.width(50); cout << "-\n";
}