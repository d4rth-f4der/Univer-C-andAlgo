#include <iostream>

int main()
{
    int a = 5, b = 2;
    std::cout << a / b << std::endl; //результат - 2, 5/2=2 (з остачею)
    std::cout << float(a) / b << std::endl; //результат 2.5 5/2=2.5 (число з дроб.частиною)
}