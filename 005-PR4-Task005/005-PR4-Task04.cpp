#include <iostream>
#include <windows.h>
using namespace std;
int main()
{
	SetConsoleOutputCP(1251);

	int n;
	cout << "������ ������, �� 1 �� 10" << endl;
	cin >> n;
	if (n <= 4) {
		cout << "������" << endl;
	}
	else if (n <= 7) {
		cout << "��������" << endl;
	}
	else if (n <= 10) {
		cout << "³�����";
	}
	else {
		cout << "���� ���� ������";
	}
}