#include <iostream>
#include <windows.h>
#include <math.h>
using namespace std;
int main()
{
	SetConsoleOutputCP(1251);
	const int n = 5;
	int arr[n], arrpos = 0;
	for (int i = 0; i < n; ++i) {
		cout << "Введіть елемент масиву (ціле): ";
		cin >> arr[i];
		if (arr[i] > 0) {
			arrpos++;
		}
	}
	cout << arrpos;
	if (arrpos > 0) {
		cout << "\nВ масиві є додатні елементи";
	}
	if (arrpos > 1) {
		cout << "\nВ масиві є хоча б 2 додатні елементи";
	}
	if (arrpos == 2) {
		cout << "\nВ масиві рівно 2 додатні елементи";
	}
	for (int i = 0; i < n; i++) {
		if (arr[i] > 0) {
			cout << "\nПерший додатній елемент масиву: " << i;
			break;
		}
	}
}