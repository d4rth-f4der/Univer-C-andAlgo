#include <iostream>
#include <windows.h>
#include <math.h>
#include <time.h>
using namespace std;
int main() {
	// ����������� 5, ������ 31 
	// 24/9 - ���������, �� �� �������� ����� �������� ����� ������ 9 (i<=j&&i+j<=n-1 || i>=j&&i+j>=n-1)
	SetConsoleOutputCP(1251);
	const int n = 5;
	int matrix[n][n];
	int N;

	cout << "��������� ���������� ������� �������� ��������� ������� " << n << "x" << n << "\n";
	srand(time(NULL));
	for (int i = 0; i < n; ++i) {
		for (int j = 0; j < n; ++j) {
			matrix[i][j] = -21 + rand() % 41 + 1;
			cout << matrix[i][j] << "\t";
		}
		cout << endl;
	}
	cout << "������ ����� N: ";
	cin >> N;
	bool allmore = 1;
	cout << "\n������� � ������ (i<=j&&i+j<=n-1 || i>=j&&i+j>=n-1):";
	for (int i = 0; i < n; ++i) {
		for (int j = 0; j < n; ++j) {
			if (i <= j && i + j <= n - 1 || i >= j && i + j >= n - 1) {
				cout << "\n" << matrix[i][j];
				if (matrix[i][j] <= N) {
					allmore = 0;
				}
			}
		}
	}
	if (allmore != 0) {
		cout << "\n\n ! �� �������� ����� " << N << endl;
		}
}