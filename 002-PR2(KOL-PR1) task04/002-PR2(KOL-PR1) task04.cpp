#include <iostream>
#include <windows.h>
using namespace std;
int main()
{
	SetConsoleOutputCP(1251);
	int n, nend, nsum=0;
	cout << "������ N (����): ";
	cin >> n;
	nend = n + 10;
	for (; n < nend; ++n) {
		cout << "N=" << n << endl;
		nsum += n;
	}
	cout << "���� ������ 10 ����� ��������: " << nsum;
}