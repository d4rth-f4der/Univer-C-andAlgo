#include <iostream>
#include <windows.h>
#include <cmath>
#include <string>
using namespace std;

// ����������� ������ 6 (���������), ������ 31. �������� 1

struct Company
{
	char name[20];
	int annualRevenue;
	string location;
};
// �������������� ��������� <<
ostream& operator <<(ostream& ocout, Company t)
{
	ocout.width(22);
	ocout << t.name;
	ocout.width(15);
	ocout << t.annualRevenue << " mln USD/year,     ";
	ocout << "�������: ";
	ocout.width(30);
	ocout << t.location << endl;
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
	cout << "������ �������� � �������:" << endl;
	for (int i = 0; i < n; ++i) {
		if (h[i].annualRevenue > min && h[i].annualRevenue < max) {
			cout << h[i];
		}
	}
}