#include <iostream>
#include <windows.h>
#include <math.h>
using namespace std;

int main()
{
	SetConsoleOutputCP(1251);
	int a, asum=0;
	while (true) {
		cout << "¬вед≥ть доданок (додатне парне число): \n";
		cin >> a;
		if ((a < 0) && (a%2 == 0)) {
			cout << "„исло маЇ бути додатн≥м!\n";
			continue;
		}
		if ((a < 0) && (a%2 != 0)) {
			cout << "„исло маЇ бути додатн≥м ≥ непарним!\n";
			cout << "сума: " << asum << endl;
			break;
		}
		asum += a;
		cout << "сума: " << asum << endl;
	}
}