#include <iostream>
#include <windows.h>
#include <math.h>
using namespace std;
int main()
{
	SetConsoleOutputCP(1251);
	cout << "����� �� 35 �� 87, �� ��� ����� �� 7 ����� ������ 1, 2 ��� 5:\n";
	for (int a = 35; a < 87; a++) {
		if ((a % 7 == 1) || (a % 7 == 2) || (a % 7 == 5)) {
			cout << a << " % 7 = " << a%7 << endl;
		}
	}
}