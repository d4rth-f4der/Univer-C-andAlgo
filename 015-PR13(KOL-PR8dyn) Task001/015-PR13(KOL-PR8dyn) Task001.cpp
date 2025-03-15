#include <iostream>
#include <string>
using namespace std;


int main()
{
	int count = 5;
	double* arr = new double[count] { -6, 3, -4, 9, 6 };

	int countPositive = 0;
	for (int i = 0; i < count; ++i) {
		if (arr[i] > 0) {
			++countPositive;
		}
	}

	double* positiveElems = new double[countPositive];
	int curInd = 0;
	for (int i = 0; i < count; ++i) {
		if (arr[i] > 0) {
			positiveElems[curInd] = arr[i];
			++curInd;
		}
	}
	for (int i = 0; i < countPositive; ++i) {
		cout << positiveElems[i] << " " << endl;
	}


	delete[] arr;
	delete[] positiveElems;
}