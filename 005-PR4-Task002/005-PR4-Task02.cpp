#include <iostream>
#include <windows.h>
using namespace std;
int main()
{
	SetConsoleOutputCP(1251);
	float x, y;
	cout << "������ ����� 1" << endl;
	cin >> x;
	cout << "������ ����� 2" << endl;
	cin >> y;
	if (x == -y) {
		cout << "true";
	}
}