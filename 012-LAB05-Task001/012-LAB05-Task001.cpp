#include <iostream>
#include <windows.h>
#include <math.h>
#include <time.h>
using namespace std;
int main() {
	// ����������� 5, ������ 31 
	// 6/1 - ������ ���� �������� �������� ������ 1 (�>=j)
	SetConsoleOutputCP(1251);
	const int n = 5;
	int matrix[n][n];
	int sum=0;

	cout << "��������� ���������� ������� �������� ��������� ������� " << n << "x" << n << "\n";
	srand(time(NULL));
	for (int i = 0; i < n; ++i) {
		for (int j = 0; j < n; ++j) {
			matrix[i][j] = -21 + rand() % 41 + 1;
			cout << matrix[i][j] << "\t";
		}
		cout << endl;
	}
	for (int i = 0; i < n; ++i) {
		for (int j = 0; j < n; ++j) {
			if ((i >= j) and (matrix[i][j] % 2 != 0)) {
				cout << "\n� ������ ����� ������� �������, �������: " << matrix[i][j];
				sum += matrix[i][j];
			}
		}
	}
	cout << "\n����: " << sum;
}