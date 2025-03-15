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
	for (int i=101; ; ++i) {
		if (i % a == 0) {
			cout << i << " д≥литьс€ без залишку на " << a;
			break;
		}
	}
}