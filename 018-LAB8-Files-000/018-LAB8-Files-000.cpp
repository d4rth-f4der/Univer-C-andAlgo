#include <iostream>
#include <string>
#include <fstream>
#include <Windows.h>
#include <iomanip>
using namespace std;

struct Student {
	string name;
	string group;
	float av_mark;
};

void student_Fout(Student list, int entr_qty) {
	ofstream outFile("students.dat");
	for (int i = 0; i < entr_qty; ++i) {
		outFile << "ПІБ: " << list.name << ", група: " << list.group << ", середній бал: "
			<< fixed << setprecision(2) << list.av_mark << endl;
	}
	outFile.close();
}

void student_Fin(Student list, int entr_qty) {
	ifstream inputFile("students.dat");
	while (!inputFile.eof()) {
		getline(inputFile, list.name, ':');
		getline(inputFile, list.group, ',');
		inputFile >> list.av_mark;
		inputFile.ignore();
		cout << "ПІБ: " << list.name << ", група: " << list.group << ", середній бал: "
			<< fixed << setprecision(2) << list.av_mark << endl;
	}
	inputFile.close();
}

int main() {
	Student s;
	SetConsoleOutputCP(1251);
	


	return 0;
}
