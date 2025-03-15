#include <iostream>
#include <windows.h>
#include <math.h>
using namespace std;

int main()
{
    SetConsoleOutputCP(1251);
    float x;
    cout << "¬ведiть x: ";
    cin >> x;
    double res = pow(log10(abs(x)), 2);
    cout << "lg^2|x|= " << res;
}