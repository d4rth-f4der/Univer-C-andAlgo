#include <iostream>
#include <windows.h>
#include <math.h>
using namespace std;

int main()
{
	SetConsoleOutputCP(1251);
	int a, asum=0;
	while (true) {
		cout << "������ ������� (������� ����� �����): \n";
		cin >> a;
		if ((a < 0) && (a%2 == 0)) {
			cout << "����� �� ���� �������!\n";
			continue;
		}
		if ((a < 0) && (a%2 != 0)) {
			cout << "����� �� ���� ������� � ��������!\n";
			cout << "����: " << asum << endl;
			break;
		}
		asum += a;
		cout << "����: " << asum << endl;
	}
}