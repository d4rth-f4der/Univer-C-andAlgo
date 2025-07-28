// Вхідні данні - назва книжки, автор, рік видання
// Тип хеш таблиці - спільний простір переповнення
// ключ пошуку - назва книжки

#include <iostream>
#include <vector>
#include <string>

const int TABLE_SIZE = 10;

struct Book {
	std::string title; // Назва книжки
	std::string author; // Автор
	int year; // Рік видання
	int next = -1; // Індекс наступного елемента у списку переповнення (або -1)
};

std::vector<Book> table(TABLE_SIZE); // Основна таблиця
std::vector<Book> overflow_area; // Спільний простір переповнення

int hashFunction(const std::string& key) {
	int hash = 0;
	for (char c : key) {
		hash += c;
	}
	return hash % TABLE_SIZE;
}

// Додавання нової книжки
void insertBook(const std::string& title, const std::string& author, int year) {
	
	Book newBook = { title, author, year, -1 };
	int index = hashFunction(title);

	// Порожній слот
	if (table[index].title.empty()) {
		table[index] = newBook;
	}
	else {
		// Пошук останнього елемента в ланцюжку
		int currentIndex = index;
		int nextIndex = table[currentIndex].next;
		while (nextIndex != -1) {
			if (nextIndex < TABLE_SIZE) {
				currentIndex = nextIndex;
				nextIndex = table[currentIndex].next;
			}
			else {
				int overflowIndex = nextIndex - TABLE_SIZE;
				currentIndex = nextIndex;
				nextIndex = overflow_area[overflowIndex].next;
			}
		}
		// Додаємо до зони переповнення
		overflow_area.push_back(newBook);
		int newIndex = TABLE_SIZE + (overflow_area.size() - 1);
		// Встановлюємо next для останнього елемента
		if (currentIndex < TABLE_SIZE)
			table[currentIndex].next = newIndex;
		else
			overflow_area[currentIndex - TABLE_SIZE].next = newIndex;
	}
}

void findBook(const std::string& title) {
	std::cout << "\nПошук книжки з назвою '" << title << "'...\n";
	int index = hashFunction(title);
	int currentIndex = index;
	while (currentIndex != -1) {
		if (currentIndex < TABLE_SIZE) {
			if (table[currentIndex].title == title) {
				std::cout << "Знайдено: " << table[currentIndex].title << ", "
					<< table[currentIndex].author << ", "
					<< table[currentIndex].year << " (індекс: " << currentIndex << ")"
					<< " [Основна таблиця]\n";
				return;
			}
			currentIndex = table[currentIndex].next;
		}
		else {
			int overflowIndex = currentIndex - TABLE_SIZE;
			if (overflow_area[overflowIndex].title == title) {
				std::cout << "Знайдено: " << overflow_area[overflowIndex].title << ", "
					<< overflow_area[overflowIndex].author << ", "
					<< overflow_area[overflowIndex].year << " (індекс: " << currentIndex << ")"
					<< " [Зона переповнення]\n";
				return;
			}
			currentIndex = overflow_area[overflowIndex].next;
		}
	}
	std::cout << "Книжку з назвою '" << title << "' не знайдено.\n";
}

void printTable() {
	std::cout << "Основна таблиця:\n";
	for (int i = 0; i < TABLE_SIZE; ++i) {
		if (!table[i].title.empty()) {
			std::cout << "Індекс " << i << ": " << table[i].title << ", "
				<< table[i].author << ", " << table[i].year;
			if (table[i].next != -1) {
				std::cout << " -> наступний: " << table[i].next;
			}
			std::cout << "\n";
		}
	}

	std::cout << "\nСпільний простір переповнення:\n";
	for (size_t i = 0; i < overflow_area.size(); ++i) {
		std::cout << "Індекс " << (TABLE_SIZE + i) << ": "
			<< overflow_area[i].title << ", "
			<< overflow_area[i].author << ", "
			<< overflow_area[i].year;
		if (overflow_area[i].next != -1) {
			std::cout << " -> наступний: " << overflow_area[i].next;
		}
		std::cout << "\n";
	}
}

int main() {
	insertBook("Lord of the Rings", "J.R.R. Tolkien", 1954);
	insertBook("1984", "George Orwell", 1949);
	insertBook("To Kill a Mockingbird", "Harper Lee", 1960);
	insertBook("The Great Gatsby", "F. Scott Fitzgerald", 1925);
	insertBook("The Catcher in the Rye", "J.D. Salinger", 1951);
	insertBook("Crime and Punishment", "Fyodor Dostoevsky", 1866);
	insertBook("Pride and Prejudice", "Jane Austen", 1813);
	insertBook("War and Peace", "Leo Tolstoy", 1869);
	insertBook("The Odyssey", "Homer", -800);
	insertBook("The Iliad", "Homer", -750);
	insertBook("The Divine Comedy", "Dante Alighieri", 1320);
	insertBook("Little Prince", "Antoine de Saint-Exupéry", 1943);

	printTable();

	findBook("1984");
	findBook("Pride and Prejudice");

	return 0;
}