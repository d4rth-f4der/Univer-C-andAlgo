#include <iostream>
#include <windows.h>
#include <math.h>
using namespace std;
int main()
{
	SetConsoleOutputCP(1251);
	int a;
	cout << "������ ����� (����): ";
	cin >> a;
	for (int i=101; ; ++i) {
		if (i % a == 0) {
			cout << i << " ������� ��� ������� �� " << a;
			break;
		}
	}
}