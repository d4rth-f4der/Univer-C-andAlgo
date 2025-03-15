#include <iostream>
#include <windows.h>
#include <math.h>
using namespace std;

int main()
{
    SetConsoleOutputCP(1251);
    float a, b;
    cout << "Введiть a: ";
    cin >> a;
    cout << "Введiть b: ";
    cin >> b;
    long double res = cbrt(pow(a, 12) + pow(b, 4));
    cout << "qbrt(a^12+b^4) = " << res;
}