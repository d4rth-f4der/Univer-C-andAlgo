#include <iostream>
#include <windows.h>
#include <math.h>
using namespace std;
int main()
{
	SetConsoleOutputCP(1251);
	int a=1000, qty = 0;
	for (a=1000; a<10000 ; a++) {
		int alast = a- a/10*10;
		if (alast == 0) {
			continue;
		}
		if ((a % 23 == 0)&&(a % alast==0)) {
			cout << a << " % 23 = 0, остання цифра: " << alast << endl;
			++qty;
			cout << "Кількість: " << qty << endl;
		}
	}
	cout << "Чотиризначні числа, що діляться на 23 і останню свою цифру: " << qty << endl;
}