#include <iostream>
#include <windows.h>
using namespace std;
int main()
{
	SetConsoleOutputCP(1251);

	int n;
	cout << "������ ����� N" << endl;
	cin >> n;
	if (n % 3 == 0) {
		cout << "����� N ������ �����." << endl;
	}
	else {
		cout << "����� N �� ������ �����." << endl;
	}
}