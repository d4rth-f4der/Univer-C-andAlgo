#include <iostream>
#include <unordered_map>
#include <vector>
#include <string>
#include <algorithm>

struct Student {
	int id;
	std::string surname;
};

std::unordered_map<double, std::vector<Student>> studentTable;

void insertStudent(int id, const std::string& surname, double gpa) {
	studentTable[gpa].push_back({ id, surname });
}

bool removeStudent(int id) {
	for (auto it = studentTable.begin(); it != studentTable.end(); ++it) {
		std::vector<Student>& students = it->second;
		auto remove_it = std::remove_if(students.begin(), students.end(),
			[id](const Student& s) { return s.id == id; });
		if (remove_it != students.end()) {
			students.erase(remove_it, students.end());
			if (students.empty()) {
				studentTable.erase(it);
			}
			return true;
		}
	}
	return false;
}

void findStudentsByGPA(double gpa) {
	auto it = studentTable.find(gpa);
	if (it != studentTable.end()) {
		std::cout << "Студенти із середнім балом " << gpa << ":\n";
		for (const auto& student : it->second) {
			std::cout << " Залікова №" << student.id << ", Прізвище: " <<
				student.surname << '\n';
		}
	}
	else {
		std::cout << "Немає студентів із середнім балом " << gpa << '\n';
	}
}
void printAllStudents() {
	if (studentTable.empty()) {
		std::cout << "Таблиця порожня.\n";
		return;
	}
	std::cout << "\nУсі студенти в таблиці:\n";
	for (auto it = studentTable.begin(); it != studentTable.end(); ++it) {
		double gpa = it->first;
		const std::vector<Student>& students = it->second;
		std::cout << "Середній бал: " << gpa << '\n';
		for (const auto& student : students) {
			std::cout << " Залікова №" << student.id << ", Прізвище: " <<
				student.surname << '\n';
		}
	}
}

int main() {
	insertStudent(101, "Іваненко", 4.5);
	insertStudent(102, "Петренко", 4.2);
	insertStudent(103, "Сидоренко", 4.5);
	insertStudent(104, "Коваль", 3.9);
	findStudentsByGPA(4.5);
	printAllStudents();
	if (removeStudent(103)) {
		std::cout << "\nСтудента №103 видалено.\n";
	}
	else {
		std::cout << "\nСтудента №103 не знайдено.\n";
	}
	printAllStudents();
	return 0;
}
