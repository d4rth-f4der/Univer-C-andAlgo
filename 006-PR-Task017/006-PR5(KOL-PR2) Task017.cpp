#include <iostream>
#include <windows.h>
#include <math.h>
using namespace std;
int main()
{
	SetConsoleOutputCP(1251);
	float a, b;
	cout << "������ �: ";
	cin >> a;
	cout << "������ b: ";
	cin >> b;
	if (a < b) {
		cout << "a+b=" << a + b;
	}
	else {
		cout << "a-b=" << a - b;
	}
}