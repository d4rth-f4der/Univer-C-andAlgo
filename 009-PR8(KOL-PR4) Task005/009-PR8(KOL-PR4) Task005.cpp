#include <iostream>
#include <windows.h>
#include <math.h>
using namespace std;
int main() 
{
	SetConsoleOutputCP(1251);
	const int n = 10;
	int arr[n], arr15sum=0;
	for (int i = 0; i < n; ++i) {
		cout << "¬вед≥ть елемент масиву (ц≥ле): ";
		cin >> arr[i];
		if (arr[i] > 15) {
			arr15sum += arr[i];
		}
	}
	cout << "\n—ума елемент≥в масиву, б≥льших за 15: " << arr15sum;
}