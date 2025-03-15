#include <iostream>
#include <windows.h>
#include <time.h>
using namespace std;
int main()
{
	SetConsoleOutputCP(1251);
	const int n = 12;
	int arr[n], zeronum=0;
	cout << "Варіант 31\nВвод масиву " << n << " елементів\n";
	srand(time(NULL));
	for (int i = 0; i < n; ++i) {
		arr[i] = -5 + rand() % 10;
		cout.width(3);
		cout << arr[i];
	}
	for (int i = 0; i<n ; ++i) {
		if (arr[i] == 0) {
			zeronum = i + 1;
			cout << "\nПорядковий номер 1шого елемента, що дорівнює 0: " << zeronum << endl;
			break;
		}
	}
	if (zeronum == 0) {
		cout << " ERROR NO ZEROES ";
	}
	for (int i = 0; i < zeronum-2; ++i) {
		int nom_min = i;
		for (int j = i + 1; j < zeronum-1; j++) {
			if (arr[j] < arr[nom_min]) {
				nom_min = j;
			}
		}
		swap(arr[i], arr[nom_min]);
	}
	cout << "\nSelection sort : " << endl;
	for (int i = 0; i < n; ++i) {
		cout.width(3);
		cout << arr[i];
	}
}