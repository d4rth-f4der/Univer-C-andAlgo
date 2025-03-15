#include <iostream>
#include <windows.h>
#include <math.h>
using namespace std;
int main()
{
	SetConsoleOutputCP(1251);
	int n;
	cout << "¬вед≥ть N: ";
	cin >> n;
	long double sum=0;
	for (int i = 0; i <= n; ++i) {
		long double res = (pow(8, i) - pow(3, (i + 1))) / pow(10, i);
		cout << "i = " << i << ", res = " << res << endl;
		sum += res;
	}
	cout << "Cума р€ду (8^i-3^(i+1))/10^i в≥д i=0 до i=" << n << ": " << sum;
}