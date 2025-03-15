/*
ЛР - 7 Динамічні масиви, функції
- Варіант 31, завдання 1

Динамічний одновимірний масив:
- Знайти суму від'ємних елементів.
- Знайти модуль мінімального числа.
- Сформувати масив із елементів, рівних квадратам цілих чисел.
*/

#include <iostream>
#include <ctime>
using namespace std;

void inputArray(double* array, int elqty) {
	srand(time(NULL));
	for (int i = 0; i < elqty; ++i) {
		array[i] = -20.0 + rand() % 40 + 1.0/(rand() %4+1);
	}
}

void outputArray(double* array, int elqty) {
	cout << " Array elements are:\n";
	for (int i = 0; i < elqty; ++i) {
		cout << array[i] << " ";
	}
	cout << endl;
}
void outputArrayInt(int* array, int elqty) {
	cout << " Array elements are:\n";
	for (int i = 0; i < elqty; ++i) {
		cout << array[i] << " ";
	}
	cout << endl;
}
void Array_negsum(double* array, int elqty) {
	cout << " Negative elements are: ";
	double negsum=0;
	for (int i = 0; i < elqty; ++i) {
		if (array[i] < 0) {
			negsum += array[i];
			cout << array[i] << " ";
		}
	}
	if (negsum == 0)
		cout << "no negative elements";
	else cout << "\n Sum of negative elements = " << negsum << endl;
}

void Array_minelabs(double* array, int elqty) {
	double minel=array[0];
	for (int i = 0; i < elqty; ++i) {
		if (array[i] < minel)
			minel = array[i];
	}
	cout << " Minimal element: " << minel;
	cout << "\n Absolute value of minimal element: " << abs(minel) << endl;
}

int countwhole_el(double* array, int elqty) {
	cout << "Whole elements: ";
	int wholeqty = 0;
	for (int i = 0; i < elqty; ++i) {
		int compare = array[i];
		if (array[i] - compare == 0) {
			wholeqty += 1;
			cout << array[i] << " ";
		}
	}
	cout << "\nYour variable = whole elements quantity: " << wholeqty;
	cout << endl;
	return wholeqty;
}

int* createArray_wholesquares(double* array, int elqty, int wholeqty) {
	
	int* Arrwholesquares = new int[elqty];
	int wholecounter = 0;
	for (int i = 0; i < elqty; ++i) {
		int compare = array[i];
		if (array[i] - compare == 0) {
			int whole = array[i];
			Arrwholesquares[wholecounter] = (whole * whole);
			wholecounter++;
		}
	}
	return Arrwholesquares;
}

void main() {
	int arrsize;
	cout << "Input quantity of array elements:\n";
	cin >> arrsize;
	double* arr1 = new double[arrsize];
	inputArray(arr1, arrsize);
	outputArray(arr1, arrsize);
	Array_negsum(arr1, arrsize);
	Array_minelabs(arr1, arrsize);
	int wholecount = countwhole_el(arr1, arrsize);
	int* arr2 = createArray_wholesquares(arr1, arrsize, wholecount);
	cout << "New array of whole element's squares -";
	outputArrayInt(arr2, wholecount);

	delete[]arr2;
	delete[]arr1;
}