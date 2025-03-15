#include <iostream>
#include <windows.h>
#include <math.h>
using namespace std;
int main()
{
	SetConsoleOutputCP(1251);
	float a, asum=0;
	for (; ; ) {
		cout << "Введіть доданок: ";
		cin >> a;
		asum += a;
		if (asum > 100) {
			break;
		}
	}
	cout << "Кінцева сума: " << asum;
}