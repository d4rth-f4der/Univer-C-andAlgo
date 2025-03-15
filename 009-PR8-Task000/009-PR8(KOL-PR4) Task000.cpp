#include <iostream>
#include <windows.h>
#include <math.h>
using namespace std;
int main()
{
	SetConsoleOutputCP(1251);
	/* int m = 10;
	int t = 6;
	int w = 8;
	// ...
	int s = 5;
	double res = m + t + w + s; */
	int marks[5]; // статичний масив
	// або const int n =5; int marks[n];
	marks[0] = 3;
	marks[1] = 8;
	marks[2] = 4;
	marks[3] = 9;
	marks[4] = 1;
	for (int i = 0; i < 5; ++i) {
		cout << marks[i] << " ";
	}
	cout << "\n";
	for (int i = 5-1; i >= 0; --i) {
		cout << marks[i] << " ";
	}

	// cout << "\nsize: " << sizeof(marks) / sizeof(marks[0]); // кількість елементів
	cout << marks;
}