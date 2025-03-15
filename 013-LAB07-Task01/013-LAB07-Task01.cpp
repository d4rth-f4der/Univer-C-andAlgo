#include <iostream>
#include <windows.h>
#include <cmath>
#include <string>
#include <iomanip>
using namespace std;
//����������� 7 ��в��� 31

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
		cout << "������ �������� " << (i + 1) << "-�� ������ ���������" << endl;
		cin >> h[i];
	}
	float min, max;
	cout << "������ ��������� �����" << endl;
	cin >> min;
	cout << "������ ������������ �����" << endl;
	cin >> max;
	cout << "���������:" << endl;
	for (int i = 0; i < n; ++i) {
		if ((h[i].annualRevenue >= min) && (h[i].annualRevenue <= max)) {
			cout << h[i];
		}
	}
	/*char prtype[5];
	cout << "������ ��� �������" << endl;
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