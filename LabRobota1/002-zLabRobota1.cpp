#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    float a, c; //основи трапеції
    setlocale(LC_ALL, "ukr");
    cout << "Введiть довжину першої основи трапецiї, см: ";
    cin >> a;
    cout << "Введiть довжину другої основи трапецiї, см: ";
    cin >> c;
    float m = ((a + c) / 2);
    cout << "Середня лiнiя трапецiї, см: " << m << endl;
    float b, d; //бічні сторони трапеції
    cout << "Введiть довжину бiчної сторони, см: ";
    cin >> b;
    cout << "Введiть довжину другої бiчної сторони, см: ";
    cin >> d;
    cout << "Периметр трапецiї, см: " << a+b+c+d << endl;
    float h;
    cout << "Введiть висоту трапецiї, см: ";
    cin >> h;
    cout << "Площа трапецiї, см^2: " << m * h << endl;
}