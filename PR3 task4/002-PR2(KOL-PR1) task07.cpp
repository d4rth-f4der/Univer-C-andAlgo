#include <iostream>

using namespace std;

int main()
{
    setlocale(LC_ALL, "ukr");
    double x;
    cout << "Введiть x (з дробовою частиною, виду Х.Х): ";
    cin >> x;
    int y = x;
    cout << "дробова частина " << x - y << endl;
}