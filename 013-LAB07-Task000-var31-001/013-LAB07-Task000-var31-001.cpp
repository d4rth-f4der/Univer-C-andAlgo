#include <iostream>
#include <windows.h>
#include <cmath>
#include <string>
using namespace std;

// Лабораторна робота 6 (структури), варіант 31. Завдання 1

struct Company
{
	char name[20];
	int annualRevenue;
	string location;
};
// Перевантаження оператора <<
ostream& operator <<(ostream& ocout, Company t)
{
	ocout.width(22);
	ocout << t.name;
	ocout.width(15);
	ocout << t.annualRevenue << " mln USD/year,     ";
	ocout << "Локація: ";
	ocout.width(30);
	ocout << t.location << endl;
	return ocout;
}
// Перевантаження оператора >>
istream& operator >>(istream& icin, Company& t)
{
	cout << "Назва: ";
	icin >> t.name;
	cout << "Годовий дохід (млн.USD): ";
	icin >> t.annualRevenue;
	icin.ignore();
	cout << "Місцезнаходження: ";
	getline(icin, t.location);
	return icin;
}

int main()
{
	const int n = 3;
	Company h[n];
	SetConsoleOutputCP(1251);
	for (int i = 0; i < n; i++)
	{
		cout << "Введіть інформацію про компанію номер " << (i + 1) << endl;
		cin >> h[i];
	}
	int min, max;
	cout << "Введіть мінімальний річний дохід (млн.USD): " << endl;
	cin >> min;
	cout << "Введіть максимальний максимальний річний дохід" << endl;
	cin >> max;
	cout << "Компанії заданому в діапазоні:" << endl;
	for (int i = 0; i < n; ++i) {
		if (h[i].annualRevenue > min && h[i].annualRevenue < max) {
			cout << h[i];
		}
	}
}