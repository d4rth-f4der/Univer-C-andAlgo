#include <iostream>
#include <windows.h>
#include <math.h>
using namespace std;
int main()
{
	SetConsoleOutputCP(1251);
	const int n = 10;
	int arr[n];
	for (int i = 0; i < n; ++i) {
		cout << "¬вед≥ть елемент масиву (ц≥ле): ";
		cin >> arr[i];
	}
	for (int i = 0; i < 10; i+=2) {
		cout << arr[i] << " ";
	}
	cout << endl;
	for (int i = 1; i < 10; i+=2) {
		cout << arr[i] << " ";
	}
}