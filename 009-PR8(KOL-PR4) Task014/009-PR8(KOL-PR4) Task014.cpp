#include <iostream>
#include <windows.h>
using namespace std;
int main()
{
	SetConsoleOutputCP(1251);
	// Завдання 14
	const int n = 7;
	int arr[n] = { 2,3,5,7,11,13,17 };
	cout << "Початковий масив:\n";
	for (int i : arr) {
		cout.width(3);
		cout << i;
	}
	int arres[n];
	int sum = 0;
	for (int i = 0; i < n; ++i) {
		sum += arr[i];
		arres[i] = sum;
	}
	cout << "\nРезультуючий масив:\n";
	for (int i : arres) {
		cout.width(3);
		cout << i;
	}
}