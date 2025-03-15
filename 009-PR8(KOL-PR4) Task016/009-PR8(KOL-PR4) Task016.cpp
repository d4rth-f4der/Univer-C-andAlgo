#include <iostream>
#include <windows.h>
#include <time.h>
using namespace std;
int main()
{
	SetConsoleOutputCP(1251);
	// Завдання 16
	const int n = 20;
	int arr[n], Zct = 0, Zctmax = 0;
	cout << "Варіант 31\nГенерація випадкових значень елементів масиву з " << n << " елементів\n";
	srand(time(NULL));
	for (int i = 0; i < n; ++i) {
		arr[i] = -2 + rand() % 2 + 1;
		cout.width(3);
		cout << arr[i];
	}
	for (int i = 0; i < n; ++i) {
		if (arr[i] == 0) {
			Zct += 1;
		}
		if ((arr[i] == 0) && (arr[i + 1] != 0) && (Zctmax < Zct)) {
			Zctmax = Zct;
			Zct = 0;
		}
	}
	cout << "\nМаксимальна нерозривна послідовніть 0: " << Zctmax;
}