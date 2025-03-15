// ��-7 ������� ������, �������
// C-style
#include <iostream>
using namespace std;

void inputArray(int* array, int size) {
	for (int i = 0; i < size; ++i)
		array[i] = i + 1;
}

void outputArray(int* array, int size) {
	for (int i = 0; i < size; ++i)
		cout << array[i] << " ";
}

int main() {
	int Mas_elqty;
	cout << "Enter array elements quantity: ";
	cin >> Mas_elqty;

	int* Mas = (int*)malloc(Mas_elqty * sizeof(int));      // C-style ��������� ������ (�������� ���'�� �� ��������)
	
	if (Mas == NULL) {
		cerr << "Memory allocation failed!" << endl;       // ��������, �� ��������� ���'��� �� �����
		return 1;
	}

	inputArray(Mas, Mas_elqty);
	outputArray(Mas, Mas_elqty);

	free(Mas);
	return 0;
}