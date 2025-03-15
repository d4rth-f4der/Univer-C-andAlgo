#include <iostream>
#include <windows.h>
using namespace std;
int main()
{
	SetConsoleOutputCP(1251);
	// Завдання 11 - 2
	const int n = 7;
	int atm[n] = {100, 50, 20, 10, 5, 2, 1}, WTDR_QTY, paperQTY = 0;
	int atmqty[n] = { 10, 10, 10, 10, 10, 10, 10 };
	cout << "Введіть сумму для зняття: ";
	cin >> WTDR_QTY;
	for (int i = 0; i < n; ++i) {
		if (WTDR_QTY >= atm[i]) {
			cout << "Видано " << WTDR_QTY / atm[i] << " банкнот, номіналом " << atm[i] << endl;
			paperQTY += (WTDR_QTY / atm[i]);
			WTDR_QTY %= atm[i];
		}
	}
	cout << "\nЗалишилось видати: " << WTDR_QTY;
	cout << "\nЗагальна кількість виданих банкнот: " << paperQTY;
}