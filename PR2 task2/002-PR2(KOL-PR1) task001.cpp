#include <iostream>

using namespace std;

int main()
{
    setlocale(LC_ALL, "ukr");
    int a = 0;
    int b = 2;
    int c = 0;
    // Вивести кількість ненульових змінних
    bool isZeroA = a != 0;
    bool isZeroB = b != 0;
    bool isZeroC = c != 0;
    int total = isZeroA + isZeroB + isZeroC;
    cout << "Кiлькiсть ненульових змiнних: " << total << endl;

    //Варіант 2
    cout << "Кiлькiсть ненульових змiнних: " << isZeroA + isZeroB + isZeroC << endl;
}