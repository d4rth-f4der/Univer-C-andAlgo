#include <iostream>
#include <windows.h>
using namespace std;
int main()
{
	SetConsoleOutputCP(1251);
	float x, y, B;
	cout << "������ ���������� ����� (x,y):\n";
	cin >> x >> y;
	cout << "������ ������� ������� �����:\n";
	cin >> B;
	float yxmax = ((1.0/sqrt(2.0)*B)); // cos45 x B - ������� "����������" ������,
	                                  // �� ����������� ������� �����
	cout << "�� ������ ����� � ����� ������ ������? �������: " << boolalpha << 
		((abs(x) + abs(y)) <= yxmax);
}