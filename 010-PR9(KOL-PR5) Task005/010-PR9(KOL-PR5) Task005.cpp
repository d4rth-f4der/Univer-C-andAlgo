#include <iostream>
#include <windows.h>
#include <math.h>
#include <time.h>
using namespace std;
int main()
{
	// �� 5 �������� 5
	SetConsoleOutputCP(1251);
	const int n = 2, m = 12;
	const int rows = n;
	const int cols = m;
	int arr[rows][cols];
	bool colpos;

	cout << "��������� ���������� ������� �������� ������ � " << n << "x" << m << " ��������\n";
	srand(time(NULL));
	for (int i = 0; i < rows; ++i) {
		for (int j = 0; j < cols; ++j) {
			arr[i][j] = -3 + rand() % 4 + 1;
			cout << arr[i][j] << "\t";
		}
		cout << endl;
	}
	for (int j = 0; j < cols; ++j) {
		colpos = 1;
		for (int i = 0; i < rows; ++i) {
			if (arr[i][j] % 2 != 0) {
				colpos=0;
				break;
			}
		}
		if (colpos == 1) {
			cout << "\n� ������� # " << j + 1 << " �� �������� - ����";
		}
	}
}