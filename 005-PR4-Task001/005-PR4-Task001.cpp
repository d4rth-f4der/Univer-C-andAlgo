#include <iostream>
#include <windows.h>
using namespace std;
int main()
{
	SetConsoleOutputCP(1251);
	// > >= <= == != ! Ч повертають 1 або 0 (true/false)

	int x = 15;
	if (x == 5){
		cout << "x is equal to 5" << endl;
		cout << "x==5";
	}
	else{
		cout << "x is NOT equal to 5";
		cout << "!= 5";
		}
}