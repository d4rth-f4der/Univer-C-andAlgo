#include <iostream>
#include <queue>

void main() {
	// Створення черги цілих чисел
	std::queue<int> numbers;

	// Додавання елементів у чергу
	numbers.push(1);
	numbers.push(2);
	numbers.push(3);

	// Виведення елемента з переднього кінця черги
	std::cout << "Front of the queue: " << numbers.front() << std::endl;

	// Видалення елемента з переднього кінця черги
	numbers.pop();

	// Перевірка черги на порожнечу
	if (!numbers.empty()) {
		std::cout << "Queue is not empty." << std::endl;
	}
	else {
		std::cout << "Queue is empty." << std::endl;
	}
}