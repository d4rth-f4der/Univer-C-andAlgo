#include <iostream>
#include <fstream>
#include <string>
using namespace std;

struct Student {
	string name;
	int age;
	float gpa;
};

void writeStudentToFile(ofstream& file, const Student& s) {
	file << s.name << " " << s.age << " " << s.gpa << "\n";
}

Student readStudentFromFile(ifstream& file) {
	Student s;
	file >> s.name >> s.age >> s.gpa;
	return s;
}

int main() {
	ofstream outFile("students.txt");
	Student s = { "Alice", 20, 3.8 };
	writeStudentToFile(outFile, s);
	outFile.close();
	ifstream inFile("students.txt");
	s = readStudentFromFile(inFile);
	inFile.close();
	cout << "Name:" << s.name << ", Age:" << s.age << ", GPA: " << s.gpa << endl;
	return 0;
}