#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    const float Pi = 3.14;
    float R, H; //�����, ������ �������
    setlocale(LC_ALL, "ukr");
    cout << "����i�� ���i�� ���i����, ��: ";
    cin >> R;
    cout << "����i�� ������ ���i����, ��: ";
    cin >> H;
    float Sside = 2 * Pi * R * H; //���� �������
    cout << "����� �i��� �������i ���i����, ��^2: " << Sside << endl;
    float Sfull = 2 * Pi * R * (R + H); //����� �����
    cout << "����� ����� ���i����, ��^2: " << Sfull << endl;
    float V = Pi * pow(R, 2) * H; //��'��
    cout << "��'�� ���i����, ��^3: " << V << endl;
}