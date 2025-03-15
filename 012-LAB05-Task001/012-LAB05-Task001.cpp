#include <iostream>
#include <windows.h>
#include <math.h>
#include <time.h>
using namespace std;
int main() {
	// Лабораторна 5, варіант 31 
	// 6/1 - знайти суму непарних елементів області 1 (і>=j)
	SetConsoleOutputCP(1251);
	const int n = 5;
	int matrix[n][n];
	int sum=0;

	cout << "Генерація випадкових значень елементів квадратної матриці " << n << "x" << n << "\n";
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
				cout << "\nВ області нижче головної діагоналі, непарне: " << matrix[i][j];
				sum += matrix[i][j];
			}
		}
	}
	cout << "\nСума: " << sum;
}