#include <iostream>
#include <windows.h>
using namespace std;
int main()
{
	SetConsoleOutputCP(1251);

	int n;
	cout << "Введіть оцінку, від 1 до 10" << endl;
	cin >> n;
	if (n <= 4) {
		cout << "Погано" << endl;
	}
	else if (n <= 7) {
		cout << "Середньо" << endl;
	}
	else if (n <= 10) {
		cout << "Відмінно";
	}
	else {
		cout << "Нема такої оцінки";
	}
}