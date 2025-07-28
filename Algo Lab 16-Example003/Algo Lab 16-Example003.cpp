// хеш таблиця з повторним хешуванням (linear probing)

#include <iostream>
#include <string>

const int TABLE_SIZE = 10;

struct Student {
	std::string id;
	std::string surname;
	float avgGrade;
};

struct HashTableEntry {
	bool isOccupied = false;
	Student student;
};

HashTableEntry table[TABLE_SIZE];
// Ділення по модулю

int hashFunction(float key, int tableSize) {
	return static_cast<int>(key) % tableSize;
}

// Повторне хешування
int rehash(int oldIndex, int i, int tableSize) {
	return (oldIndex + i) % tableSize;
}

void insertStudent(const Student& s) {
	int hash = hashFunction(s.avgGrade, TABLE_SIZE);
	int index = hash;
	int i = 1;
	while (table[index].isOccupied) {
		index = rehash(hash, i, TABLE_SIZE);
		i++;
		if (i >= TABLE_SIZE) {
			std::cout << "Таблиця повна, вставка неможлива.\n";
			return;
		}
	}
	table[index].student = s;
	table[index].isOccupied = true;
}
void searchByAvgGrade(float key) {
	int hash = hashFunction(key, TABLE_SIZE);
	int index = hash;
	int i = 1;
	while (table[index].isOccupied) {
		if (table[index].student.avgGrade == key) {
			std::cout << "Знайдено: " << table[index].student.surname
				<< ", " << table[index].student.id << ", "
				<< table[index].student.avgGrade << std::endl;
			return;
		}
		index = rehash(hash, i, TABLE_SIZE);
		i++;
		if (i >= TABLE_SIZE) break;
	}
	std::cout << "Студента з таким середнім балом не знайдено.\n";
}

// Виведення таблиці
void printTable() {
	std::cout << "Таблиця:\n";
	for (int i = 0; i < TABLE_SIZE; ++i) {
		if (table[i].student.avgGrade != 0) {
			std::cout << "[" << i << "] Студент: " << table[i].student.surname
				<< ", Середній бал: " << table[i].student.avgGrade
				<< '\n';
		}
	}
}

int main() {
	insertStudent({ "AB123", "Іваненко", 87.0 });
	insertStudent({ "BC234", "Петренко", 92.0 });
	insertStudent({ "CD345", "Сидоренко", 87.0 }); // Колізія
	printTable();
	std::cout << "Пошук:\n";
	searchByAvgGrade(92.0);
	searchByAvgGrade(87.0);
	searchByAvgGrade(100.0); // Не існує
	return 0;
}