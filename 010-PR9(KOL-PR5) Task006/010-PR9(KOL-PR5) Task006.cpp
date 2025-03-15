#include <iostream>
#include <windows.h>
#include <math.h>
#include <time.h>
using namespace std;
int main() {
	// �� 5 �������� 6
	SetConsoleOutputCP(1251);
	const int n = 5, m = 5;
	float matrix[n][m];
	int K;

	cout << "��������� ���������� ������� �������� ������ � " << n << "x" << m << " ��������\n";
	srand(time(NULL));
	for (int i = 0; i < n; ++i) {
		for (int j = 0; j < m; ++j) {
			matrix[i][j] = -101 + rand() % 201 + 1;
			cout << matrix[i][j] << "\t";
		}
		cout << endl;
	}
	cout << "\n������ ����� (1-5): ";
	cin >> K;
	if ((K>=1) and (K<=5)) {
		K -= 1;
		for (int j = 0; j < m; ++j) {
			cout << "a[" << K + 1 << "," << j + 1 << "]/a[" << K + 1 << "," << K + 1 << "] = "
				<< matrix[K][j] << "/" << matrix[K][K] << " = " << matrix[K][j] / matrix[K][K] << endl;
		}
	}
}