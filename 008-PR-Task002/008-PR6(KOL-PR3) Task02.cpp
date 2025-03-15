#include <iostream>
#include <windows.h>
#include <math.h>
using namespace std;
int main()
{
	SetConsoleOutputCP(1251);
	int a=0;
	int b;
	cout << "¬вед≥ть число N (N>0):";
	cin >> b;
	cout << "ѕарн≥ числа в д≥апазон≥ в≥д 0 до N:" << endl;
	for (; a < b; a +=2) {
		cout << a << endl;
	}
}