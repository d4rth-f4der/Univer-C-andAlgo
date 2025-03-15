#include <iostream>
#include <windows.h>
#include <math.h>
using namespace std;
int main()
{
	SetConsoleOutputCP(1251);
	int a;
	cout << "Введіть число (ціле): ";
	cin >> a;
	cout << "Остання цифра числа: " << a - a / 10 * 10 << endl;
	if (a % 2 == 0) {
		cout << "Парне";
		for (i = 10; ; i += 10) {

		}
	}
	else {
		cout << "Непарне";
	}
}