#include <iostream>
#include <windows.h>
#include <math.h>
using namespace std;
int main()
{
	SetConsoleOutputCP(1251);
	int N, x=0;
	cout << "¬вед≥ть число N: ";
	cin >> N;
	cout << "„исла в≥д 0 до " << N << ", кратн≥ 3, при цьому не кратн≥ 5:\n";
	for (; x<N ; x++ ) {
		if (x % 5 == 0) {
			continue;
		}
		if (x % 3 == 0) {
			cout << x << endl;
		}
	}
}