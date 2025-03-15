#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    setlocale(LC_ALL, "ukr");
    int x, y;
    cout << "¬ведiть x (цiле число): ";
    cin >> x;
    cout << "¬ведiть y (цiле число): ";
    cin >> y;
    int z = x; x = y; y = z;
    cout << "«наченн€ x та y змiнено навпаки через третю змiнну: x, y = " << x << ", " << y << endl;
    swap(x, y);
    cout << "«наченн€ x та y змiнено навпаки через функцiю swap: x, y = " << x << ", " << y;
}