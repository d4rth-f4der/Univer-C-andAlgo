#include <iostream>
#include <windows.h>
#include <math.h>
using namespace std;
int main()
{
	SetConsoleOutputCP(1251);
	// 9 �������� (����� �����)
	const int n = 6;
	double arr[n];
	int indPositive = -1, indNegative = -1;
	for (int i = 0; i < n; ++i) {
		cout << "������ ������� ������ � " << n << " ��������: ";
		cin >> arr[i];
	}
	for (int i = 0; i < n; ++i) {
		if (arr[i] > 0) {
			indPositive = i;
			break;
		}
	}
	for (int i = n - 1; i >= 0; --i) {
		if (arr[i] < 0) {
			indNegative = i;
			break;
		}
	}
	if ((indPositive != -1) && (indNegative != -1)) {
		cout << "г����� ������� ���������� � ���������� ��'������ ��������: " << arr[indPositive]
			<< " - (" << arr[indNegative] << ") = " << arr[indPositive] - arr[indNegative];
	}
	else {
		cout << "���� ��������� ���������� � ��'������ �����";
	}
}