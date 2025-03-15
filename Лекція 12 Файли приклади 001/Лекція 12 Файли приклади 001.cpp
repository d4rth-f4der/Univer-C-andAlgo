#include <iostream>
#include <fstream>
#include <windows.h>
using namespace std;

int main() {
	SetConsoleOutputCP(1251);
	ifstream inputFile("C:\\ДУІКТ\\Прог\\Lect1_files\\float001.txt");
	if (!inputFile) {
		cout << "Unable to open file C:\\ДУІКТ\\Прог\\Lect1_files\\float001.txt"; return 1;
	}
	ofstream outputFile("C:\\ДУІКТ\\Прог\\Lect1_files\\float001_result.txt");
	if (!outputFile) {
		cout << "Unable to open file C:\\ДУІКТ\\Прог\\Lect1_files\\float001_result.txt"; return 1;
	}
	float filechval;
	cout << "Input File Contents:\n";
	while (inputFile >> filechval) {
		cout << filechval << " ";
		if (filechval < 0) {
			outputFile << filechval << ' ';
		}
	}
	inputFile.close();
	outputFile.close();
	return 0;
}