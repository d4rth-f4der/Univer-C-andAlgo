#include <iostream>
#include <windows.h>
using namespace std;
int main()
{
	SetConsoleOutputCP(1251);
    int x;
    cout << "����i�� x (���������): ";
    cin >> x;
    cout << "x = " << x << endl;
    int firstDigit = x / 100;
    cout << "����� �����: " << firstDigit << endl;
    int secondDigit = x / 10 % 10;
    cout << "����� �����: " << secondDigit << endl;
    int thirdDigit = x % 10;
    cout << "����� �����: " << thirdDigit << endl;
    cout << "���� ����: " << firstDigit+secondDigit+thirdDigit << endl;
}