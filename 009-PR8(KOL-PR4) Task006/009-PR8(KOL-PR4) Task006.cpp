#include <iostream>
#include <windows.h>
#include <math.h>
using namespace std;
int main()
{
	SetConsoleOutputCP(1251);
	const int n = 5;
	int arr[n], arrpos = 0;
	for (int i = 0; i < n; ++i) {
		cout << "������ ������� ������ (����): ";
		cin >> arr[i];
		if (arr[i] > 0) {
			arrpos++;
		}
	}
	cout << arrpos;
	if (arrpos > 0) {
		cout << "\n� ����� � ������ ��������";
	}
	if (arrpos > 1) {
		cout << "\n� ����� � ���� � 2 ������ ��������";
	}
	if (arrpos == 2) {
		cout << "\n� ����� ���� 2 ������ ��������";
	}
	for (int i = 0; i < n; i++) {
		if (arr[i] > 0) {
			cout << "\n������ ������� ������� ������: " << i;
			break;
		}
	}
}