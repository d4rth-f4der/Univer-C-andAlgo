#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    setlocale(LC_ALL, "ukr");
    double price, tax, paid;
    cout << "����i�� �i�� ������, ���: ";
    cin >> price;
    cout << "����i�� �������, %: ";
    cin >> tax;
    cout << "����i�� ���� ������, ���: ";
    cin >> paid;
    cout << "��������� �i�� ������, ���: " << price << endl;
    cout << "���� �������, ���: " << price * tax * 0.01 << endl;
    cout << "����� �i��� ������, ���: " << paid - (price + price * tax * 0.01) << endl;
}