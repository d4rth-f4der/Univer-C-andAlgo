#include <iostream>

using namespace std;

int main()
{
    setlocale(LC_ALL, "ukr");
    double x;
    cout << "����i�� x (� �������� ��������, ���� �.�): ";
    cin >> x;
    int y = x;
    cout << "������� ������� " << x - y << endl;
}