#include <iostream>
#include <windows.h>
using namespace std;
int main()
{
	SetConsoleOutputCP(1251);
	// Завдання 15
	const int n = 8;
	int arr[n] = { 10,7,12,9,12,10,15,13 };
	cout << "Початковий план годування:\n";
	for (int i : arr) {
		cout.width(3);
		cout << i;
	}
	for (int i = 0; i < n; i += 2) {
		swap(arr[i], arr[i + 1]);
	}
	cout << "\nВиправлений графік:\n";
	for (int i : arr) {
		cout.width(3);
		cout << i;
	}
}