#include <iostream>
#include <windows.h>
#include <math.h>
using namespace std;

int main()
{
	SetConsoleOutputCP(1251);
	int x1, x2;
	cout << "������ ����� �1:\n";
	cin >> x1;
	cout << "������ ����� �2:\n";
	cin >> x2;
	cout << "(���� for) ����� �������� �� " << x1 << " �� " << x2 << " :\n";
	for (int diap=x1; diap < x2; ++diap) {
		cout << diap << endl;
	}

	cout << "(���� while) ����� �������� �� " << x1 << " �� " << x2 << " :\n";
	int diap = x1;
	while (diap < x2) {
		cout << diap << endl;
		++diap;
	}

	cout << "(���� do while) ����� �������� �� " << x1 << " �� " << x2 << " :\n";
	diap = x1;
	do {
		cout << diap << endl;
		++diap;
	} while (diap < x2);
}