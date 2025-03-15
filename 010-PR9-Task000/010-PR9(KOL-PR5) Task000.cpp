#include <iostream>
#include <windows.h>
#include <math.h>
using namespace std;
int main()
{
	// двовимірні масиви
	const int rows = 4;
	const int cols = 3;
	int arr[rows][cols]{
		{4, 2, 1},  //00 01 02
		{7, -3, 4}, //10 11 12
		{7, 2, -1}, //20 21 22
		{-9, -2, 3} //30 31 32
	};

	for (int i = 0; i < rows; ++i) {
		for (int j = 0; j < cols; ++j) {
			cout << arr[i][j] << "\t";
		}
		cout << endl;
	}
}