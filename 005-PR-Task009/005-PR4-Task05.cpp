#include <iostream>
#include <windows.h>
using namespace std;
int main()
{
	SetConsoleOutputCP(1251);

	float x; 
	int y;
	cout << "������ ������ ������� ������:" << endl;
	cin >> x;
	cout << "������ �� �������� (������ ����):" << endl;
	cin >> y;
	if ((y < 12) || (y > 60))
	{
		cout << "���� �� ������ (� �������): " << (x - x * 0.15) << endl;
	}
	else
	{
		cout << "���� �� ������ (��� ������): " << x << endl;
	}
}