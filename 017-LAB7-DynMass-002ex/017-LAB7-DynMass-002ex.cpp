// ��-7 ������� ������, �������
// ����������� ������
#include <iostream>
using namespace std;

void inputArray(int** array, int rows, int cols) {
	for (int i = 0; i < rows; ++i) {
		for (int j = 0; j < cols; ++j) {
			array[i][j] = i*cols + j;                          // ���� �������� ����������� ������
		}
	} 
}

void outputArray(int** array, int rows, int cols) {
	for (int i = 0; i < rows; ++i) {
		for (int j = 0; j < cols; ++j) {
			cout.width(3);
			cout << array[i][j] << " ";                   // ����� ����������� ������
		}
		cout << endl;
	}
}

int main() {
	int rowsqty, colsqty;
	cout << "enter qty of matrix rows, columns:\n";
	cin >> rowsqty >> colsqty;

	int** matrix = new int* [rowsqty];              // ��������� ������ ��������� �����
	for (int i = 0; i < rowsqty; ++i) {
		matrix[i] = new int[colsqty];               // ��������� ������ �����, �������� � ������� �������
	}

	inputArray(matrix, rowsqty, colsqty);
	outputArray(matrix, rowsqty, colsqty);

	for (int i = 0; i < rowsqty; i++)
		delete[]matrix[i];							// ��������� ������ �����
	delete[]matrix;									// ��������� ������ ���������

	return 0;
}