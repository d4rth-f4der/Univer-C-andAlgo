#include <iostream>
#include <string>
using namespace std;

// завдання 3
int main()
{
	int a, b, c;
	cout << "input a, b, c: ";
	cin >> a >> b >> c;
	int* ptra = &a, *ptrb = &b, *ptrc = &c;
	if (float(*ptrb+*ptrc)/2 > *ptra) {
		*ptra *= 2;
	}
	cout << "AVG b,c: " << float(*ptrb + *ptrc) / 2 << ", ares = " << *ptra;
}