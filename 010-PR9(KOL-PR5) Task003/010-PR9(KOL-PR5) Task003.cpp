#include <iostream>
#include <windows.h>
#include <math.h>
#include <time.h>
using namespace std;
int main()
{
	// �� 5 �������� 3
	SetConsoleOutputCP(1251);
	const int n = 3, m = 10;
	const int rows = n;
	const int cols = m;
	int arr[rows][cols];
	int ZeroSumCol[m]{ 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };

	cout << "��������� ���������� ������� �������� ������ � " << n << "x" << m << " ��������\n";
	srand(time(NULL));
	for (int i = 0; i < rows; ++i) {
		for (int j = 0; j < cols; ++j) {
			arr[i][j] = -2 + rand() % 3 + 1;
			cout << arr[i][j] << "\t";
		}
		cout << endl;
	}
	for (int j = 0; j < cols; ++j) {
		for (int i = 0; i < rows; ++i) {
			ZeroSumCol[j] += arr[i][j];
		}
	}
	cout << "\n������ ��������, ���� �������� ���� ������� 0: \n";
	for (int i = 0; i < m; ++i) {
		if (ZeroSumCol[i] == 0) {
			cout << i+1 << " ";
		}
	}
}