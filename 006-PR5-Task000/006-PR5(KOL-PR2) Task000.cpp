#include <iostream>
#include <windows.h>
using namespace std;
int main()
{
	SetConsoleOutputCP(1251);
	int a = 15; 
	int b = 3;
	int x = -2; // || = or
	if (a > 0 || b > 0 || x > 0) {
		cout << "has positive";
	}

	// and = &&
	/*if (a % 3 == 0 && a % 5 == 0) {
		cout << "FizzBuzz";
	}
	else {
		cout << "a not diviesible by 3 and 5";
	}*/

	/* if (a % 3 == 0) {
		if (a % 5 == 0) {
			cout << "FizzBuzz";
		}
	}
	else {
		cout << "a not diviesible by 3 and 5";
	} */
}