// спільний простір переповнення для хеш-таблиці з ланцюговим вирішенням колізій

#include <iostream>
#include <vector>#include <string>

const int TABLE_SIZE = 10;

struct Product {
	int code; // Код виробу
	std::string name; // Назва
	double price; // Ціна
	int quantity; // Кількість
	int next = -1; // Індекс наступного елемента у списку переповнення (або -1)
};

std::vector<Product> table(TABLE_SIZE); // Основна таблиця
std::vector<Product> overflow_area; // Спільний простір переповнення

// Проста хеш-функція
int hashFunction(int key) {
	return key % TABLE_SIZE;
}

// Додавання нового продукту
void insertProduct(int code, const std::string& name, double price, int quantity)
{
	Product newProduct = { code, name, price, quantity, -1 };
	int index = hashFunction(code);
	// Порожній слот
	if (table[index].code == 0) {
		table[index] = newProduct;
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
		overflow_area.push_back(newProduct);
		int newIndex = TABLE_SIZE + (overflow_area.size() - 1);
		// Встановлюємо next для останнього елемента
		if (currentIndex < TABLE_SIZE)
			table[currentIndex].next = newIndex;
		else
			overflow_area[currentIndex - TABLE_SIZE].next = newIndex;
	}
}// Виведення таблиці
void printTable() {
	std::cout << "Основна таблиця:\n";
	for (int i = 0; i < TABLE_SIZE; ++i) {
		if (table[i].code != 0) {
			std::cout << "[" << i << "] Код: " << table[i].code
				<< ", Назва: " << table[i].name
				<< ", Ціна: " << table[i].price
				<< ", Кількість: " << table[i].quantity
				<< ", Next: " << table[i].next << '\n';
		}
	}	std::cout << "\nСпільний простір переповнення:\n";
	for (size_t i = 0; i < overflow_area.size(); ++i) {
		const Product& p = overflow_area[i];
		std::cout << "[" << TABLE_SIZE + i << "] Код: " << p.code
			<< ", Назва: " << p.name
			<< ", Ціна: " << p.price
			<< ", Кількість: " << p.quantity << '\n';
	}
}int main() {
	insertProduct(15, "Миша", 250.0, 10); // 15 % 10 = 5
	insertProduct(25, "Клавіатура", 500.0, 5); // 25 % 10 = 5 (колізія)
	insertProduct(35, "Монітор", 3000.0, 2); // 35 % 10 = 5 (ще одна колізія)
	insertProduct(12, "Флешка", 100.0, 20); // 12 % 10 = 2
	insertProduct(22, "Жорсткий диск", 2000.0, 3); // 22 % 10 = 2 (ще одна колізія)
	printTable();
	return 0;
}