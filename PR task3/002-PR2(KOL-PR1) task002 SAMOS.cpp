#include <iostream>

using namespace std;

int main()
{
    setlocale(LC_ALL, "ukr");
    //int x = 10;
    //bool isOdd = x % 2 != 0;
    //cout << boolalpha << "10 isOdd: " << isOdd << endl;
    //bool isEven = x % 2 == 0;
    //cout << boolalpha << "10 isEven: " << isEven << endl;
    int x; // 1 + 2 + 3
    cout << "����i�� x (���������): ";
    cin >> x;
    cout << "x = " << x << endl;
    int thirdDigit = x % 10;
    cout << "����� �����:" << thirdDigit << endl;
    int secondDigit = x / 10 % 10;
    cout << "����� �����:" << secondDigit << endl;
    int firstDigit = x / 100;
    cout << "����� �����:" << firstDigit << endl;
    int y = thirdDigit * 100 + secondDigit * 10 + firstDigit;
    cout << "������� �����: " << y << endl;
}