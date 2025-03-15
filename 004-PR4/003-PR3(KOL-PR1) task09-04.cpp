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
    float y;
    y = pow(sin(a), 3);
    cout << "y=sin^3(a+b) = " << y;
}