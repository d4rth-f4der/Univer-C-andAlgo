#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    const float Pi = 3.14;
    float R, H; //радіус, висота циліндра
    setlocale(LC_ALL, "ukr");
    cout << "Вкажiть радiус цилiндра, см: ";
    cin >> R;
    cout << "Вкажiть висоту цилiндра, см: ";
    cin >> H;
    float Sside = 2 * Pi * R * H; //бічна сторона
    cout << "Площа бiчної поверхнi цилiндра, см^2: " << Sside << endl;
    float Sfull = 2 * Pi * R * (R + H); //повна площа
    cout << "Повна площа цилiндра, см^2: " << Sfull << endl;
    float V = Pi * pow(R, 2) * H; //Об'єм
    cout << "Об'єм Цилiндра, см^3: " << V << endl;
}