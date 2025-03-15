#include <iostream>
#include <windows.h>
#include <cmath>
#include <string>
#include <iomanip>
using namespace std;
//ЛАБОРАТОРНА 7 ВАРІАНТ 31

enum Industry { Software, Hardware, AI };

struct Company {
	string name;
	double annualRevenue;
	string location;
	char projects[5];
	Industry industry;
};
ostream& operator <<(ostream& companycout, Company t)
{
	companycout.width(15);
	companycout << t.name;
	companycout.width(20);
	companycout << fixed << setprecision(0) << t.annualRevenue <<" USD/year ";
	companycout.width(30);
	companycout << t.location << endl;
	return companycout;
}
istream& operator >>(istream& icin, Company& t)
{
	// icin >> t.name;
	getline(icin, t.name);
	icin >> t.annualRevenue;
	icin.ignore();
	getline(icin, t.location);
	icin.getline(t.projects, 5);
	// icin >> t.location;
	return icin;
}
int main() {
	const int n = 3;
	Company h[n];
	SetConsoleOutputCP(1251);
	for (int i = 0; i < n; ++i) {
		cout << "Введіть елементи " << (i + 1) << "-го запису структури" << endl;
		cin >> h[i];
	}
	float min, max;
	cout << "Введіть мінімальний дохід" << endl;
	cin >> min;
	cout << "Введіть максимальний дохід" << endl;
	cin >> max;
	cout << "Результат:" << endl;
	for (int i = 0; i < n; ++i) {
		if ((h[i].annualRevenue >= min) && (h[i].annualRevenue <= max)) {
			cout << h[i];
		}
	}
	/*char prtype[5];
	cout << "Введіть тип проекту" << endl;
	cin >> prtype;
	cout << prtype;
	for (int i = 0; i < n; ++i) {
		cout << "\ncompare to " << h[i].projects;
		if (prtype == h[i].projects) {
			cout << "equal";
		}
		/*if (h[i].projects == prtype) {
			cout << h[i];
		}
	}*/
}