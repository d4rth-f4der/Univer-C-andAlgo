#include <iostream>
#include <windows.h>
#include <math.h>
#include <time.h>
using namespace std;
int main()
{
	// ПР 5 завдання 4
	SetConsoleOutputCP(1251);
	const int n = 10, m = 4;
	const int rows = n;
	const int cols = m;
	int arr[rows][cols];
	bool NoNegRow[n]{ 1, 1, 1, 1, 1, 1, 1, 1, 1, 1 }; //ЗРОБИТИ БЕЗ ЦЬОГО МАСИВУ
	int NoNRSum[n]{ 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };

	cout << "Генерація випадкових значень елементів масиву з " << n << "x" << m << " елементів\n";
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
	cout << "\nРядки, де немає від'ємних чисел:";
	for (int k = 0; k < m; ++k) {
		if (NoNegRow[k] == 1) {
			for (int j = 0; j < cols; ++j) {
				NoNRSum[k] += arr[k][j];
			}
			cout << "\nРядок # " << k+1 << ", сума елементів: " << NoNRSum[k];
		}
	}
}