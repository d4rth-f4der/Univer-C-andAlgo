#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    const float Pi = 3.14;
    float R, H, r; //����.�����, ������, ��.����� ������ �������
    setlocale(LC_ALL, "ukr");
    cout << "����i�� ����i��i� ���i�� ������ ���i����, ��: ";
    cin >> R;
    cout << "����i�� �����i��i� ���i�� ������ ���i����, ��: ";
    cin >> r;
    cout << "����i�� ������ ������ ���i����, ��: ";
    cin >> H;
    float Sside = 2 * Pi * H * (R + r); //���� ������� ������ �������
    cout << "����� �i��� �������i ������ ���i����, ��^2: " << Sside << endl;
    float Sfull = 2 * Pi * (R + r) * (R + H - r); //����� ����� ������ �������
    cout << "����� ����� ������ ���i����, ��^2: " << Sfull << endl;
    float V = Pi * H * (pow(R, 2) - pow(r, 2)); //��'�� ������ �������
    cout << "��'�� ������ ���i����, ��^3: " << V << endl;
}