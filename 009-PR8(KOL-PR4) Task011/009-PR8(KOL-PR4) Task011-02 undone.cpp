#include <iostream>
#include <windows.h>
using namespace std;
int main()
{
	SetConsoleOutputCP(1251);
	// �������� 11 - 2
	const int n = 7;
	int atm[n] = {100, 50, 20, 10, 5, 2, 1}, WTDR_QTY, paperQTY = 0;
	int atmqty[n] = { 10, 10, 10, 10, 10, 10, 10 };
	cout << "������ ����� ��� ������: ";
	cin >> WTDR_QTY;
	for (int i = 0; i < n; ++i) {
		if (WTDR_QTY >= atm[i]) {
			cout << "������ " << WTDR_QTY / atm[i] << " �������, �������� " << atm[i] << endl;
			paperQTY += (WTDR_QTY / atm[i]);
			WTDR_QTY %= atm[i];
		}
	}
	cout << "\n���������� ������: " << WTDR_QTY;
	cout << "\n�������� ������� ������� �������: " << paperQTY;
}