#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    setlocale(LC_ALL, "ukr");
    int x, y;
    cout << "����i�� x (�i�� �����): ";
    cin >> x;
    cout << "����i�� y (�i�� �����): ";
    cin >> y;
    int z = x; x = y; y = z;
    cout << "�������� x �� y ��i���� ������� ����� ����� ��i���: x, y = " << x << ", " << y << endl;
    swap(x, y);
    cout << "�������� x �� y ��i���� ������� ����� �����i� swap: x, y = " << x << ", " << y;
}