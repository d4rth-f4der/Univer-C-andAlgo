// �������� 27
#include <iostream>
#include <windows.h>
using namespace std;
int main()
{
	SetConsoleOutputCP(1251);
	float x, x1, x2, a, b, c, D;
	cout << "��� ����������� ������� ax^2+bx+c=0 ������ �: ";
	cin >> a;
	cout << "������ b: ";
	cin >> b;
	cout << "������ c: ";
	cin >> c;
	cout << "������� - " << a <<"x^2+" << b <<"x+" << c << "=0" << endl;
	D = pow(b, 2) - 4 * a * c;
	cout << "D=" << D << endl;
	if (D > 0) {
		x1 = (-b + sqrt(D)) / (2 * a);
		x2 = (-b - sqrt(D)) / (2 * a);
		cout << "x1=" << x1 << endl;
		cout << "x2=" << x2;
	}
	else if (D == 0) {
		x = (-b) / (2 * a);
		cout << "x=" << x;
	}
	else {
		cout << "ĳ����� ������� ����";
	}
}