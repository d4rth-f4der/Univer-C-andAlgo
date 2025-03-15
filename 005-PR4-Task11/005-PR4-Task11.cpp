#include <iostream>
#include <windows.h>
using namespace std;
int main()
{
	SetConsoleOutputCP(1251);
	float a, b, c;
	cout << "Введіть 1-ше число: ";
	cin >> a;
	cout << "Введіть 2-ге число: ";
	cin >> b;
	cout << "Введіть 3-тє число: ";
	cin >> c;
	if ((a == b) && (a == c)) {
		cout << "Всі три числа рівні між собою.";
	}
	else if ((a == b) || (a == c) || (b == c)) {
		cout << "Два числа рівні одне одному.";
	}
	else {
		cout << "Немає рівних між собою чисел";
	}
}