#include <iostream>

using namespace std;

int main()
{
    setlocale(LC_ALL, "ukr");
    double x;
    cout << "����i�� x (������): ";
    cin >> x;
    int y = x / 2; y = y * 2; y += 2;
    cout << "�������� ����� �����: " << y << endl;
}