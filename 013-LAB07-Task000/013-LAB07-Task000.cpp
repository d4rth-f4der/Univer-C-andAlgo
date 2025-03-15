#include <iostream>
#include <windows.h>
#include <cmath>
#include <string>
using namespace std;

struct avto
{
	char model[20];
	int god;
	int p;
};
// Перевантаження оператора <<
ostream& operator <<(ostream& ocout, avto t)
{
	ocout.width(22);
	ocout << t.model;
	ocout.width(6);
	ocout << t.god;
	ocout.width(10);
	ocout << t.p << endl;
	return ocout;
}
// Перевантаження оператора >>
istream& operator >>(istream& icin, avto& t)
{
	cout << "Модель: ";
	icin >> t.model;
	cout << "Рік: ";
	icin >> t.god;
	cout << "Пробіг: ";
	icin >> t.p;
	return icin;
}

int main()
{
	const int n = 3;
	avto h[n];
	SetConsoleOutputCP(1251);
	for (int i = 0; i < n; i++)
	{
		cout << "Введіть елементи " << (i + 1) << "-го запису структури" << endl;
		cin >> h[i];
	}
	int min, max;
	cout << "Введіть мінімальний пробіг" << endl;
	cin >> min;
	cout << "Введіть максимальний пробіг" << endl;
	cin >> max;
	cout << "Отриманий результат:" << endl;
	for (int i = 0; i < n; ++i) {
		if (h[i].p > min && h[i].p < max) {
			cout << h[i];
		}
	}
}