#include <iostream>
#include <windows.h>
using namespace std;
int main()
{
	SetConsoleOutputCP(1251);
	int n;
	cout << "¬вед≥ть м≥с€ць року (цифра, 1Ч12): " << endl;
	cin >> n;
	if ((n == 1) || (n == 2) || (n == 12)) {
		cout << "ѕора року Ч зима.";
	}
	else if ((n == 3) || (n == 4) || (n == 5)) {
		cout << "ѕора року Ч весна.";
	}
	else if ((n == 6) || (n == 7) || (n == 8)) {
		cout << "ѕора року Ч л≥то.";
	}
	else if ((n == 9) || (n == 10) || (n == 11)) {
		cout << "ѕора року Ч ос≥нь.";
	}
}