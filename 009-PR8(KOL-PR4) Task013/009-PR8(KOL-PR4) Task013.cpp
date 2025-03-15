#include <iostream>
#include <windows.h>
#include <time.h>
using namespace std;
int main()
{
	SetConsoleOutputCP(1251);
	// Завдання 13
	const int n = 20;
	int arr[n];
	int indxFZ = -1;
	int indxSZ = -1;
	int inZsum = 0;
	cout << "Варіант 31\nГенерація випадкових значень елементів масиву з " << n << " елементів\n";
	srand(time(NULL));
	for (int i = 0; i < n; ++i) {
		arr[i] = -11 + rand() % 20 +1;
		cout.width(4);
		cout << arr[i];
		if ((arr[i]==0)&&(indxFZ == -1)) {
			indxFZ = i;
			cout << "\nПерший нуль - " << i + 1 << " елемент\n";
		}
		else if ((arr[i] == 0)&&(indxFZ != -1) && (indxSZ == -1)) {
			indxSZ = i;
			cout << "\nДругий нуль - " << i + 1 << " елемент\n";
		}
	}
	if ((indxFZ >= 0) && (indxSZ >= 0)) {
		for (int i = (indxFZ + 1); i < indxSZ; ++i) {
			inZsum += arr[i];
		}
		cout << "\nСума елементів між двома першими нулями: " << inZsum;
	}
	else {
		cout << "0";
	}
}