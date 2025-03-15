/* Варіант 1 Завдання 3(2)
Побудувати таблицю значень функції y(x) для визначеного самостійно діапазону значень
x. Виконати завдання, використовуючи цикли for, while, do while.
y=cos^3(|x-1|)+sin^3(x+0.2) */
#include <iostream>
#include <windows.h>
#include "math.h"
using namespace std;
int main()
{
	SetConsoleOutputCP(1251);
	double x, x1, x2;
	cout << "Введіть початкове значення х: ";
	cin >> x1;
	cout << "Введіть кінцеве значення х: ";
	cin >> x2;
	cout.fill('-'); cout.width(50); cout << "-\n";
	cout << "|\tзначення х \t|\t значення y\t|\n";
	cout.fill('-'); cout.width(50); cout << "-\n";
	for (float x = x1; x <= x2; x = x + 0.1)
				cout << "|   \t" << x << "\t\t|\t" <<
		(pow((cos(fabs(x-1))),3)+pow((sin(x+0.2)),3)) << "\t|" << endl;
	cout.fill('-'); cout.width(50); cout << "-\n";
}