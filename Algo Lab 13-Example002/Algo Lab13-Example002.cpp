#include <iostream>
#include <deque>

// Функція для створення початкової черги
std::deque<int> createDeque() {
	return { 1, 2, 3, 4, 5 };
}

// Додавання елементів на початок і кінець
void addElements(std::deque<int>& dq, int x) {
	dq.push_front(x);
	dq.push_back(x);
}

// Вставка елемента x перед елементом в позиції pos
void insertElement(std::deque<int>& dq, int pos, int x) {
	auto it = dq.begin() + pos;
	dq.insert(it, x);
}

// Видалення першого та передостаннього елементів
void deleteElements(std::deque<int>& dq) {
	if (dq.size() > 1)
		dq.erase(dq.begin());
	if (dq.size() > 1)
		dq.erase(std::prev(dq.end()));
}

// Виведення елементів черги
void printDeque(const std::deque<int>& dq) {
	std::cout << "Deque elements: ";
	for (const auto& num : dq) {
		std::cout << num << " ";
	}
	std::cout << std::endl;
}

// Основна функція
void main() {
	std::deque<int> numbers = createDeque();
	// Додавання 6 на початок і кінець
	addElements(numbers, 6);
	// Вставка 10 перед третім елементом
	insertElement(numbers, 2, 10);
	// Видалення першого та передостаннього елементів
	deleteElements(numbers);
	// Виведення елементів черги
	printDeque(numbers);
}