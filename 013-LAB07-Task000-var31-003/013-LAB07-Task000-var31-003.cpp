#include <iostream>
#include <windows.h>
#include <cmath>
#include <string>
using namespace std;

// Лабораторна робота 6 (структури), варіант 31. Завдання 1+2+3

enum Industry { Software=1, Hardware, AI };

struct Company
{
	char name[20];
	int annualRevenue;
	string location;
	string projects[5];
	Industry industry;
};
// Перевантаження оператора <<
ostream& operator <<(ostream& ocout, Company t)
{
	ocout << t.name << ", ";
	ocout << "Годовий дохід: " << t.annualRevenue << " mln USD/year, ";
	ocout << "Локація: " << t.location << ", ";
	ocout << "Проекти: ";
	for (int i = 0; i < 5; ++i) {
		if (t.projects[i].empty()) {
			break;
		}
		ocout << t.projects[i] << ", ";
	}
	ocout << "Галузь: ";
	if (t.industry == Software) {
		ocout << "Software";
	}
	else if (t.industry == Hardware) {
		ocout << "Hardware";
	}
	else if (t.industry == AI) {
		ocout << "AI";
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
	cout << "Галузь (Software, Hardware, AI): ";
	string industryStr;
	getline(icin, industryStr);
	if (industryStr == "Software") {
		t.industry = Software;
	}
	else if (industryStr == "Hardware") {
		t.industry = Hardware;
	}
	else if (industryStr == "AI") {
		t.industry = AI;
	}
	else {
		cout << "Помилка введення даних!\n";
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
	cout << "\nВведіть мінімальний річний дохід (млн.USD): " << endl;
	cin >> min;
	cout << "Введіть максимальний максимальний річний дохід" << endl;
	cin >> max;
	cout << "\nКомпанії в заданому діапазоні:" << endl;
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
	int ind;
	cout << "\nВведіть номер галузі ( Software(1), Hardware(2), AI(3) ): ";
	cin >> ind;
	cout << "Компанії, що працюють у вказаній галузі:\n";
	for (int i = 0; i < n; ++i) {
		if (h[i].industry == ind) {
			cout << h[i];
		}
	}
}