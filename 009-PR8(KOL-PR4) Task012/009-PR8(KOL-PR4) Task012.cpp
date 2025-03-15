#include <iostream>
#include <windows.h>
using namespace std;
int main()
{
	SetConsoleOutputCP(1251);
	// Завдання 12
	const int n = 7;
	double arr[n];
	int indexmax = 0;
	for (int i = 0; i < n; ++i) {
		cout << "Введіть " << i+1 << " елемент масиву з " << n << " елементів: ";
		cin >> arr[i];
		if (arr[i] > arr[indexmax]) {
			indexmax = i;
		}
	}
	cout << "\nЕлемент, що має максимальне значення: " << arr[indexmax];
}