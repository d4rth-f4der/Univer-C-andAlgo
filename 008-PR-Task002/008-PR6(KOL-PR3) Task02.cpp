#include <iostream>
#include <windows.h>
#include <math.h>
using namespace std;
int main()
{
	SetConsoleOutputCP(1251);
	int a=0;
	int b;
	cout << "������ ����� N (N>0):";
	cin >> b;
	cout << "���� ����� � ������� �� 0 �� N:" << endl;
	for (; a < b; a +=2) {
		cout << a << endl;
	}
}