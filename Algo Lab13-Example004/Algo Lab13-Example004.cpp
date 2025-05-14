#include <iostream>
#include <queue>
#include <string>
#include <vector>

// Структура ПІБ
struct Info {
	std::string surname;
	std::string name;
	std::string patronymic;
};

// Структура студента
struct Student {
	int id;
	Info info;
	std::string faculty;
	int course;
	std::string group;
};

// Оператор порівняння для пріоритетної черги (більший курс — вищий пріоритет)
struct CompareStudents {
	bool operator()(const Student& a, const Student& b) {
		return a.course < b.course; // більший курс має більший пріоритет
	}
};

void printStudent(const Student& s) {
	std::cout << s.id << ": " << s.info.surname << " " << s.info.name << " " <<
		s.info.patronymic
		<< ", факультет: " << s.faculty << ", курс: " << s.course
		<< ", група: " << s.group << std::endl;
}

void main() {
	// Пріоритетна черга студентів (пріоритет — за курсом)
	std::priority_queue<Student, std::vector<Student>, CompareStudents> studentQueue;

	// Додавання студентів
	studentQueue.push({ 1, {"Іваненко", "Іван", "Іванович"}, "ФІТ", 2, "ПІ-21" });
	studentQueue.push({ 2, {"Петренко", "Петро", "Петрович"}, "ФМФ", 3, "МТ-31" });
	studentQueue.push({ 3, {"Сидоренко", "Олена", "Сергіївна"}, "ФІТ", 1, "ПІ-11" });
	studentQueue.push({ 4, {"Коваленко", "Марія", "Олегівна"}, "ФІТ", 4, "ПІ-41" });

	// Виведення студентів за спаданням курсу
	std::cout << "Студенти за пріоритетом (курс):\n";
	while (!studentQueue.empty()) {
		printStudent(studentQueue.top());
		studentQueue.pop();
	}
}