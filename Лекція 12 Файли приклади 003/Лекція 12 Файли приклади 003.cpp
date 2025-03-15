// Приклад 4 - вказівники
#include <iostream>
#include <fstream>
#include <windows.h>
using namespace std;

int findMin(int* arr, int size) {
	int min = arr[0];
	for (int i = 1; i < size; ++i) {
		if (arr[i] < min) {
			min = arr[i];
		}
	}
	return min;
}

int countEven(int* arr, int size) {
	int n = 0;
	for (int i = 0; i < size; ++i) {
		if (arr[i] % 2 == 0) n++;
	}
	return n;
}

int sumPositiveLess100(int* arr, int size) {
	int sum = 0;
	for (int i = 0; i < size; ++i) {
		if (arr[i] > 0 && arr[i] < 100) {
			sum += arr[i];
		}
	}
	return sum;
}

int main() {
	SetConsoleOutputCP(1251);
	string filename = "C:\\ДУІКТ\\Прог\\Lect1_files\\int001.txt";
	ifstream inFile(filename);
	if (!inFile) {
		cerr << "Unable to open file: " << filename << endl; return 1;
	}
	int arrsize = 7;
	int* array = new int[arrsize];
	int i = 0;

	while (!inFile.eof()) {
		inFile >> array[i];
		i++;
	}
	inFile.close();

	cout << "new array elements:\n";
	cout << *array << " " << *(array + 1) << " " << *(array + 2) << " " << *(array + 3) << " "
		<< *(array + 4) << " " << *(array + 5) << " " << *(array + 6) << endl;

	cout << "Minimal element: " << findMin(array, arrsize) << endl;
	cout << "Quantity of even elements: " << countEven(array, arrsize) << endl;
	cout << "Sum of positive elements, smaller than 100: " << sumPositiveLess100(array, arrsize);
	return 0;
}