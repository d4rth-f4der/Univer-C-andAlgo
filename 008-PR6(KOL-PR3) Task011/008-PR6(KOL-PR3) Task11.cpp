#include <iostream>
#include <windows.h>
#include <math.h>
using namespace std;
int main()
{
	SetConsoleOutputCP(1251);
	float a, asum=0;
	for (; ; ) {
		cout << "������ �������: ";
		cin >> a;
		asum += a;
		if (asum > 100) {
			break;
		}
	}
	cout << "ʳ����� ����: " << asum;
}