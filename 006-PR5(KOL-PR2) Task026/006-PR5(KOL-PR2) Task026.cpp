#include <iostream>
#include <windows.h>
using namespace std;
int main()
{
	SetConsoleOutputCP(1251);
	double a;
	cout << "������ ���� �������, ���: ";
	cin >> a;
	if (a < 1000) {
		cout << "���� �� ������, ������ 0%: " << a;
	}
	else if ((a >= 1000) && (a <= 5000)) {
		cout << "���� �� ������, ������ 5%: " << a * 0.95;
	}
	else if ((a >= 5001) && (a <= 10000)) {
		cout << "���� �� ������, ������ 10%: " << a * 0.9;
	}
	else {
		cout << "���� �� ������, ������ 15%: " << a * 0.85;
	}
}