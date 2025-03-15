#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    float x;
    double y;
    setlocale(LC_ALL, "ukr");
    cout << "¬ведiть значенн€ x: ";
    cin >> x;
    y = (pow(atan(fabs(x)), 2 + x) + pow(sin(x + 1), 2));
    cout << "y=" << y << endl;
}