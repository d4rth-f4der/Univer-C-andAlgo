#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    float a, c; //������ ��������
    setlocale(LC_ALL, "ukr");
    cout << "����i�� ������� ����� ������ ������i�, ��: ";
    cin >> a;
    cout << "����i�� ������� ����� ������ ������i�, ��: ";
    cin >> c;
    float m = ((a + c) / 2);
    cout << "������� �i�i� ������i�, ��: " << m << endl;
    float b, d; //��� ������� ��������
    cout << "����i�� ������� �i��� �������, ��: ";
    cin >> b;
    cout << "����i�� ������� ����� �i��� �������, ��: ";
    cin >> d;
    cout << "�������� ������i�, ��: " << a+b+c+d << endl;
    float h;
    cout << "����i�� ������ ������i�, ��: ";
    cin >> h;
    cout << "����� ������i�, ��^2: " << m * h << endl;
}