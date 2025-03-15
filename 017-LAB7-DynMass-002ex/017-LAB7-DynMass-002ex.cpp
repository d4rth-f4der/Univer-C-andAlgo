// ЛР-7 Динамічні масиви, функції
// Багатовимірні масиви
#include <iostream>
using namespace std;

void inputArray(int** array, int rows, int cols) {
	for (int i = 0; i < rows; ++i) {
		for (int j = 0; j < cols; ++j) {
			array[i][j] = i*cols + j;                          // ввод елементів двовимірного масиву
		}
	} 
}

void outputArray(int** array, int rows, int cols) {
	for (int i = 0; i < rows; ++i) {
		for (int j = 0; j < cols; ++j) {
			cout.width(3);
			cout << array[i][j] << " ";                   // вивод двовимірного масиву
		}
		cout << endl;
	}
}

int main() {
	int rowsqty, colsqty;
	cout << "enter qty of matrix rows, columns:\n";
	cin >> rowsqty >> colsqty;

	int** matrix = new int* [rowsqty];              // створення масиву вказівників рядків
	for (int i = 0; i < rowsqty; ++i) {
		matrix[i] = new int[colsqty];               // створення масивів рядків, довжиною з кількість колонок
	}

	inputArray(matrix, rowsqty, colsqty);
	outputArray(matrix, rowsqty, colsqty);

	for (int i = 0; i < rowsqty; i++)
		delete[]matrix[i];							// видалення масивів рядків
	delete[]matrix;									// видалення масиву вказівників

	return 0;
}