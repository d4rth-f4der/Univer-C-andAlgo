#include <iostream>
#include <string>
using namespace std;


int main()
{
	int n = 4;
	double* b = new double[n] { 4, 6.7, 8, -2.3 };
	for (int i = 0; i < n; ++i) {
		cout << b[i];
	}

	int countZ = 0;
	for (int i = 0; i < n; ++i) {
		int elZ = b[i];
		if (b[i]- elZ == 0) {
			++countZ;
		}
	}
	int* ZElems = new int[countZ];
	int curInd = 0;
	for (int i = 0; i < n; ++i) {
		int elZ = b[i];
		if (b[i] - elZ == 0) {
			ZElems[curInd] = b[i];
			++curInd;
		}
	}
	cout << "Z elements:\n";
	for (int i = 0; i < countZ; ++i) {
		cout << ZElems[i] << " " << endl;
	}
	delete[] b;
	delete[] ZElems;
}