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
// �������������� ��������� <<
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
// �������������� ��������� >>
istream& operator >>(istream& icin, avto& t)
{
	cout << "������: ";
	icin >> t.model;
	cout << "г�: ";
	icin >> t.god;
	cout << "�����: ";
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
		cout << "������ �������� " << (i + 1) << "-�� ������ ���������" << endl;
		cin >> h[i];
	}
	int min, max;
	cout << "������ ��������� �����" << endl;
	cin >> min;
	cout << "������ ������������ �����" << endl;
	cin >> max;
	cout << "��������� ���������:" << endl;
	for (int i = 0; i < n; ++i) {
		if (h[i].p > min && h[i].p < max) {
			cout << h[i];
		}
	}
}