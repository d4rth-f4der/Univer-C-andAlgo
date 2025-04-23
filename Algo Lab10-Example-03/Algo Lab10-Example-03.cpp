#include <iostream>
#include <string>
#include <list>
#include <algorithm>

using namespace std;

struct Info {
	string surname;
	string name;
	string patronymic;
};

struct Student {
	int id;
	Info info;
	string faculty;
	int course;
	string group;
};

void printStudent(const Student& s) {
	cout << "ID: " << s.id << endl;
	cout << "Full name: " << s.info.surname << " " << s.info.name << " " << s.info.patronymic << endl;
	cout << "Faculty: " << s.faculty << endl;
	cout << "Course: " << s.course << endl;
	cout << "Group: " << s.group << endl;
	cout << "----------------------------------" << endl;
}

void insertStudent(list<Student>& students, const Student& newStudent, int position) {
	auto it = students.begin();
	advance(it, min(position, (int)students.size())); // Ensure position is within bounds
	students.insert(it, newStudent);
}

void printByFaculty(const list<Student>& students, const string& faculty) {
	cout << "\n--- Students from faculty " << faculty << " ---" << endl;
	for (const auto& student : students) {
		if (student.faculty == faculty) {
			printStudent(student);
		}
	}
}

void findBySurname(const list<Student>& students, const string& surname) {
	for (const auto& student : students) {
		if (student.info.surname == surname) {
			cout << "\n--- Found student with surname " << surname << " ---" << endl;
			printStudent(student);
			return;
		}
	}
	cout << "\nStudent with surname " << surname << " not found." << endl;
}

void main() {
	list<Student> students;
	Student s1 = { 1, {"Ivanov", "Ivan", "Ivanovich"}, "Engineering", 3, "E-21" };
	Student s2 = { 2, {"Petrov", "Petro", "Petrovich"}, "Engineering", 2, "E-11" };
	Student s3 = { 3, {"Sidorov", "Sedor", "Sedorovich"}, "Mathematics", 4, "M-31" };

	insertStudent(students, s1, 0); // Insert at the beginning
	insertStudent(students, s2, 1);
	insertStudent(students, s3, 10); // 10 is out of bounds, will insert at the end

	printByFaculty(students, "Engineering");

	findBySurname(students, "Sidorov");
}