#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    const float Pi = 3.14;
    float R, H, r; //Зовн.радіус, висота, вн.радіус полого циліндра
    setlocale(LC_ALL, "ukr");
    cout << "Вкажiть зовнiшнiй радiус полого цилiндра, см: ";
    cin >> R;
    cout << "Вкажiть внутрiшнiй радiус полого цилiндра, см: ";
    cin >> r;
    cout << "Вкажiть висоту полого цилiндра, см: ";
    cin >> H;
    float Sside = 2 * Pi * H * (R + r); //бічна сторона полого циліндра
    cout << "Площа бiчної поверхнi полого цилiндра, см^2: " << Sside << endl;
    float Sfull = 2 * Pi * (R + r) * (R + H - r); //повна площа полого циліндра
    cout << "Повна площа полого цилiндра, см^2: " << Sfull << endl;
    float V = Pi * H * (pow(R, 2) - pow(r, 2)); //Об'єм полого циліндра
    cout << "Об'єм полого Цилiндра, см^3: " << V << endl;
}