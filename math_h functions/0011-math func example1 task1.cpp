#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    setlocale(LC_ALL, "ukr");
    const float Pi = 3.14;
    int n = 7;
    float P, S, r1, r2, a = 4.7, alpha, beta, gamma;
    alpha = 360.0 / n;
    beta = (180.0 / (n - 2)) / n;
    cout << "beta=" << alpha << endl;
    gamma = alpha;
    cout << "alpha=gamma=" << alpha << endl;
    P = n * a;
    cout << "P=" << P << endl;
    r1 = a / (2 * sin(180.0 / n * Pi / 180));
    cout << "r1=" << r1 << endl;
    r2 = a / (2 * tan(180.0 / n * Pi / 180));
    cout << "r2=" << r2 << endl;
    S = float(n) / 2 * a * r2;
    cout << "S=" << S << endl;
    S = float(n) / 2 * pow(r1, 2) * sin(alpha * Pi / 180);
    cout << "S=" << S << endl;
}