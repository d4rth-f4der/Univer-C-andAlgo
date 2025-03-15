#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    float a=2.15, b=2.45, x=4.2, y=0.01;
    cout << "a = 2.15, b = 2.45, x = 4.2, y = 0.01; ";
    double res = 1 / pow(b, 4) * (3 * pow(a, 3) * log(y / x) + pow(a, 2) * x / y - 3 * a * y / x);
    cout << "S = " << res;
}