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
    cout << "Введiть x (тризначне): ";
    cin >> x;
    cout << "x = " << x << endl;
    int thirdDigit = x % 10;
    cout << "третя цифра:" << thirdDigit << endl;
    int secondDigit = x / 10 % 10;
    cout << "друга цифра:" << secondDigit << endl;
    int firstDigit = x / 100;
    cout << "перша цифра:" << firstDigit << endl;
    int y = thirdDigit * 100 + secondDigit * 10 + firstDigit;
    cout << "зворотнє число: " << y << endl;
}