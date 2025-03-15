#include <iostream>
#include <string>
using namespace std;


int main()
{
	int N = 5;
	int* X = new int[N] { 35, 10, -4, 70, 15 };

	int countPositive = 0;
	for (int i = 0; i < N; ++i) {
		if (X[i] > 0) {
			++countPositive;
		}
	}
	
	int countDiv5not7 = 0;
	for (int i = 0; i < N; ++i) {
		if ((X[i] % 5 == 0) && (X[i] % 7 != 0)) {
			++countDiv5not7;
		}
	}
	int* Div5not7 = new int[countDiv5not7];
	int curInd = 0;
	for (int i = 0; i < N; ++i) {
		if ((X[i] % 5 == 0) && (X[i] % 7 != 0)) {
			Div5not7[curInd] = X[i];
			++curInd;
		}
	}
	cout << "elements:\n";
	for (int i = 0; i < countDiv5not7; ++i) {
		cout << Div5not7[i] << " " << endl;
	}

	delete[] X;
	delete[] Div5not7;
}