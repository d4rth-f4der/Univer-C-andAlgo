#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    setlocale(LC_ALL, "ukr");
    double price, tax, paid;
    cout << "Введiть цiну товару, грн: ";
    cin >> price;
    cout << "Введiть податок, %: ";
    cin >> tax;
    cout << "Введiть суму оплати, грн: ";
    cin >> paid;
    cout << "Початкова цiна товару, грн: " << price << endl;
    cout << "Сума податку, грн: " << price * tax * 0.01 << endl;
    cout << "Решта пiсля оплати, грн: " << paid - (price + price * tax * 0.01) << endl;
}