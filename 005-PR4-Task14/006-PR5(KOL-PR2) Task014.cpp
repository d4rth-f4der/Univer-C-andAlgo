#include <iostream>
#include <windows.h>
#include <math.h>
using namespace std;
int main()
{
	SetConsoleOutputCP(1251);
	int n;
	cout << "������ ���� ����� (����� 1-7):";
	cin >> n;
	switch (n) {
		case 1: cout << "������� ����"; break;
		case 2: cout << "������� ����"; break;
		case 3: cout << "������� ����"; break;
		case 4: cout << "������� ����"; break;
		case 5: cout << "������� ����"; break;
		case 6: cout << "��������"; break;
		case 7: cout << "��������"; break;
		default: cout << "���������� �����"; break;
		}
}