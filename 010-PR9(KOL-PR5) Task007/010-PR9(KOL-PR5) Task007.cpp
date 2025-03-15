#include <iostream>
#include <windows.h>
#include <math.h>
#include <time.h>
using namespace std;
int main() {
	// ПР 5 завдання 7
	SetConsoleOutputCP(1251);
	const int n = 5, m = 5;
	float arr[n][m];
	int K;

	cout << "Генерація випадкових значень елементів масиву з " << n << "x" << m << " елементів\n";
	srand(time(NULL));
	for (int i = 0; i < n; ++i) {
		for (int j = 0; j < m; ++j) {
			arr[i][j] = -21 + rand() % 41 + 1;
			cout << arr[i][j] << "\t";
		}
		cout << endl;
	}
	int mxrwelsum = 0;
	for (int i = 0; i < n; ++i) {
		int maxdig = arr[i][0];
		for (int j = 0; j < m; ++j) {
			if (arr[i][j] > maxdig) {
				maxdig = arr[i][j];
			}
		}
		cout << "\nмаксимальний елемент " << i+1 << " рядка: " << maxdig;
		mxrwelsum += maxdig;
	}
	cout << "\n\nСума максимальних елементів кожного рядка: " << mxrwelsum << endl;
}