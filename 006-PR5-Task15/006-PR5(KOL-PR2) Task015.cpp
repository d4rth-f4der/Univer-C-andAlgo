#include <iostream>
#include <windows.h>
#include <math.h>
using namespace std;
int main()
{
	SetConsoleOutputCP(1251);
	float x; int a;
	cout << "Введіть відстань, см: ";
	cin >> x;
	cout << "Конвертувати в мм (1), метри (2), км (3)? :"<< endl;
	cin >> a;
	switch (a) {
	case 1: cout << x * 10 << " мм"; break;
	case 2: cout << x / 100 << " м"; break;
	case 3: cout << x / 100000 << " км"; break;
	default: cout << "Недопустиме значення";
	}
}