#include <iostream>
#include <windows.h>
#include <math.h>
using namespace std;

int main()
{
	SetConsoleOutputCP(1251);

	double a, cosum = 0;
	int poscounter = 0;

	for (int n = 1; ; ++n) {
			a = cos(n);
			cout << "cos " << n << " = " << a << endl;
			if (a > 0) {
				cosum += a;
				++poscounter;
				cout << "  (positive, adding to sum, #" << poscounter <<")" << endl;
			}
			else {
				cout << "  (negative)\n";
			}
			if (poscounter >=10) {
				break;
			}
	}
	cout << "Сума перших 10 додатних членів послідовності an=cos(n): " << cosum;
}
	