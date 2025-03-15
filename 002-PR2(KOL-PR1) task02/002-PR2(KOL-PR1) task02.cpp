#include <iostream>
#include <windows.h>
using namespace std;
int main()
{
	SetConsoleOutputCP(1251);
	int a, b, c;
	cout << "¬вед≥ть першу зм≥нну: ";
	cin >> a;
	b = a * 3, c = a + b;
	cout << "ƒруга зм≥нна = а * 3 = " << b << "\n“рет€ зм≥нна = a + b = " << c;
}