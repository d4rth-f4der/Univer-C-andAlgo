#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    const float Pi = 3.14;
    float R, H; //�����, ������ ������� ������
    setlocale(LC_ALL, "ukr");
    cout << "����i�� ���i�� ������� ������, ��: ";
    cin >> R;
    cout << "����i�� ������ ������� ������, ��: ";
    cin >> H;
    float Sside = Pi * R * sqrt(pow(R, 2) + pow(H, 2)); //���� ����� ������� ������
    cout << "����� �i��� �������i ������� ������, ��^2: " << Sside << endl;
    float Sfull = Pi * R * (R + sqrt(pow(R, 2) + pow(H, 2))); //����� �����
                                                             //������� ������
    cout << "����� ����� ������� ������, ��^2: " << Sfull << endl;
    float V = Pi /3 * (pow(R, 2)) * H; //��'�� ������� ������
    cout << "��'�� ������� ������, ��^3: " << V << endl;
}