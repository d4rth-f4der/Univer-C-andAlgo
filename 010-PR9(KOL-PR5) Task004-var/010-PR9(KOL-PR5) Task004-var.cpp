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
	int arr[rows][cols], sum=0;

	cout << "Генерація випадкових значень елементів масиву з " << n << "x" << m << " елементів\n";
	srand(time(NULL));
	for (int i = 0; i < rows; ++i) {
		for (int j = 0; j < cols; ++j) {
			arr[i][j] = -2 + rand() % 3 + 1;
			cout << arr[i][j] << "\t";
		}
		cout << endl;
	}
	cout << "\nРядки, де немає від'ємних чисел:";
	for (int i = 0; i < rows; ++i) {
		for (int j = 0; j < cols; ++j) {
			if (arr[i][j] >= 0) {
				sum += arr[i][j];
			}
			else {
				sum = 0;
				break;
			}
		}
		if (sum != 0) {
			cout << "\nРядок # " << i + 1 << ", сума елементів: " << sum;
			sum = 0;
		}
	}
}