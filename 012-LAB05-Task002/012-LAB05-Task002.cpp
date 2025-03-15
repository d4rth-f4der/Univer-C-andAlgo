#include <iostream>
#include <windows.h>
#include <math.h>
#include <time.h>
using namespace std;
int main() {
	// Лабораторна 5, варіант 31 
	// 24/9 - Перевірити, чи всі елементи більше заданого числа області 9 (i<=j&&i+j<=n-1 || i>=j&&i+j>=n-1)
	SetConsoleOutputCP(1251);
	const int n = 5;
	int matrix[n][n];
	int N;

	cout << "Генерація випадкових значень елементів квадратної матриці " << n << "x" << n << "\n";
	srand(time(NULL));
	for (int i = 0; i < n; ++i) {
		for (int j = 0; j < n; ++j) {
			matrix[i][j] = -21 + rand() % 41 + 1;
			cout << matrix[i][j] << "\t";
		}
		cout << endl;
	}
	cout << "Введіть число N: ";
	cin >> N;
	bool allmore = 1;
	cout << "\nелемети в області (i<=j&&i+j<=n-1 || i>=j&&i+j>=n-1):";
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
		cout << "\n\n ! Всі елементи більше " << N << endl;
		}
}