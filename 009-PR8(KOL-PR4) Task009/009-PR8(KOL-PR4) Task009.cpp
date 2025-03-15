#include <iostream>
#include <windows.h>
#include <math.h>
using namespace std;
// 9 завданн€
int main()
{
	SetConsoleOutputCP(1251);
	const int n = 7;
	int arr[n], firstpos=0, lastneg=0;
	for (int i = 0; i < n; ++i) {
		cout << "¬вед≥ть елемент масиву з " << n << " елемент≥в (ц≥ле число) : ";
		cin >> arr[i];
		if (arr[i] < 0) {
			lastneg = arr[i];
		}
	}
	for (int i = 0; i < n; ++i) {
		if (arr[i] > 0) {
			firstpos = arr[i];
			break;
		}
	}
	cout << "ѕерший додатн≥й елемент: " << firstpos;
	cout << "\nќстанн≥й в≥д'Їмний елемент: " << lastneg;
	cout << "\n–≥зниц€ першого додатнього ≥ останнього в≥д'Їмного елемент≥в: " << firstpos << " - (" << lastneg
		<< ") = " << firstpos - lastneg;
}