#include <iostream>
#include <windows.h>
using namespace std;
int main()
{
	SetConsoleOutputCP(1251);
	float a, b, c;
	cout << "������ 1-�� �����: ";
	cin >> a;
	cout << "������ 2-�� �����: ";
	cin >> b;
	cout << "������ 3-� �����: ";
	cin >> c;
	if ((a == b) && (a == c)) {
		cout << "�� ��� ����� ��� �� �����.";
	}
	else if ((a == b) || (a == c) || (b == c)) {
		cout << "��� ����� ��� ���� ������.";
	}
	else {
		cout << "���� ����� �� ����� �����";
	}
}