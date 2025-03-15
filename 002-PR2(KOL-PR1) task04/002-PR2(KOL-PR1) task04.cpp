#include <iostream>
#include <windows.h>
using namespace std;
int main()
{
	SetConsoleOutputCP(1251);
	int n, nend, nsum=0;
	cout << "Введіть N (ціле): ";
	cin >> n;
	nend = n + 10;
	for (; n < nend; ++n) {
		cout << "N=" << n << endl;
		nsum += n;
	}
	cout << "Сума перших 10 членів прогрессії: " << nsum;
}