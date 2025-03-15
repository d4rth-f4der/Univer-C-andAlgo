#include <iostream>
#include <windows.h>
using namespace std;
int main()
{
	SetConsoleOutputCP(1251);
	float x =20, y;
	cout << "Введіть відстань, км" << endl;
	cin >> y;
	if (y <= x) {
		cout << "Вартість поїздки - " << 20+y*5;
	}
	else {
		cout << "Вартість поїздки - " << 20 + 20*5 + (y-20) * 3;
	}
}