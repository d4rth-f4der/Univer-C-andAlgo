#include <iostream>
#include <windows.h>
#include <math.h>
using namespace std;

int main()
{
    SetConsoleOutputCP(1251);
    float a, b;
    cout << "����i�� a: ";
    cin >> a;
    cout << "����i�� b: ";
    cin >> b;
    double res = pow(a + b, 1.0 / 7);
    cout << "(a+b)^(1/7) = " << res;
}