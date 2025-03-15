#include <iostream>
#include <windows.h>
using namespace std;
int main()
{
	SetConsoleOutputCP(1251);
	double length;
	cout << "Ââåä³òü äîâæèíó áóä³âë³ â ìì: ";
	cin >> length;
	cout << "Äîâæèía áóä³âë³ â ì: " << length/1000;
}