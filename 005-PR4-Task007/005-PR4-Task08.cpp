#include <iostream>
#include <windows.h>
using namespace std;
int main()
{
	SetConsoleOutputCP(1251);

	int n;
	cout << "������ ����� N" << endl;
	cin >> n;
	if (abs(n) < 10) {
		cout << "����� N �����������" << endl;
	}
	else if (abs(n) < 100) {
		cout << "����� N ����������" << endl;
	}
	else if (abs(n) < 1000) {
		cout << "����� N ����������" << endl;
	}
	else if (abs(n) < 10000) {
		cout << "����� N ���������������" << endl;
	}
	else if (abs(n) == 10000) {
		cout << "������ ����� N ������ 10^4" << endl;
	}
	else if (abs(n) > 10000) {
		cout << "�������! ����� N ����� �� ����������� ���������" << endl;
	}
}