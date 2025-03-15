#include <iostream>
#include <windows.h>
#include <cmath>
#include <string>
using namespace std;

// ����������� ������ 6 (���������), ������ 31. �������� 1+2+3

enum Industry { Software=1, Hardware, AI };

struct Company
{
	char name[20];
	int annualRevenue;
	string location;
	string projects[5];
	Industry industry;
};
// �������������� ��������� <<
ostream& operator <<(ostream& ocout, Company t)
{
	ocout << t.name << ", ";
	ocout << "������� �����: " << t.annualRevenue << " mln USD/year, ";
	ocout << "�������: " << t.location << ", ";
	ocout << "�������: ";
	for (int i = 0; i < 5; ++i) {
		if (t.projects[i].empty()) {
			break;
		}
		ocout << t.projects[i] << ", ";
	}
	ocout << "������: ";
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
	cout << "������ (Software, Hardware, AI): ";
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
		cout << "������� �������� �����!\n";
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
	cout << "\n������ ��������� ����� ����� (���.USD): " << endl;
	cin >> min;
	cout << "������ ������������ ������������ ����� �����" << endl;
	cin >> max;
	cout << "\n������ � �������� �������:" << endl;
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
	int ind;
	cout << "\n������ ����� ����� ( Software(1), Hardware(2), AI(3) ): ";
	cin >> ind;
	cout << "������, �� �������� � ������� �����:\n";
	for (int i = 0; i < n; ++i) {
		if (h[i].industry == ind) {
			cout << h[i];
		}
	}
}