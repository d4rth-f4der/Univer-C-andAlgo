// ��-7 ������� ������, �������
// ����������� ������ - �-style
#include <iostream>
using namespace std;

void inputArray(int** array, int rows, int cols) {
	for (int i = 0; i < rows; ++i) {
		for (int j = 0; j < cols; ++j) {
			array[i][j] = i * cols + j;
		}
	}
}

void outputArray(int** array, int rows, int cols) {
	for (int i = 0; i < rows; ++i) {
		for (int j = 0; j < cols; ++j) {
			cout.width(3);
			cout << array[i][j] << " ";
		}
		cout << endl;
	}
}

int main() {
	int riad, stovp;
	cout << "input matrix quantity of rows, columns:\n";
	cin >> riad >> stovp;

	int** matrica = (int**)malloc(riad * sizeof(int*));       // �������� ���'�� ��� ������ ��������� �����
	
	for (int i = 0; i < riad; i++)
		matrica[i] = (int*)malloc(stovp * sizeof(int));       // �������� ���'�� ������ ����� �������� � ������� �������

	inputArray(matrica, riad, stovp);
	outputArray(matrica, riad, stovp);

	for (int i = 0; i < riad; ++i)
		free(matrica[i]);
	free(matrica);

	return 0;
}