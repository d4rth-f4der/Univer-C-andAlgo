#include <iostream>
#include <windows.h>
#include <math.h>
using namespace std;

int main()
{
    SetConsoleOutputCP(1251);
    float a, b;
    cout << "¬ведiть a: ";
    cin >> a;
    cout << "¬ведiть b: ";
    cin >> b;
    double res = pow(a + b, 1.0 / 7);
    cout << "(a+b)^(1/7) = " << res;
}