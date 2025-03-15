#include <iostream>
#include <windows.h>
#include <math.h>
using namespace std;
int main()
{
	SetConsoleOutputCP(1251);
	float a, b;
	cout << "¬вед≥ть а: ";
	cin >> a;
	cout << "¬вед≥ть b: ";
	cin >> b;
	if (a < b) {
		cout << "a+b=" << a + b;
	}
	else {
		cout << "a-b=" << a - b;
	}
}