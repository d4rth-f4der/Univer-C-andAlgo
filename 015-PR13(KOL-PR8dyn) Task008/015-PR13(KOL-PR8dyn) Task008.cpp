#include <iostream>
#include <string>
using namespace std;


int main()
{
	int count;
	cout << "input array elements quantity: ";
	cin >> count;
	double* arr = new double[count];
	cout << "input array elements of " << count << " elements: ";
	for (int i = 0; i < count; ++i) {
		cin >> arr[i];
	}

	int countPositive = 0;
	for (int i = 0; i < count; ++i) {
		if (arr[i] >= 0) {
			++countPositive;
		}
	}
		double* positiveElems = new double[countPositive];
	int curInd = 0;
	for (int i = 0; i < count; ++i) {
		if (arr[i] >= 0) {
			positiveElems[curInd] = arr[i];
			++curInd;
		}
	}
	cout << "Positive elements:\n";
	for (int i = 0; i < countPositive; ++i) {
		cout << positiveElems[i] << " " << endl;
	}

	int countNeg = 0;
	for (int i = 0; i < count; ++i) {
		if (arr[i] < 0) {
			++countNeg;
		}
	}
	double* negElems = new double[countNeg];
	curInd = 0;
	for (int i = 0; i < count; ++i) {
		if (arr[i] < 0) {
			negElems[curInd] = arr[i];
			++curInd;
		}
	}
	cout << "Negative elements:\n";
	for (int i = 0; i < countNeg; ++i) {
		cout << negElems[i] << " " << endl;
	}
	delete[] arr;
	delete[] positiveElems;
	delete[] negElems;
}