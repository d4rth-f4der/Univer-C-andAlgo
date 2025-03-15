#include <iostream>
using namespace std;

int main()
{
	int N = 10;
	int* X = new int[N] { 0, 1, 2, 3, 4, 5, 6, 7, 8, 9 };
	cout << "inital array:\n";
	for (int i = 0; i < N; ++i) {
		cout << X[i] << " " << endl;
	}
	int k = (N + 1) / 2;

	int* Y = new int[k];
	int curInd = 0;
	for (int i = 0; i < N; i = i + 2) {
		Y[curInd] = X[i];
		++curInd;
	}

	cout << "even array:\n";
	for (int i = 0; i < k; ++i) {
		cout << Y[i] << " " << endl;
	}
	
	delete[] X;
	delete[] Y;
}