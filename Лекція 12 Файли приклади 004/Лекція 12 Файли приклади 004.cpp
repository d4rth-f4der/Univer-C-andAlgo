// Приклад 4 - вектори
#include <iostream>
#include <fstream>
#include <vector>
#include <windows.h>
using namespace std;

int findMin(const vector<int>& arr) {
	int min = arr[0];
	for (int a : arr)
		if (a < min) min = a;
	return min;
}

int countEven(const vector<int>& arr) {
	int n = 0;
	for (int a : arr)
		if (a % 2 == 0) n++;
	return n;
}

int sumPositiveLess100(const vector<int>& arr) {
	int sum = 0;
	for (int a : arr)
		if (a > 0 && a < 100) sum += a;
	return sum;
}

//Створення вектору з парних елементів
vector<int> vectorEven(const vector<int>& arr) {
	vector<int>n;
	for (int a : arr)
		if (a % 2 == 0) n.push_back(a);
	return n;
}

//Виведення вектора
void printVector(const vector<int>& arr) {
	for (int a : arr)
		cout << a << ' ';
}

//Зчитати дані з файлу в вектор
vector<int>vinput_fromfile(const string& file_name) {
	vector<int>arr;
	ifstream inFile(file_name);
	if (!inFile) cout << "Unable to open file: " << file_name << endl;
	int value;
	while (!inFile.eof()) {
		inFile >> value;
		arr.push_back(value);
	}
	inFile.close();
	return arr;
}

//Вивести вектор в файл
int outputFile(const vector<int>& arr, const string& filename) {
	ofstream outFile(filename);
	if (!outFile) {
		cerr << "Unable to open file: " << filename << endl;
		return 1;
	}
	for (int a : arr)
		outFile << a << ' ';
	outFile.close();
	cout << "\nSaved ";
	printVector(arr);
	cout << "to " << filename << endl;
	return 0;
}

int main() {
	SetConsoleOutputCP(1251);
	string filename = "C:\\ДУІКТ\\Прог\\Lect1_files\\int001.txt";
	ifstream inFile(filename);
	if (!inFile) {
		cerr << "Unabmle to open file: " << filename << endl;
		return 1;
	}
	vector<int>array;
	int value;
	while (!inFile.eof()) {
		inFile >> value;
		array.push_back(value);	
	}
	inFile.close();

	cout << "Vector elements:\n" << array.at(0) << " " << array.at(1) << " " << array.at(2) << " " << array.at(3) << " "
		<< array.at(4) << " " << array.at(5) << " " << array.at(6) << endl;

	cout << "\nMinimal element: " << findMin(array) << endl;
	cout << "Even elements quantity: " << countEven(array) << endl;
	cout << "Sum of positive elements, less than 100: " << sumPositiveLess100(array) << endl;

	cout << "\nInitial vector: ";
	printVector(array);
	vector<int>arrEven = vectorEven(array);
	cout << "\nNew vector elements are (even from initial): "; printVector(arrEven);

	// vector<int>array1 = vinput_fromfile(filename);
	vector<int>array1 = vinput_fromfile("C:\\ДУІКТ\\Прог\\Lect1_files\\int001.txt");
	cout << "\n\narray1 elements from file: "; printVector(array1);

	outputFile(array1, "C:\\ДУІКТ\\Прог\\Lect1_files\\saving_int001.txt");
	return 0;
}