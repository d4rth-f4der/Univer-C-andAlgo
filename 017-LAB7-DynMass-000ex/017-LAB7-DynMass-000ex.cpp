// ЛР-7 Динамічні масиви, функції
#include <iostream>
using namespace std;

void inputArray(int* array, int size) {			// ввод масиву
	for (int i = 0; i < size; ++i)
		array[i] = i + 1;
}

void outputArray(int* array, int size) {		// вивод масиву
	for (int i = 0; i < size; ++i)
		cout << array[i] << " ";
}

int main() {
	int rozmir;
	cout << "Enter array size: ";
	cin >> rozmir;								// задається розмір
	int* massiv = new int[rozmir];              // створення масиву
	inputArray(massiv, rozmir);					// виклик ф.вводу
	outputArray(massiv, rozmir);				// виклик ф.виводу

	delete[]massiv;
	return 0;
}