#include <iostream>
#include <windows.h>
#include <math.h>
using namespace std;
int main()
{
	SetConsoleOutputCP(1251);
	int x, mass[5], sumposmass=0;
	for (int i = 0; i < 5; ++i) {
		cout << "������ ������� ������ (����): ";
		cin >> mass[i];
		if (mass[i] > 0) {
			sumposmass += mass[i];
		}
	}
	cout << "������ ����� �: ";
	cin >> x;
	for (int i = 0; i < 5; ++i) {
		cout << mass[i] << " ";
	}
	cout << "\n���� ������� �������� ������: " << sumposmass;
	if (x * 2 == sumposmass) {
		cout << "\nTRUE";
	}
	else {
		cout << "\nFALSE";
	}
}