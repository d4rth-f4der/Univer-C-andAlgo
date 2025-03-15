#include <iostream>
#include <fstream>
#include <Windows.h>
using namespace std;

int main() {
	// setlocale(LC_CTYPE, "ukr");
	SetConsoleOutputCP(1251);
	string filename = "C:\\ДУІКТ\\Прог\\Lect1_files\\float1.txt";
	ifstream inFile(filename);
	if (!inFile) {
		cout << "Can't open file: " << filename << endl; return 1;
	}
	float filech_value, sum = 0;
	int count = 0;
	cout << "Contents of file: " << filename << endl;
	while (!inFile.eof()) {
		inFile >> filech_value;
		cout << filech_value << "; ";
		sum += filech_value; count++;
	}
	inFile.close();
	cout << "\ntotal sum: " << sum;
	cout << "\nelements quantity: " << count;
	cout << "\naverage = " << sum / count;
	return 0;
}