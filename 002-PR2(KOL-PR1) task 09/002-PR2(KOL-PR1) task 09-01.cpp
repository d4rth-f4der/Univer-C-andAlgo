#include <iostream>
#include <windows.h>
#include <math.h>
using namespace std;
int main()
{
    SetConsoleOutputCP(1251);
    double a, b;
    cout << "������ �: ";
    cin >> a;
    cout << "������ b: ";
    cin >> b;
    double res = sqrt(pow(a, 2) + pow(b, 2));
    cout << "sqrt(a^2+b^2) = " << res;
}