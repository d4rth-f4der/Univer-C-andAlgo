#include <iostream>
#include <string>

using namespace std;

struct Student {
	int id;
	string lastName;
	string firstName;
	string middleName;
	string faculty;
	int course;
	string group;
};

struct Node {
	Student data;
	Node* next;
};

void insertAtPosition(Node*& head, Student s, int position) {
	Node* newNode = new Node{ s, nullptr };

	if (position <= 0 || head == nullptr) {
		newNode->next = head;
		head = newNode;
		return;
	}

	Node* current = head;
	int index = 0;

	while (current->next != nullptr && index < position - 1) {
		current = current->next;
		index++;
	}

	newNode->next = current->next;
	current->next = newNode;
}

void printStudentsByFaculty(Node* head, const string& faculty) {
	Node* current = head;
	bool found = false;

	while (current) {
		if (current->data.faculty == faculty) {
			cout << current->data.lastName << " " << current->data.firstName << " "
				<< current->data.middleName	<< current->data.faculty
				<< ", Course: " << current->data.course
				<< ", Group: " << current->data.group << endl;
			found = true;
		}
		current = current->next;
	}
	if (!found) {
		cout << "No students found in faculty: " << faculty << endl;
	}
}

void findStudentByLastName(Node* head, const string& lastName) {
	Node* current = head;
	while (current) {
		if (current->data.lastName == lastName) {
			cout << "Student found: " << current->data.lastName << " "
				<< current->data.firstName << " "
				<< current->data.middleName << ", Faculty: "
				<< current->data.faculty << ", Course: "
				<< current->data.course << ", Group: "
				<< current->data.group << endl;
			return;
		}
		current = current->next;
	}
	cout << "Student with last name " << lastName << " not found." << endl;
}

void clearList(Node*& head) {
	while (head) {
		Node* temp = head;
		head = head->next;
		delete temp;
	}
}

int main() {
	Node* head = nullptr;
	Student s1 = { 1, "Ivanov", "Ivan", "Ivanovich", "Computer Science", 2, "CS-21" };
	Student s2 = { 2, "Petrov", "Petr", "Petrovich", "Mathematics", 3, "MATH-22" };
	Student s3 = { 3, "Sidorov", "Sidr", "Sidorovich", "Physics", 1, "PHYS-23" };
	Student s4 = { 4, "Kovalenko", "Oleg", "Olegovich", "Computer Science", 2, "CS-21" };

	insertAtPosition(head, s1, 0);
	insertAtPosition(head, s2, 1);
	insertAtPosition(head, s3, 2);
	insertAtPosition(head, s4, 1);

	cout << "Students in Computer Science faculty:\n";
	printStudentsByFaculty(head, "Computer Science");

	cout << "\nFinding student by last name 'Petrov':\n";
	findStudentByLastName(head, "Petrov");

	return 0;
}