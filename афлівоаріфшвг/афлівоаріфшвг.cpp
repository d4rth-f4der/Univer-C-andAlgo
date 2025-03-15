#include <iostream>
#include <windows.h>
#include <math.h>
#include <time.h>
using namespace std;
int main() {
	// Лабораторна 5, варіант 19
	// 19/6 - помножити на N всі елементи (i>=j&&i+j>=n-1)
	SetConsoleOutputCP(1251);
	const int n = 3;
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
	cout << "Введіть число N\n";
	cin >> N;
	for (int i = 0; i < n; ++i) {
		for (int j = 0; j < n; ++j) {
			if (i >= j && i + j >= n - 1) {
				cout << "\nВ області (i>=j&&i+j>=n-1): " << matrix[i][j];
				matrix[i][j] *= N;
			}
		}
	}
	cout << "\n\nвсі помножено на " << N << ", модифікована матриця:\n\n";
	for (int i = 0; i < n; ++i) {
		for (int j = 0; j < n; ++j) {
			cout << matrix[i][j] << "\t";
		}
		cout << endl;
	}
}