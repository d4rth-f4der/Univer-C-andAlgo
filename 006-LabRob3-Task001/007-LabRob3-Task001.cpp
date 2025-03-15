// ������ 1 �������� 1
// a=2cos(x-�/6)b/(1/2+siin^2y), b=1+z^5/(3+z^2/5) ����
// x=1.45, y=-1.22, z=3.5
#include <iostream>
#include <windows.h>
#include <math.h>
using namespace std;
int main()
{
	SetConsoleOutputCP(1251);
	double x, y, z;
	cout << "������ �������� � (default = 1.45): ";
	cin >> x;
	cout << "������ �������� y (default = -1.22): ";
	cin >> y;
	cout << "������ �������� z (default = 3.5): ";
	cin >> z;
	double b = pow(z, 5)/(3+(pow(z,2)/5))+1;
	cout << b << endl;
	const double PI = atan(1.0) * 4;
	float a = b * 2 * cos(x - PI / 6) / (1.0 / 2 + pow(sin(y), 2));
	cout << a;
}