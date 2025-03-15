#include <iostream>
#include <windows.h>
#include <math.h>
using namespace std;
int main()
{
	SetConsoleOutputCP(1251);
	const int n = 10;
	int arr[n], arrqtyeven = 0, arrqtyodd = 0;
	for (int i = 0; i < n; ++i) {
		cout << "Введіть елемент масиву (ціле): ";
		cin >> arr[i];
		if (arr[i] % 2 ==0) {
			++arrqtyeven;
		}
		else if 
			(arr[i] % 2 == 1) {
			++arrqtyodd;
		}
	}
	cout << "\nКількість парних елементів: " << arrqtyeven;
	cout << "\nКількість непарних елементів: " << arrqtyodd;
}