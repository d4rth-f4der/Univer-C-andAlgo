#include <iostream>
#include <windows.h>
#include <math.h>
#include <time.h>
using namespace std;
int main()
{
	// ПР 5 завдання 2
	SetConsoleOutputCP(1251);
	const int n = 4, m = 4;
	const int rows = n;
	const int cols = m;
	int arr[rows][cols];
	int NegQtyRow[n]{ 0, 0, 0, 0 };

	cout << "Генерація випадкових значень елементів масиву з " << n << "x" << m << " елементів\n";
	srand(time(NULL));
	for (int i = 0; i < rows; ++i) {
		for (int j = 0; j < cols; ++j) {
			arr[i][j] = -6 + rand() % 11 + 1;
			cout << arr[i][j] << "\t";
			if (arr[i][j] < 0) {
				NegQtyRow[i] += 1;
			}
		}
		cout << endl;
	}
	for (int i = 0; i < n; ++i) {
		cout << "\nСума від'ємних елементів " << i + 1 << " рядка: " << NegQtyRow[i];
		}
		cout << endl;
}