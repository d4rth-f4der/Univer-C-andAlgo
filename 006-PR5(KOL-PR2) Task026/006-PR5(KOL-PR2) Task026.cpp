#include <iostream>
#include <windows.h>
using namespace std;
int main()
{
	SetConsoleOutputCP(1251);
	double a;
	cout << "¬вед≥ть суму покупки, грн: ";
	cin >> a;
	if (a < 1000) {
		cout << "—ума до сплати, знижка 0%: " << a;
	}
	else if ((a >= 1000) && (a <= 5000)) {
		cout << "—ума до сплати, знижка 5%: " << a * 0.95;
	}
	else if ((a >= 5001) && (a <= 10000)) {
		cout << "—ума до сплати, знижка 10%: " << a * 0.9;
	}
	else {
		cout << "—ума до сплати, знижка 15%: " << a * 0.85;
	}
}