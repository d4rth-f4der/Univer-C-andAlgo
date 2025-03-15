#include <iostream>
#include <windows.h>
#include <math.h>
#include <time.h>
using namespace std;
int main()
{
	// ПР 5 завдання 1
	SetConsoleOutputCP(1251);
	const int n =3, m=3;
	const int rows = n;
	const int cols = m;
	int arr[rows][cols];

	cout << "Генерація випадкових значень елементів масиву з " << n << "x" << m << " елементів\n";
	srand(time(NULL));
	for (int i = 0; i < rows; ++i) {
		for (int j = 0; j < cols; ++j) {
			arr[i][j] = -6 + rand() % 11 + 1;
			cout << arr[i][j] << "\t";
			if (arr[i][j] == 0) {
				arr[i][j] = 100;
			}
			else if (arr[i][j] % 2 == 1) {
				arr[i][j] *= 2;
			}
			else if (arr[i][j] % 2 == 0) {
				arr[i][j] /= 2;
			}
		}
		cout << endl;
	}
	cout << "\nМодифікована матриця: \n";
	for (int i = 0; i < rows; ++i) {
		for (int j = 0; j < cols; ++j) {
			cout << arr[i][j] << "\t";
		}
		cout << endl;
	}
}