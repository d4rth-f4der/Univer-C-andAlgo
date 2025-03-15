#include <iostream>
#include <windows.h>
#include <math.h>
using namespace std;
int main()
{
	SetConsoleOutputCP(1251);
	int arr[] = { 2,5,3,9 };
	cout << arr[0] * arr[1] + arr[2] * arr[3];
}