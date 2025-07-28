// Додаткове 1, 2
#include <iostream>
using namespace std;

struct Node {
    int data;
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

    void append(int newData) {
        Node* newNode = new Node{ newData, nullptr };
        if (!head) {
            head = newNode;
            return;
        }
        Node* tempPntr = head;
        while (tempPntr->next) tempPntr = tempPntr->next;
        tempPntr->next = newNode;
    }

	void cyclicShift(int k) { // Циклічний зсув вправо на k позицій
        if (!head || k == 0) return;

        // 1. Знаходить довжину списку
        int length = 1;
        Node* tail = head;
        while (tail->next) {
            tail = tail->next;
            length++;
        }

        // 2. Привести k до діапазона [0, length]
        k = k % length;
        if (k == 0) return;

        // 3. Знаходить нову "голову" (length - k)-й елемент
        Node* newTail = head;
        for (int i = 1; i < length - k; ++i) {
            newTail = newTail->next;
        }
        Node* newHead = newTail->next;

        // 4. Перебудувати зв'язки
        tail->next = head;
        newTail->next = nullptr;
        head = newHead;
    }

	void moveEvensToFront() { // Переміщує парні елементи на початок списку
        if (!head || !head->next) return;

        Node* evenHead = nullptr;
        Node* evenTail = nullptr;
        Node* oddHead = nullptr;
        Node* oddTail = nullptr;
        Node* current = head;

        while (current) {
            Node* nextNode = current->next;
            current->next = nullptr;
            if (current->data % 2 == 0) {
                if (!evenHead) {
                    evenHead = evenTail = current;
                }
                else {
                    evenTail->next = current;
                    evenTail = current;
                }
            }
            else {
                if (!oddHead) {
                    oddHead = oddTail = current;
                }
                else {
                    oddTail->next = current;
                    oddTail = current;
                }
            }
            current = nextNode;
        }

        // Об`єднуєм парні і непарні
        if (evenTail) {
            evenTail->next = oddHead;
            head = evenHead;
        }
        else {
            head = oddHead;
        }
    }
};

int main() {
    LinkedList myList;

    myList.append(1);
    myList.append(2);
    myList.append(3);
    myList.append(4);
    myList.append(5);

    cout << "Initial list: "; myList.printList();
    myList.cyclicShift(2); // Сдвигаємо на 2 позиції вправо
    cout << "Modified list (shifted): "; myList.printList();
    myList.moveEvensToFront();
    cout << "After moving evens to front: "; myList.printList();

    return 0;
}