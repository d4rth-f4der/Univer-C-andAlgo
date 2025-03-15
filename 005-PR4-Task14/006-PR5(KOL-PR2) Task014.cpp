#include <iostream>
#include <windows.h>
#include <math.h>
using namespace std;
int main()
{
	SetConsoleOutputCP(1251);
	int n;
	cout << "Введіть день тижня (цифра 1-7):";
	cin >> n;
	switch (n) {
		case 1: cout << "Робочий день"; break;
		case 2: cout << "Робочий день"; break;
		case 3: cout << "Робочий день"; break;
		case 4: cout << "Робочий день"; break;
		case 5: cout << "Робочий день"; break;
		case 6: cout << "Вихідний"; break;
		case 7: cout << "Вихідний"; break;
		default: cout << "Непідходяще число"; break;
		}
}