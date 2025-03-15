#include <iostream>
#include <windows.h>
using namespace std;
int main()
{
	SetConsoleOutputCP(1251);
    int x;
    cout << "Введiть x (тризначне): ";
    cin >> x;
    cout << "x = " << x << endl;
    int firstDigit = x / 100;
    cout << "перша цифра: " << firstDigit << endl;
    int secondDigit = x / 10 % 10;
    cout << "друга цифра: " << secondDigit << endl;
    int thirdDigit = x % 10;
    cout << "третя цифра: " << thirdDigit << endl;
    cout << "сума цифр: " << firstDigit+secondDigit+thirdDigit << endl;
}