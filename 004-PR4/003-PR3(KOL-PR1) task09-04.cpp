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
    float y;
    y = pow(sin(a), 3);
    cout << "y=sin^3(a+b) = " << y;
}