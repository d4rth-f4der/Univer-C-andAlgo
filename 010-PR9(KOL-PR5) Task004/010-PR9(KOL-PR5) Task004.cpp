#include <iostream>
#include <windows.h>
#include <math.h>
#include <time.h>
using namespace std;
int main()
{
	// �� 5 �������� 4
	SetConsoleOutputCP(1251);
	const int n = 10, m = 4;
	const int rows = n;
	const int cols = m;
	int arr[rows][cols];
	bool NoNegRow[n]{ 1, 1, 1, 1, 1, 1, 1, 1, 1, 1 }; //������� ��� ����� ������
	int NoNRSum[n]{ 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };

	cout << "��������� ���������� ������� �������� ������ � " << n << "x" << m << " ��������\n";
	srand(time(NULL));
	for (int i = 0; i < rows; ++i) {
		for (int j = 0; j < cols; ++j) {
			arr[i][j] = -2 + rand() % 3 + 1;
			cout << arr[i][j] << "\t";
			if (arr[i][j] < 0) {
				NoNegRow[i] = 0;
			}
		}
		cout << endl;
	}
	cout << "\n�����, �� ���� ��'����� �����:";
	for (int k = 0; k < m; ++k) {
		if (NoNegRow[k] == 1) {
			for (int j = 0; j < cols; ++j) {
				NoNRSum[k] += arr[k][j];
			}
			cout << "\n����� # " << k+1 << ", ���� ��������: " << NoNRSum[k];
		}
	}
}