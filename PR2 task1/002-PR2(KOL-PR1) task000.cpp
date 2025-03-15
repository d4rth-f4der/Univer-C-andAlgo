#include <iostream>

using namespace std;

int main()
{
    setlocale(LC_ALL, "ukr");
    unsigned int x = 4;
    double y = 2.25;
    char ch = 'G' - 4;
    
    bool flag = 3; // все крім 0 - буде 1
    cout << flag << endl;
    cout << boolalpha << flag << endl; // boolalpha виводить true/false замість 1/0
    double res = 123 / 10; //все одно ділиться як int
    cout << res << endl;
    res = 123.0 / 10; //ділиться з дробовою частиною
    cout << res << endl;

    // > >= <= == != ! -знаки порівняння
    bool isEqual = 5 == 5;
    cout << boolalpha << "IsEqual: " << flag << endl;
    bool isNotEqual = 5 != 5;
    cout << boolalpha << "IsNotEqual: " << flag << endl;

    int a = 4;
    int b = 2;
    bool isAGreaterB = a > b;
    cout << boolalpha << "isAGreaterB: " << flag << endl;
}