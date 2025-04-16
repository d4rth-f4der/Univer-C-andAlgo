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

    void insertBeforeNodeWithData(char data, char newData) {
        Node* newNode = new Node{ newData, nullptr };

        if (!head) {
            head = newNode;
            return;
        }

        if (head->data == data) {
            newNode->next = head;
            head = newNode;
            return;
        }
        Node* current = head;

        while (current->next && current->next->data != data) {
            current = current->next;
        }

        if (current->next) {
            newNode->next = current->next;
            current->next = newNode;
        }
        else {
            delete newNode;
        }
    }
};

int main() {
    LinkedList myList;

    myList.append('S');
    myList.append('A');
    myList.append('M');
    myList.append('O');
    myList.append('N');

    cout << "Initial list: "; myList.printList();
    myList.insertBeforeNodeWithData('O', 'S');
    cout << "Modified list: "; myList.printList();

    return 0;
}