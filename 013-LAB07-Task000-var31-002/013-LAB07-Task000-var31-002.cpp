#include <iostream>
#include <windows.h>
#include <cmath>
#include <string>
using namespace std;

// Лабораторна робота 6 (структури), варіант 31. Завдання 1+2

struct Company
{
	char name[20];
	int annualRevenue;
	string location;
	string projects[5];
};
// Перевантаження оператора <<
ostream& operator <<(ostream& ocout, Company t)
{
	ocout << t.name << ", ";
	ocout << "Годовий дохід: " << t.annualRevenue << " mln USD/year, ";
	ocout << "Локація: " << t.location << endl;
	ocout << "Проекти: ";
	for (int i = 0; i < 5; ++i) {
		if (t.projects[i].empty()) {
			break;
		}
		ocout << t.projects[i] << ", ";
	}
	ocout << endl;
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
	cout << "Введіть назви проектів (або 'n' для завершення):" << endl;
	string project;
	//icin.ignore();
	for (int i = 0; i < 5; i++) {
		cout << "Проект " << i + 1 << ": ";
		getline(icin, project);
		if (project == "n") {
			break;
		}
		t.projects[i] = project;
	}
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
	cout << "\nКомпанії заданому в діапазоні:" << endl;
	for (int i = 0; i < n; ++i) {
		if (h[i].annualRevenue > min && h[i].annualRevenue < max) {
			cout << h[i];
		}
	}
	cin.ignore();
	string searchProject;
	cout << "\nВведіть назву проекту для пошуку: ";
	getline(cin, searchProject);
	for (int i = 0; i < n; ++i) {
		for (const string& project : h[i].projects) {
			if (project == searchProject) {
				cout << "\nКомпанія, що має цей проект " << searchProject << ":" << endl;
				cout << h[i];
				break;
			}
		}
	}
}