/*
ЛР - 7 Динамічні масиви, функції
- Варіант 31, завдання 1

Динамічний одновимірний масив:
- Знайти суму від'ємних елементів.
- Знайти модуль мінімального числа.
- Сформувати масив із елементів, рівних квадратам цілих чисел.

- завдання 2

Додати ще один масив - динамічний двовимірний.
Перевантажити користувацькі функції, щоб вони виконуваи підзадачі для динамічного двовимірного масиву.
Масив передаєьтся в функцію ззовні.
*/

#include <iostream>
#include <ctime>
using namespace std;

void inputArray(double* array, int elqty) {
	srand(time(NULL));
	for (int i = 0; i < elqty; ++i) {
		array[i] = -20.0 + rand() % 40 + 1.0 / (rand() % 4 + 1);
	}
}

void inputArray(double** array, int rows, int cols) {         // перезавантаження вводу масиву на 2-вимірний
	srand(time(NULL));
	for (int i = 0; i < rows; ++i) {
		for (int j = 0; j < cols; ++j) {
			array[i][j] = -20.0 + rand() % 40 + 1.0 / (rand() % 4 + 1);
		}
	}
}

double** userinputMatrix(int rows, int cols) {                // функція ручного введення 2вимірного масиву
	double** newmatrix = new double* [rows];
	for (int i = 0; i < cols; ++i) {
		newmatrix[i] = new double[cols];
	}
	cout << "Input matrix elements: ";
	for (int i = 0; i < rows; ++i) {
		for (int j = 0; j < cols; ++j) {
			cin >> newmatrix[i][j];
		}
	}
	return newmatrix;
}

void outputArray(double* array, int elqty) {
	cout << " Array elements are:\n";
	for (int i = 0; i < elqty; ++i) {
		cout << array[i] << " ";
	}
	cout << endl;
}

void outputArray(int* array, int elqty) {					// перевантаження виводу масиву іншого типу даних
	cout << " Array elements are:\n";
	for (int i = 0; i < elqty; ++i) {
		cout << array[i] << " ";
	}
}

void outputArray(double** array, int rows, int cols) {      // перевантаження виводу масиву на 2-вимірний
	cout << " Matrix elements are:\n";
	for (int i = 0; i < rows; ++i) {
		for (int j = 0; j < cols; ++j) {
			cout.width(10);
			cout << array[i][j] << " ";
		}
		cout << endl;
	}
	cout << endl;
}

void Array_negsum(double* array, int elqty) {
	cout << " Negative elements are: ";
	double negsum = 0;
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

void Array_negsum(double** array, int rows, int cols) {            // перевантаження підрахунку суми негативних елем. на 2-вимірний масив
	cout << " Negative elements are: ";
	double negsum = 0;
	for (int i = 0; i < rows; ++i) {
		for (int j = 0; j < cols; ++j) {
			if (array[i][j] < 0) {
				negsum += array[i][j];
				cout << array[i][j] << " ";
			}
		}
	}
	if (negsum == 0)
		cout << "no negative elements";
	else cout << "\n Sum of negative elements = " << negsum << endl;
}

void Array_minelabs(double* array, int elqty) {
	double minel = array[0];
	for (int i = 0; i < elqty; ++i) {
		if (array[i] < minel)
			minel = array[i];
	}
	cout << " Minimal element: " << minel;
	cout << "\n Absolute value of minimal element: " << abs(minel) << endl;
}

void Array_minelabs(double** array, int rows, int cols) {       // перевантаження обчислення модуля мінімального елем. на 2-вимірний масив
	double minel = array[0][0];
	for (int i = 0; i < rows; ++i) {
		for (int j = 0; j < cols; ++j) {
			if (array[i][j] < minel)
				minel = array[i][j];
		}
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

int countwhole_el(double** array, int rows, int cols) {            // перевантаження підрахунку цілих елементів на 2-вимірний масив
	cout << "Whole elements: ";
	int wholeqty = 0;
	for (int i = 0; i < rows; ++i) {
		for (int j = 0; j < cols; ++j) {
			int compare = array[i][j];
			if (array[i][j] - compare == 0) {
				wholeqty += 1;
				cout << array[i][j] << " ";
			}
		}
	}
	cout << "\nYour variable = whole elements quantity: " << wholeqty;
	cout << endl;
	return wholeqty;
}

int* createArray_wholesquares(double* array, int elqty, int wholeqty) {

	int* Arrwholesquares = new int[wholeqty];
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

int* createArray_wholesquares(double** array, int rows, int cols, int wholeqty) {  // перевантаження створення масиву з квадратів 
	int* Arrwholesquares = new int[wholeqty];									   // цілочисельних елементів 2-вимірного масиву
	int wholecounter = 0;
	for (int i = 0; i < rows; ++i) {
		for (int j = 0; j < cols; ++j) {
			int compare = array[i][j];
			if (array[i][j] - compare == 0) {
				int whole = array[i][j];
				Arrwholesquares[wholecounter] = (whole * whole);
				wholecounter++;
			}
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
	outputArray(arr2, wholecount);

	int matrowqty;
	int matcolqty;
	cout << "\nInput quantity of matrix rows and columns:\n";
	cin >> matrowqty >> matcolqty;
	double** matrix = new double*[matrowqty];
	for (int i = 0; i < matrowqty; ++i) {
		matrix[i] = new double[matcolqty];
	}
	inputArray(matrix, matrowqty, matcolqty);
	outputArray(matrix, matrowqty, matcolqty);
	Array_negsum(matrix, matrowqty, matcolqty);
	Array_minelabs(matrix, matrowqty, matcolqty);
	wholecount = countwhole_el(matrix, matrowqty, matcolqty);
	int* arr3 = createArray_wholesquares(matrix, matrowqty, matcolqty, wholecount);
	cout << "New array of whole element's squares -";
	outputArray(arr3, wholecount);

	cout << "\nInput row and columns for manual elements input matrix: ";
	cin >> matrowqty >> matcolqty;
	double** matrix1 = userinputMatrix(matrowqty, matcolqty);
	outputArray(matrix1, matrowqty, matcolqty);

	for (int i = 0; i < matrowqty; i++)
		delete[]matrix1[i];
	delete[]matrix1;
	for (int i = 0; i < matrowqty; i++)
		delete[]matrix[i];
	delete[]matrix;
	delete[]arr3;
	delete[]arr2;
	delete[]arr1;
}