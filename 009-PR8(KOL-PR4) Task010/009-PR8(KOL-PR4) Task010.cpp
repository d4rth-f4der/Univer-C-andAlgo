#include <iostream>
#include <windows.h>
using namespace std;
// 10 завданн€
int main()
{
	SetConsoleOutputCP(1251);
	const int n = 5;
	int sumeven = 0;
	int arr[n], firstpos = 0, lastneg = 0;
	for (int i = 0; i < n; ++i) {
		cout << "¬вед≥ть елемент масиву з " << n << " елемент≥в (ц≥ле) : ";
		cin >> arr[i];
		if (arr[i] % 2==0) {
			sumeven += arr[i];
		}
	}
	cout << "—ума вс≥х парних елемент≥в: " << sumeven;
}