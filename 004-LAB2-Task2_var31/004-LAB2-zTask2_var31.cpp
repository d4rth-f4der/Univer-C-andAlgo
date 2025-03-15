#include <iostream>
#include <windows.h>
using namespace std;
int main()
{
	SetConsoleOutputCP(1251);
	float x, a, b, y;
	cout << "¬вед≥ть x, a, b:\n";
	cin >> x >> a >> b;
	if (x < 1) {
		y = (log10(x) + 2 * pow(x, 2));
	}
	else if (x == 1) {
		(y = 2 * a * cos(x) + 3 * a);
	}
	else (y = (a * x + b) / (pow(x, 2) - 1));
	cout << "y= " << y;
}