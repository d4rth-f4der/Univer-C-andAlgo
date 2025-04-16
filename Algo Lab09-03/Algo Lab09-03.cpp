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
};

LinkedList createListFromEvenFromOtherList(LinkedList& otherList) {
	LinkedList newList;
	Node* current = otherList.head;
	while (current != nullptr) {
		if (current->data % 2 == 0) {
			newList.append(current->data);
		}
		current = current->next;
	}
	return newList;
}

int main() {
    LinkedList myList;

    myList.append(1);
    myList.append(2);
    myList.append(3);
    myList.append(4);
    myList.append(5);

    cout << "Initial list: "; myList.printList();

	LinkedList evenList = createListFromEvenFromOtherList(myList);

    cout << "New even numbers list: "; evenList.printList();

    return 0;
}