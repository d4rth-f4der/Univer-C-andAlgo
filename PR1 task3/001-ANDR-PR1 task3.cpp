#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    const float Pi = 3.14;
    float R, H; //Радіус, висота прямого конуса
    setlocale(LC_ALL, "ukr");
    cout << "Вкажiть радiус прямого конуса, см: ";
    cin >> R;
    cout << "Вкажiть висоту прямого конуса, см: ";
    cin >> H;
    float Sside = Pi * R * sqrt(pow(R, 2) + pow(H, 2)); //бічна площа прямого конуса
    cout << "Площа бiчної поверхнi прямого конуса, см^2: " << Sside << endl;
    float Sfull = Pi * R * (R + sqrt(pow(R, 2) + pow(H, 2))); //повна площа
                                                             //прямого конуса
    cout << "Повна площа прямого конуса, см^2: " << Sfull << endl;
    float V = Pi /3 * (pow(R, 2)) * H; //Об'єм прямого конуса
    cout << "Об'єм прямого конуса, см^3: " << V << endl;
}