#include <iostream>
#include <fstream>
#include <windows.h>
using namespace std;

fstream opentFile(const string& filename, ios::openmode mode)
{
	fstream myFile(filename, mode);
	if (!myFile) {
		cerr << "Unable to open file: " << filename << endl;
	}
	return myFile;
}

void writeEven(fstream& fin, fstream& fout) {
	int value;
	while (fin >> value) {
		if (value % 2 == 0) fout << value << ' ';
	}
}

int main() {
	SetConsoleOutputCP(1251);
	fstream inputfile = opentFile("C:\\ДУІКТ\\Прог\\Lect1_files\\int001.txt", ios::in);
	fstream outputfile = opentFile("C:\\ДУІКТ\\Прог\\Lect1_files\\int001_result.txt", ios::out);
	writeEven(inputfile, outputfile);
	cout << "Data transferred";
	_fcloseall();
	return 0;
}