#include <iostream>
#include <windows.h>
using namespace std;
// 10 ��������
int main()
{
	SetConsoleOutputCP(1251);
	const int n = 5;
	int sumeven = 0;
	int arr[n], firstpos = 0, lastneg = 0;
	for (int i = 0; i < n; ++i) {
		cout << "������ ������� ������ � " << n << " �������� (����) : ";
		cin >> arr[i];
		if (arr[i] % 2==0) {
			sumeven += arr[i];
		}
	}
	cout << "���� ��� ������ ��������: " << sumeven;
}