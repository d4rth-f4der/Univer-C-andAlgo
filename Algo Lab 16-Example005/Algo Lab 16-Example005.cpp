// Separate chaining hash table implementation

#include <iostream>
#include <list>
#include <string>
const int TABLE_SIZE = 10;
// Структура для збереження даних про студента
struct Student {
	int id; // Номер залікової книжки
	std::string surname;
	double gpa; // Середній бал
};
// Масив списків — реалізація хеш-таблиці з ланцюговим методом
std::list<Student> hashTable[TABLE_SIZE];
// Хеш-функція — GPA * 10 і по модулю
int hashFunction(double gpa) {
	return static_cast<int>(gpa * 10) % TABLE_SIZE;
}
// Додавання студента
void insertStudent(Student s) {
	int index = hashFunction(s.gpa);
	hashTable[index].push_back(s);
}
// Вивід усієї таблиці
void printTable() {
	std::cout << "\nХеш-таблиця студентів:\n";
	for (int i = 0; i < TABLE_SIZE; ++i) {
		std::cout << "[" << i << "]: ";
		for (const auto& s : hashTable[i]) {
			std::cout << "(ID: " << s.id << ", " << s.surname << ", GPA: " <<
				s.gpa << ") ";
		}
		std::cout << "\n";
	}
}
// Пошук студентів за GPA
void findByGPA(double gpa) {
	int index = hashFunction(gpa);
	bool found = false;
	std::cout << "\nПошук студентів з GPA = " << gpa << ":\n";
	for (const auto& s : hashTable[index]) {
		if (s.gpa == gpa) {
			std::cout << " ID: " << s.id << ", Прізвище: " << s.surname << "\n";
			found = true;
		}
	}
	if (!found) {
		std::cout << " Не знайдено студентів із таким GPA.\n";
	}
}
// Видалення студента за ID та GPA
bool deleteStudent(int id, double gpa) {
	int index = hashFunction(gpa);
	for (auto it = hashTable[index].begin(); it != hashTable[index].end(); ++it) {
		if (it->id == id && it->gpa == gpa) {
			hashTable[index].erase(it);
			return true;
		}
	}
	return false;
}
int main() {
	// Додавання студентів
	insertStudent({ 101, "Іваненко", 4.5 });
	insertStudent({ 102, "Петренко", 4.2 });
	insertStudent({ 103, "Сидоренко", 4.5 });
	insertStudent({ 104, "Коваль", 3.9 });
	insertStudent({ 105, "Олійник", 4.2 });
	printTable();
	findByGPA(4.2);
	std::cout << "\nВидалення студента з ID = 102 та GPA = 4.2...\n";
	if (deleteStudent(102, 4.2)) {
		std::cout << "Успішно видалено!\n";
	}
	else {
		std::cout << "Студента не знайдено.\n";
	}
	printTable();
	findByGPA(4.2);
	return 0;
}
