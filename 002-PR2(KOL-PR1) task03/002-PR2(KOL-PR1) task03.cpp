#include <iostream>
#include <windows.h>
using namespace std;
int main()
{
	SetConsoleOutputCP(1251);
	double chock, coff, milkgl;
	int chock_qty, coff_qty, milkgl_qty;
	cout << "������ ������� ���������: ";
	cin >> chock;
	cout << "������ ������� ���������: ";
	cin >> chock_qty;
	cout << "������ ������� ����: ";
	cin >> coff;
	cout << "������ ������� ������ ����: ";
	cin >> coff_qty;
	cout << "������ ������� ������� ������: ";
	cin >> milkgl;
	cout << "������ ������� ������� ������: ";
	cin >> milkgl_qty;
	cout << "���� �� ������: " << chock * chock_qty + coff * coff_qty + milkgl * milkgl_qty;
}