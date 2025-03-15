// Приклад 5
#include <iostream>
#include <fstream>
#include <vector>
#include <iomanip>
#include <string>
using namespace std;



struct Student {
	string Name;
	string group;
	float average;
};

vector<Student> readStudents(const string& filename) {
	vector<Student> students;
	ifstream inputFile("C:\\ДУІКТ\\Прог\\Lect1_files\\Students.txt");

	if (!inputFile) {
		cerr << "Unable to open file: " << filename << endl;
		return students;
	}
	Student s;
	while (!inputFile.eof()) {
		getline(inputFile, s.Name, ':');
		getline(inputFile, s.group, ',');
		inputFile >> s.average;
	}
	return students;
}

void printStudents(const vector<Student>& students) {
	for (Student s : students) {
		cout << "Full name: " << s.Name << ", group: " << s.group
			<< ", marks average: " << fixed << setprecision(2) << s.average << endl;
	}
}

float findMaxAverage(const vector<Student>& students) {
	float max = students[0].average;
	for (Student s : students)
		if (s.average > max) max = s.average;
	return max;
}
void findMaxAvName(const vector<Student>& students) {
	float max = findMaxAverage(students);
	cout << "Full name of the student having the highest average mark:\n";
	for (Student s : students)
		if (s.average == max)
			cout << "Full name: " << s.Name << endl;
}

void findLetter_lname(const vector<Student>& students, char c) {
	cout << "Full names with lastnames starting from " << c << ":\n";
	for (Student s : students)
		if (s.Name[0] == c)
			cout << "Full name: " << s.Name << endl;
}

float froupAverage(const vector<Student>& students, const string& group) {
	float sum = 0;
	int count = 0;
	for (Student s : students) {
		if (s.group.compare(group)) {
			sum += s.average;
			count++;
		}
	}
	return count > 0 ? sum / count : 0;
}

int main() {
	setlocale(LC_CTYPE, "ukr");
	string filename = "C:\\ДУІКТ\\Прог\\Lect1_files\\Students.txt";
	vector<Student>students = readStudents(filename);
	if (students.empty()) {
		cerr << "The list is empty or unable to find file." << endl;
		return 1;
	}

	return 0;
}