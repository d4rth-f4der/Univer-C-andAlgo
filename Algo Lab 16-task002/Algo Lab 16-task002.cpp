// додаткове завдання 2
#include <iostream>
#include <unordered_map>
#include <string>
#include <functional>

struct Book {
    std::string title;  // Назва книжки
    std::string author; // Автор
    int year;           // Рік видання
};

// Оператор порівняння
bool operator==(const Book& lhs, const Book& rhs) {
    return lhs.title == rhs.title
        && lhs.author == rhs.author
        && lhs.year == rhs.year;
}

// Специализація std::hash
namespace std {
    template <>
    struct hash<Book> {
        std::size_t operator()(const Book& b) const {
            std::size_t h1 = std::hash<std::string>()(b.title);
            std::size_t h2 = std::hash<std::string>()(b.author);
            std::size_t h3 = std::hash<int>()(b.year);
            return h1 ^ (h2 << 1) ^ (h3 << 2);
        }
    };
}

std::unordered_map<Book, int> bookTable;

void insertBook(const std::string& title, const std::string& author, int year) {
    Book newBook = { title, author, year };
    bookTable[newBook] = year;
}

void findBook(const std::string& title, const std::string& author, int year) {
	std::cout << "\nПошук книжки з назвою '" << title << "'...\n";
    Book key = { title, author, year };
    auto it = bookTable.find(key);
    if (it != bookTable.end()) {
        std::cout << "Знайдено: " << it->first.title << ", "
            << it->first.author << ", "
            << it->first.year << "\n";
    }
    else {
        std::cout << "Книжку не знайдено.\n";
    }
}

void printTable() {
    std::cout << "Вся таблиця (unordered_map):\n";
    for (const auto& pair : bookTable) {
        const Book& book = pair.first;
        std::cout << book.title << ", "
            << book.author << ", "
            << book.year << "\n";
    }
}

int main() {
    insertBook("Lord of the Rings", "J.R.R. Tolkien", 1954);
    insertBook("1984", "George Orwell", 1949);
    insertBook("To Kill a Mockingbird", "Harper Lee", 1960);

    printTable();

    findBook("1984", "George Orwell", 1949);
    findBook("Pride and Prejudice", "Jane Austen", 1813);

    return 0;
}