// Додаткове 3, 4
#include <iostream>
#include <string>
using namespace std;

struct Node {
    char data;
    Node* next;
};

struct LinkedList {
    Node* head;

    LinkedList() : head(nullptr) {}

    void printList() {
        Node* current = head;
        while (current != nullptr) {
            cout << current->data << " ";
            current = current->next;
        }
        cout << endl;
    }

    void append(char newData) {
        Node* newNode = new Node{ newData, nullptr };
        if (!head) {
            head = newNode;
            return;
        }
        Node* tempPntr = head;
        while (tempPntr->next) tempPntr = tempPntr->next;
        tempPntr->next = newNode;
    }

    // Пошук підрядка в списку символів
    bool findSubstring(const std::string& substr) {
        if (substr.empty()) return true;
        Node* start = head;
        while (start) {
            Node* curr = start;
            size_t i = 0;
            while (curr && i < substr.size() && curr->data == substr[i]) {
                curr = curr->next;
                ++i;
            }
            if (i == substr.size()) return true; // знайдено
            start = start->next;
        }
        return false; // не знайдено
    }

    // Повертає символ k-го елемента від кінця списку, або '\0', якщо такого немає
    char kthFromEnd(int k) {
        if (k <= 0) return '\0';

		// Визначаємо довжину списку
        int length = 0;
        Node* current = head;
        while (current) {
            length++;
            current = current->next;
        }

		if (k > length) return '\0'; // якщо k більше довжини списку

        // Шукаємо (length - k)-ий елемент
        int steps = length - k;
        current = head;
        for (int i = 0; i < steps; ++i) {
            current = current->next;
        }
        return current ? current->data : '\0';
    }
};

int main() {
    LinkedList myList;

    myList.append('S');
    myList.append('A');
    myList.append('M');
    myList.append('S');
    myList.append('O');
    myList.append('N');

    cout << "Initial list: "; myList.printList();

	cout << "Find 'SAM': " << boolalpha << (myList.findSubstring("SAM")) << endl;
    cout << "Find 'SON': " << boolalpha << (myList.findSubstring("SON")) << endl;
    cout << "Find 'XYZ': " << boolalpha << (myList.findSubstring("XYZ")) << endl;

    int k = 4;
    char value = myList.kthFromEnd(k);
    if (value != '\0')
        cout << k << "-й елемент від кінця: " << value << endl;
    else
        cout << "Список коротший за " << k << " елементів." << endl;

    return 0;
}