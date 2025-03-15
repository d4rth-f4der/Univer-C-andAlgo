#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    float x = -4.5, y = 0.000075, z = -84.5;
    cout << "x = -4.5, y = 0.000075, z = -84.5; ";
    double res = (cbrt(9 + pow((x - y), 2))) / (pow(x, 2) + pow(y, 2) + 2) - (exp(abs(x - y)) * pow(tan(z), 3));
    cout << "S = " << res;
}