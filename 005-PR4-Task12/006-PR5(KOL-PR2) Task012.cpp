// �������� 12
#include <iostream>
#include <windows.h>
using namespace std;
int main()
{
	SetConsoleOutputCP(1251);
	int a, b, c;
	cout << "������ 1-�� ����� (����): ";
	cin >> a;
	bool boolaeven = (a % 2 ==0);
	cout << "������ 2-�� ����� (����): ";
	cin >> b;
	bool boolbeven = (b % 2 == 0);
	cout << "������ 3-� ����� (����): ";
	cin >> c;
	bool boolceven = (c % 2 == 0);
	if ((boolaeven + boolbeven + boolceven > 0) && (boolaeven + boolbeven + boolceven < 3)) {
		cout << "Yes!";
	}
}