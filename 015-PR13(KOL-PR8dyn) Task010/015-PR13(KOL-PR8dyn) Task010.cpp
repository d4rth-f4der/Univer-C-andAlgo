#include <iostream>
using namespace std;

int main()
{
	int initCnt = 10;
	double* initArr = new double[initCnt] { 0, 1, 2, 3, 4, 5, 6, 7, 8, 9 };
	cout << "initital array:\n";
	for (int i = 0; i < initCnt; ++i) {
		cout << initArr[i] << " " << endl;
	}
	int evenCnt = (initCnt+1)/ 2;
	int oddCnt = (initCnt) / 2;
	
	double* evenArr = new double[evenCnt];
	int curInd = 0;
	for (int i = 0; i < initCnt; i=i+2) {
			evenArr[curInd] = initArr[i];
			++curInd;
	}

	double* oddArr = new double[evenCnt];
	curInd = 0;
	for (int i = 1; i < initCnt; i = i + 2) {
		oddArr[curInd] = initArr[i];
		++curInd;
	}

	cout << "even elements array:\n";
	for (int i = 0; i < evenCnt; ++i) {
		cout << evenArr[i] << " " << endl;
	}
	cout << "odd elements array:\n";
	for (int i = 0; i < oddCnt; ++i) {
		cout << oddArr[i] << " " << endl;
	}
	delete[] initArr;
	delete[] evenArr;
	delete[] oddArr;
}