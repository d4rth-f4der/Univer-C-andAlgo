// пакетування (зовнішнє ланцюгове зберігання або роздільне зберігання)

#include <iostream>
#include <vector>
#include <list>
#include <string>

const int TABLE_SIZE = 10;

struct Student {
	int id; // Номер залікової книжки
	std::string surname;
	double gpa; // Середній бал
};

// Хеш-функція: ділення по модулю
int hashFunction(double gpa) {
	return static_cast<int>(gpa * 10) % TABLE_SIZE;
}

// Хеш-таблиця з пакетуванням
std::vector<std::list<Student>> hashTable(TABLE_SIZE);

// Додавання студента
void insertStudent(const Student& s) {
	int index = hashFunction(s.gpa);
	hashTable[index].push_back(s);
}

// Видалення студента за ID
bool removeStudent(int id) {
	for (int i = 0; i < TABLE_SIZE; ++i) {
		for (auto it = hashTable[i].begin(); it != hashTable[i].end(); ++it) {
			if (it->id == id) {
				hashTable[i].erase(it);
				std::cout << "Студента з ID " << id << " видалено.\n";
				return true;
			}
		}
	}
	std::cout << "Студента з ID " << id << " не знайдено.\n";
	return false;
}
// Вивід усієї таблиці
void printTable() {
	std::cout << "\nХеш-таблиця:\n";
	for (int i = 0; i < TABLE_SIZE; ++i) {
		std::cout << "[" << i << "]: ";
		for (const auto& student : hashTable[i]) {
			std::cout << "(ID: " << student.id << ", " << student.surname << ", GPA: " << student.gpa << ") ";
		}
		std::cout << "\n";
	}
}
// Пошук студентів за середнім балом
void findByGPA(double gpa) {
	int index = hashFunction(gpa);
	bool found = false;
	std::cout << "\nСтуденти з GPA = " << gpa << ":\n";
	for (const auto& student : hashTable[index]) {
		if (student.gpa == gpa) {
			std::cout << " ID: " << student.id << ", Прізвище: " <<
				student.surname << "\n";
			found = true;
		}
	}
	if (!found) {
		std::cout << " Не знайдено.\n";
	}
}
int main() {
	// Додавання студентів
	insertStudent({ 101, "Іваненко", 4.5 });
	insertStudent({ 102, "Петренко", 4.2 });
	insertStudent({ 103, "Сидоренко", 4.5 });
	insertStudent({ 104, "Коваль", 3.9 });
	insertStudent({ 105, "Олійник", 4.2 });
	printTable();
	// Пошук за GPA
	findByGPA(4.2);
	// Видалення студента
	removeStudent(103); // приклад: видалення студента з ID 103
	printTable();
	return 0;
}