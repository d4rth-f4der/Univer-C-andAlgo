#include <iostream>
#include <windows.h>
#include <math.h>
using namespace std;
int main()
{
	SetConsoleOutputCP(1251);
	int a;
	cout << "¬вед≥ть число (ц≥ле): ";
	cin >> a;
	if ((a % 2 == 0)&&((a<=10)||(a>=20))) {
		cout << "a^2=" << pow(a, 2);
	}
	else cout << a;
}