#include <iostream>
#include <windows.h>
#include <math.h>
using namespace std;
int main()
{
	SetConsoleOutputCP(1251);
	int N, x=0;
	cout << "������ ����� N: ";
	cin >> N;
	cout << "����� �� 0 �� " << N << ", ����� 3, ��� ����� �� ����� 5:\n";
	for (; x<N ; x++ ) {
		if (x % 5 == 0) {
			continue;
		}
		if (x % 3 == 0) {
			cout << x << endl;
		}
	}
}