#include <iostream>
#include <string>
using namespace std;


int main()
{
	int variable;
	int* ptr = &variable;
	*ptr = 100;
	int* ptr2 = ptr;
	*ptr2 = 200;
	cout << *ptr << " " << *ptr2;
}