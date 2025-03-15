#include <iostream>
#include <string>
using namespace std;


int main()
{
	int val = 4;
	cout << val << " " << &val << endl;

	int* ptrVal = &val;
	cout << "Variable ptrVal = " << ptrVal << endl;
	cout << *ptrVal;

	val = 5;
	*ptrVal=100;

	cout << val << " " << *ptrVal << endl;

	int* ptr = ptrVal;
	*ptr = 500;
	cout << val << endl;

	cout << sizeof(val) << endl;
	cout << sizeof(ptrVal) << endl; //Залежить від розрядності платформи, для якої компілюємо
}