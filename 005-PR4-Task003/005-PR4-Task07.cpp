#include <iostream>
#include <windows.h>
using namespace std;
int main()
{
	SetConsoleOutputCP(1251);
	float x, y=40;
	cout << "������ ������� ����� ������ �� �������:" << endl;
	cin >> x;
	if (x > y) {
		cout << "������������� ���";
	}
	else if (x<0) {
		cout << "������ �������� �����" << endl;
	}
	else {
		cout << "��������� ������� �������";
	}
}