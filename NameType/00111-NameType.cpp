#include <iostream>

int main()
{
    int a = 5, b = 2;
    std::cout << a / b << std::endl; //��������� - 2, 5/2=2 (� �������)
    std::cout << float(a) / b << std::endl; //��������� 2.5 5/2=2.5 (����� � ����.��������)
}