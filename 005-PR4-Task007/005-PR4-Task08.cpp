#include <iostream>
#include <windows.h>
using namespace std;
int main()
{
	SetConsoleOutputCP(1251);

	int n;
	cout << "Введіть число N" << endl;
	cin >> n;
	if (abs(n) < 10) {
		cout << "Число N одноцифрове" << endl;
	}
	else if (abs(n) < 100) {
		cout << "Число N двоцифрове" << endl;
	}
	else if (abs(n) < 1000) {
		cout << "Число N трицифрове" << endl;
	}
	else if (abs(n) < 10000) {
		cout << "Число N чотирьохцифрове" << endl;
	}
	else if (abs(n) == 10000) {
		cout << "Модуль числа N дорінює 10^4" << endl;
	}
	else if (abs(n) > 10000) {
		cout << "Помилка! число N більше за максимально допустиме" << endl;
	}
}