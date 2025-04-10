#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* next;
};

void printLinkedList_rec(Node* head) {
    if (head != nullptr) {
        cout << head->data << " ";
        printLinkedList_rec(head->next);
    }
}

void appendWithNode(Node*& head, int newData) {
    Node* newNode = new Node{ newData, nullptr };
    if (!head) {
        head = newNode;
        return;
    }
    Node* tempPntr = head;
    while (tempPntr->next) tempPntr = tempPntr->next;

    tempPntr->next = newNode;
}

void addAftetNode(Node** prevNode, int newData) {
    if (prevNode == nullptr || *prevNode == nullptr) return;

    Node* newNodePointer = new Node;
    newNodePointer->data = newData;
    newNodePointer->next = (*prevNode)->next;
    (*prevNode)->next = newNodePointer;
}

void deleteFirstNode(Node*& head) {
    if (!head) return;

    Node* headPtr = head;
    head = head->next;
    delete headPtr;
}

int main() {
    Node* myHead = nullptr;

    appendWithNode(myHead, 1);
    appendWithNode(myHead, 2);
    appendWithNode(myHead, 3);
    appendWithNode(myHead, 4);
    appendWithNode(myHead, 5);
    printLinkedList_rec(myHead);
    
    deleteFirstNode(myHead);
    printLinkedList_rec(myHead);
    return 0;
}