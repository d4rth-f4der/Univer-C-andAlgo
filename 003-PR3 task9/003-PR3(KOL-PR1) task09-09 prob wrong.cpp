#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    double x = 2.6, y = 0.5, z = 24; // Pi = acos(-1.0);
    const double Pi = atan(1.0) * 4;
    cout << "x = 2.6, y = 0.5, z = 24; ";
    double res = 2 * cos(x - (Pi / 6)) / (1.0/2 + pow(sin(y), 2)) + cbrt(log(exp(-x - 2)) + ((y - tan(z)) / (pow(x, 2) + 4)));
    cout << "a = " << res;
}