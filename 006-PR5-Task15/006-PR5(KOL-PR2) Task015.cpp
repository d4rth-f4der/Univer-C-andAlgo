#include <iostream>
#include <windows.h>
#include <math.h>
using namespace std;
int main()
{
	SetConsoleOutputCP(1251);
	float x; int a;
	cout << "������ �������, ��: ";
	cin >> x;
	cout << "������������ � �� (1), ����� (2), �� (3)? :"<< endl;
	cin >> a;
	switch (a) {
	case 1: cout << x * 10 << " ��"; break;
	case 2: cout << x / 100 << " �"; break;
	case 3: cout << x / 100000 << " ��"; break;
	default: cout << "����������� ��������";
	}
}