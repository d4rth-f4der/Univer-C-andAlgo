#include <iostream>
#include <windows.h>
#include <math.h>
using namespace std;
int main()
{
	SetConsoleOutputCP(1251);
	int n;
	float a, asum=0;
	cout << "Введіть кількість елементів (додатнє ціле число): ";
	cin >> n;
	for (int i = 1; i <= n; ++i) {
		cout << "Введіть елемент номер " << i << ": ";
		cin >> a;
		asum += a;
	}
	cout << "Сума: " << asum << "\nСереднє арифметичне: " << asum << " / " << n << " = "
		<< asum / n;
}