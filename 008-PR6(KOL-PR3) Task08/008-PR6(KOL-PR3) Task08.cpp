#include <iostream>
#include <windows.h>
#include <math.h>
using namespace std;
int main()
{
	SetConsoleOutputCP(1251);
	int n;
	float a, asum=0;
	cout << "������ ������� �������� (������ ���� �����): ";
	cin >> n;
	for (int i = 1; i <= n; ++i) {
		cout << "������ ������� ����� " << i << ": ";
		cin >> a;
		asum += a;
	}
	cout << "����: " << asum << "\n������ �����������: " << asum << " / " << n << " = "
		<< asum / n;
}