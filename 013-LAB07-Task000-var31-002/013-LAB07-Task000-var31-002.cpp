#include <iostream>
#include <windows.h>
#include <cmath>
#include <string>
using namespace std;

// ����������� ������ 6 (���������), ������ 31. �������� 1+2

struct Company
{
	char name[20];
	int annualRevenue;
	string location;
	string projects[5];
};
// �������������� ��������� <<
ostream& operator <<(ostream& ocout, Company t)
{
	ocout << t.name << ", ";
	ocout << "������� �����: " << t.annualRevenue << " mln USD/year, ";
	ocout << "�������: " << t.location << endl;
	ocout << "�������: ";
	for (int i = 0; i < 5; ++i) {
		if (t.projects[i].empty()) {
			break;
		}
		ocout << t.projects[i] << ", ";
	}
	ocout << endl;
	return ocout;
}
// �������������� ��������� >>
istream& operator >>(istream& icin, Company& t)
{
	cout << "�����: ";
	icin >> t.name;
	cout << "������� ����� (���.USD): ";
	icin >> t.annualRevenue;
	icin.ignore();
	cout << "̳��������������: ";
	getline(icin, t.location);
	cout << "������ ����� ������� (��� 'n' ��� ����������):" << endl;
	string project;
	//icin.ignore();
	for (int i = 0; i < 5; i++) {
		cout << "������ " << i + 1 << ": ";
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
		cout << "������ ���������� ��� ������� ����� " << (i + 1) << endl;
		cin >> h[i];
	}
	int min, max;
	cout << "������ ��������� ����� ����� (���.USD): " << endl;
	cin >> min;
	cout << "������ ������������ ������������ ����� �����" << endl;
	cin >> max;
	cout << "\n������ �������� � �������:" << endl;
	for (int i = 0; i < n; ++i) {
		if (h[i].annualRevenue > min && h[i].annualRevenue < max) {
			cout << h[i];
		}
	}
	cin.ignore();
	string searchProject;
	cout << "\n������ ����� ������� ��� ������: ";
	getline(cin, searchProject);
	for (int i = 0; i < n; ++i) {
		for (const string& project : h[i].projects) {
			if (project == searchProject) {
				cout << "\n�������, �� �� ��� ������ " << searchProject << ":" << endl;
				cout << h[i];
				break;
			}
		}
	}
}