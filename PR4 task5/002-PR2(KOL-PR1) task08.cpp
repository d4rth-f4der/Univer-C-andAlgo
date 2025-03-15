#include <iostream>

using namespace std;

int main()
{
    setlocale(LC_ALL, "ukr");
    double x;
    cout << "¬ведiть x (додатнЇ): ";
    cin >> x;
    int y = x / 2; y = y * 2; y += 2;
    cout << "наступне парне число: " << y << endl;
}