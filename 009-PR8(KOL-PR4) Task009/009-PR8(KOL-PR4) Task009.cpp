#include <iostream>
#include <windows.h>
#include <math.h>
using namespace std;
// 9 ��������
int main()
{
	SetConsoleOutputCP(1251);
	const int n = 7;
	int arr[n], firstpos=0, lastneg=0;
	for (int i = 0; i < n; ++i) {
		cout << "������ ������� ������ � " << n << " �������� (���� �����) : ";
		cin >> arr[i];
		if (arr[i] < 0) {
			lastneg = arr[i];
		}
	}
	for (int i = 0; i < n; ++i) {
		if (arr[i] > 0) {
			firstpos = arr[i];
			break;
		}
	}
	cout << "������ ������� �������: " << firstpos;
	cout << "\n������� ��'����� �������: " << lastneg;
	cout << "\nг����� ������� ���������� � ���������� ��'������ ��������: " << firstpos << " - (" << lastneg
		<< ") = " << firstpos - lastneg;
}