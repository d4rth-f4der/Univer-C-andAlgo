#include <iostream>
#include <string>
using namespace std;

// завдання 2
int main()
{
	int a, b;
	cout << "input a, b: ";
	cin >> a >> b;
	int* ptra = &a;
	int* ptrb = &b;
	if (*ptra > *ptrb) {
		*ptra *= 2;
	}
	else {
		*ptrb /= 2;
	}
	cout << *ptra << " " << *ptrb;
}