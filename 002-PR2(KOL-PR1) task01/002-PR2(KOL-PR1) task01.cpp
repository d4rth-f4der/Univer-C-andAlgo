#include <iostream>
#include <windows.h>
using namespace std;
int main()
{
	SetConsoleOutputCP(1251);
	double length;
	cout << "������ ������� ����� � ��: ";
	cin >> length;
	cout << "������a ����� � �: " << length/1000;
}