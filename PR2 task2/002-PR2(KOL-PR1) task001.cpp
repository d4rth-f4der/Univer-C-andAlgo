#include <iostream>

using namespace std;

int main()
{
    setlocale(LC_ALL, "ukr");
    int a = 0;
    int b = 2;
    int c = 0;
    // ������� ������� ���������� ������
    bool isZeroA = a != 0;
    bool isZeroB = b != 0;
    bool isZeroC = c != 0;
    int total = isZeroA + isZeroB + isZeroC;
    cout << "�i���i��� ���������� ��i����: " << total << endl;

    //������ 2
    cout << "�i���i��� ���������� ��i����: " << isZeroA + isZeroB + isZeroC << endl;
}