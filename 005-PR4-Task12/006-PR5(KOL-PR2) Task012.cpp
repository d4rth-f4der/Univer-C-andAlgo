// «авданн€ 12
#include <iostream>
#include <windows.h>
using namespace std;
int main()
{
	SetConsoleOutputCP(1251);
	int a, b, c;
	cout << "¬вед≥ть 1-ше число (ц≥ле): ";
	cin >> a;
	bool boolaeven = (a % 2 ==0);
	cout << "¬вед≥ть 2-ге число (ц≥ле): ";
	cin >> b;
	bool boolbeven = (b % 2 == 0);
	cout << "¬вед≥ть 3-тЇ число (ц≥ле): ";
	cin >> c;
	bool boolceven = (c % 2 == 0);
	if ((boolaeven + boolbeven + boolceven > 0) && (boolaeven + boolbeven + boolceven < 3)) {
		cout << "Yes!";
	}
}