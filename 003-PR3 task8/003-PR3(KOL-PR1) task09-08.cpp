#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    float x = 2.25, y = 1.55;
    cout << "x = 2.25, y = 1.55; ";
    double res = (1 + pow(sin(x + y), 2)) / (2 + abs((x - 2 * x) / (1 + pow(x, 2) * pow(y, 2)))) + x;
    cout << "a = " << res;
}