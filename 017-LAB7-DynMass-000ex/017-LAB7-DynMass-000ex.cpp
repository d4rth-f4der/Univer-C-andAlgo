// ��-7 ������� ������, �������
#include <iostream>
using namespace std;

void inputArray(int* array, int size) {			// ���� ������
	for (int i = 0; i < size; ++i)
		array[i] = i + 1;
}

void outputArray(int* array, int size) {		// ����� ������
	for (int i = 0; i < size; ++i)
		cout << array[i] << " ";
}

int main() {
	int rozmir;
	cout << "Enter array size: ";
	cin >> rozmir;								// �������� �����
	int* massiv = new int[rozmir];              // ��������� ������
	inputArray(massiv, rozmir);					// ������ �.�����
	outputArray(massiv, rozmir);				// ������ �.������

	delete[]massiv;
	return 0;
}