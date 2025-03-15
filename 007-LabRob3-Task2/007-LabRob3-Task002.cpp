/* Вивести на екран значення функції y(x) для визначеного самостійно діапазону значень x.
Виконати завдання, використовуючи цикл for.
y=(2-sin^3(|x^3|))/cos^2(|x|) */
#include <iostream>
#include "math.h"
using namespace std;
int main()
{
	for (double x = -1; x <= 1; x = x + 0.1)
		cout << "x= " << x << " y=" <<
		((2 - pow(sin(fabs(pow(x, 3))), 3))) / pow(cos(fabs(x)), 2) << endl;
}