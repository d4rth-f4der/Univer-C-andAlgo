#include <iostream>
#include <windows.h>
#include <math.h>
using namespace std;
int main()
{
	SetConsoleOutputCP(1251);
	const int n = 5;
	int arr[n], arrqtyeven = 0, arrqtyodd = 0;
	for (int i = 0; i < n; ++i) {
		cout << "Введіть елемент масиву (ціле): ";
		cin >> arr[i];
	}
	for (int i = n - 1;  i >= 0; --i) {
		cout << "\nВ зворотньому напрямку: " << arr[i];
	}
}