#include <iostream>
#include <windows.h>
using namespace std;
int main()
{
	SetConsoleOutputCP(1251);
	// �������� 12
	const int n = 7;
	double arr[n];
	int indexmax = 0;
	for (int i = 0; i < n; ++i) {
		cout << "������ " << i+1 << " ������� ������ � " << n << " ��������: ";
		cin >> arr[i];
		if (arr[i] > arr[indexmax]) {
			indexmax = i;
		}
	}
	cout << "\n�������, �� �� ����������� ��������: " << arr[indexmax];
}