#include <iostream>
#include <windows.h>
using namespace std;
int main()
{
	SetConsoleOutputCP(1251);
	float x, y=40;
	cout << "Введіть кількість годин роботи на тиждень:" << endl;
	cin >> x;
	if (x > y) {
		cout << "Понаднормовий час";
	}
	else if (x<0) {
		cout << "Невірне введення даних" << endl;
	}
	else {
		cout << "Звичайний робочий тиждень";
	}
}