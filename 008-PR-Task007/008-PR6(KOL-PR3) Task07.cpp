#include <iostream>
#include <windows.h>
#include <math.h>
using namespace std;
int main()
{
	SetConsoleOutputCP(1251);
	int N, nmax=0, ncompare, nsum=0;
	cout << "Введіть будь-яке натуральне число, N <= 2147483647: ";
	cin >> N;
	cout << "цифри числа: " << endl;
	for (; N!=0; N =N/10) {
		ncompare = N - (N / 10 * 10); cout << ncompare << endl;
		nsum = nsum + ncompare;
		if (ncompare > nmax) {
			nmax = ncompare;
		}
	}
	cout << "Максимальна цифра числа: " << nmax << endl;
	cout << "Сума цифр: " << nsum;
}