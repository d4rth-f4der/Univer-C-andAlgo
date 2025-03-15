#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    setlocale(LC_ALL, "ukr");
    float x, y;
    cout << "¬ведiть значенн€ x" << endl;
    cin >> x;
    y = 2 * x * exp(x - 1) + pow(tan(fabs(x)), x);
    cout << "y=" << y << endl;
}