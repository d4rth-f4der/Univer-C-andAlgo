#include <iostream>
#include <windows.h>
using namespace std;
int main()
{
	SetConsoleOutputCP(1251);
	int a, b, c;
	cout << "������ ����� �����: ";
	cin >> a;
	b = a * 3, c = a + b;
	cout << "����� ����� = � * 3 = " << b << "\n����� ����� = a + b = " << c;
}