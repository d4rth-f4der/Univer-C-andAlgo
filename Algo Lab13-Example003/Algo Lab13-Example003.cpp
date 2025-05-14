#include <iostream>
#include <deque>
#include <string>

struct Info {
	std::string surname;
	std::string name;
	std::string patronymic;
};

struct Student {
	int id;
	Info info;
	std::string faculty;
	int course;
	std::string group;
};

// Додавання студента в певну позицію
void addStudentAt(std::deque<Student>& students, const Student& newStudent, int	position) {
	if (position < 0 || position > students.size()) {
		std::cout << "Неправильна позиція. Додаємо в кінець." << std::endl;
		students.push_back(newStudent);
	}
	else {
		students.insert(students.begin() + position, newStudent);
	}
}

// Виведення студентів певного факультету
void printStudentsByFaculty(const std::deque<Student>& students, const std::string&	facultyName) {
	std::cout << "\nСтуденти факультету \"" << facultyName << "\":" << std::endl;
	bool found = false;
	for (const auto& s : students) {
		if (s.faculty == facultyName) {
			std::cout << s.id << ": " << s.info.surname << " " << s.info.name << " "
				<< s.info.patronymic
				<< ", Курс " << s.course << ", Група " << s.group << std::endl;
			found = true;
		}
	}
	if (!found) {
		std::cout << "Немає студентів цього факультету.\n";
	}
}

// Пошук першого студента за прізвищем
void findStudentByLastName(const std::deque<Student>& students, const std::string&
	lastName) {
	for (const auto& s : students) {
		if (s.info.surname == lastName) {
			std::cout << "\nЗнайдено студента з прізвищем \"" << lastName << "\":" <<
				std::endl;
			std::cout << "ID: " << s.id << "\n"
				<< "ПІБ: " << s.info.surname << " " << s.info.name << " " <<
				s.info.patronymic << "\n"
				<< "Факультет: " << s.faculty << ", Курс: " << s.course
				<< ", Група: " << s.group << std::endl;
			return;
		}
	}
	std::cout << "\nСтудента з таким прізвищем не знайдено." << std::endl;
}
// Головна функція
void main() {
	std::deque<Student> students;

	// Додавання кількох студентів
	addStudentAt(students, { 1, {"Іваненко", "Іван", "Іванович"}, "ФІТ", 2, "ПІ-21" },	0);
	addStudentAt(students, { 2, {"Петренко", "Петро", "Петрович"}, "ФМФ", 3, "МТ-31"}, 1);
	addStudentAt(students, { 3, {"Сидоренко", "Олена", "Сергіївна"}, "ФІТ", 1, "ПІ-11"}, 1); // в середину

	// Вивести студентів факультету ФІТ
	printStudentsByFaculty(students, "ФІТ");
	// Пошук студента з прізвищем "Сидоренко"
	findStudentByLastName(students, "Сидоренко");
}