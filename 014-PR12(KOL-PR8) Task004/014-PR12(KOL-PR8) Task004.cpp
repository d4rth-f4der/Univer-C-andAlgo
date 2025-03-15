#include <iostream>
#include <string>
using namespace std;

// завдання 4
int main()
{
	int num1, num2, * pNum;
	num1 = 10, num2 = 20;
	pNum = &num1;
	*pNum = 15;
	pNum = &num2;
	*pNum *= 2;
	cout << num1 << " " << num2;
}