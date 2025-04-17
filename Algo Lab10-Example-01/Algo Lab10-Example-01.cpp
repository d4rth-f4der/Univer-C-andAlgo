#include <iostream>
#include <string>
using namespace std;

struct Info {
	string surname, name, patronymic;
};

struct Student {
	int id;
	Info info;
	string faculty, group;
	int course;
	Student* next;
	Student* prev;
};

void addStudent(Student*& head, Student*& tail, int id, Info info, string faculty, string group, int course) {
	Student* newStudent = new Student{ id, info, faculty, group, course, nullptr, tail };
	if (!head) head = tail = newStudent;
	else {
		tail->next = newStudent;
		tail = newStudent;
	}
}

void printStudents(Student* head) {
	Student* temp = head;
	while (temp) {
		cout << temp->info.surname << " " << temp->info.name << " (" << temp->faculty << ", " << temp->course << " курс)" << endl;
		temp = temp->next;
	}
}

void filterByFaculty(Student* head, string faculty) {
	Student* temp = head;
	cout << "\nСтуденти факультету" << faculty << ":\n";
	while (temp) {
		if (temp->faculty == faculty)
			cout << temp->info.surname << " " << temp->info.name << endl;
		temp = temp->next;
	}
}

void insertAt(Student*& head, Student*& tail, Student newStudentData, int N) {
	Student* newNode = new Student{ newStudentData.id, newStudentData.info.surname, newStudentData.info.name,
		newStudentData.info.patronymic, newStudentData.faculty, newStudentData.group, newStudentData.course, nullptr, nullptr };

	if (N <= 0 || !head) {
		// Insert at beginning
		newNode->next = head;
		if (head) head->prev = newNode;
		head = newNode;
		if (!tail) tail = newNode;
		return;
	}

	Student* temp = head;
	int index = 0;

	while (temp && index < N - 1) {
		temp = temp->next;
		index++;
	}

	if (!temp) {
		// Inset at end
		tail->next = newNode;
		newNode->prev = tail;
		tail = newNode;
		return;
	}

	newNode->next = temp->next;
	newNode->prev = temp;

	if (temp->next) temp->next->prev = newNode;
	else tail = newNode; // If insert at end

	temp->next = newNode;
}

Student* findBySurname(Student* head, string surname) {
	Student* temp = head;
	while (temp) {
		if (temp->info.surname == surname)
			return temp;
		temp = temp->next;
	}
	return nullptr;
}

int main() {
	Student* head = nullptr;
	Student* tail = nullptr;
	addStudent(head, tail, 1, Info{ "Ivanenko", "Ivan", "Ivanovich" }, "NNIT", "PD-15", 2);
	addStudent(head, tail, 3, Info{ "Ivanenko", "Ivan", "Ivanovich" }, "NNIT", "PD-16", 1);
}