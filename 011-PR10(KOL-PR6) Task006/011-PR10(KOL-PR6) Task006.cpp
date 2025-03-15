#include <iostream>
using namespace std;

struct Student {
	string firstName;
	string lastName;
	int group;
	int *marks;
	int markqty;
};

void printStudlist(Student* stlist, int entrynum) {
	for (int i = 0; i < entrynum; ++i) {
		Student s = stlist[i];
		cout << s.firstName << " " << s.lastName << ", group " << s.group << ", marks: ";
		for (int j = 0; j < s.markqty; ++j) {
			cout << s.marks[j] << " ";
		}
		cout << endl;
	}
}

void printStudno2(Student* stlist, int entrynum) {
	cout << "Having no '2' marks:\n";
	for (int i = 0; i < entrynum; ++i) {
		Student s = stlist[i];
		int no2 = 0;
		for (int k = 0; k < s.markqty; ++k) {
			if (s.marks[k] == 2) no2=1;
		}
		if (no2 == 1) continue;
		cout << s.firstName << " " << s.lastName << ", group " << s.group << ", marks: ";
		for (int j = 0; j < s.markqty; ++j) {
			cout << s.marks[j] << " ";
		}
		cout << endl;
	}
}

void Entrybubblesort(Student* studlist, int entrynum) {
	cout << "bubblesorting...\n";
	for (int i = 0; i < entrynum; ++i) {
		for (int j = 0; j < entrynum - 1; ++j) {
			if (studlist[j].group > studlist[j + 1].group) swap(studlist[j], studlist[j + 1]);
		}
	}
}

int main() {
	Student studentslist[]{
		{"Vasia", "Pupkin", 1},
		{"Kolia", "Kochkin", 1},
		{"Petia", "Poroh", 2},
		{"Lesia", "Dudka", 1},
		{"Stas", "Mirzky", 2},
		{"Les", "Podereviansky", 2},
		{"Oksana", "Sinevir", 1},
		{"Paraska", "Krutogir", 2}
	};
	studentslist[0].marks = new int[5] {5, 4, 5, 2, 3}; studentslist[0].markqty = 5;
	studentslist[1].marks = new int[6] {5, 5, 3, 2, 5, 4}; studentslist[1].markqty = 6;
	studentslist[2].marks = new int[3] {5, 5, 2}; studentslist[2].markqty = 3;
	studentslist[3].marks = new int[8] {5, 5, 4, 5, 4, 3, 5, 4}; studentslist[3].markqty = 8;
	studentslist[4].marks = new int[2] {5, 4}; studentslist[4].markqty = 2;
	studentslist[5].marks = new int[4] {5, 5, 4, 4}; studentslist[5].markqty = 4;
	studentslist[6].marks = new int[6] {2, 5, 4, 2, 3, 4}; studentslist[6].markqty = 6;
	studentslist[7].marks = new int[5] {4, 4, 4, 5, 4}; studentslist[7].markqty = 5;

	printStudlist(studentslist, size(studentslist));
	cout << endl;
	printStudno2(studentslist, size(studentslist));
	cout << endl;
	Entrybubblesort(studentslist, size(studentslist));
	cout << "All student entries sorted by group:\n";
	printStudlist(studentslist, size(studentslist));
	cout << endl;

	for (int i = 0; i < size(studentslist); ++i) {
		delete[]studentslist[i].marks;
	}
	return 0;
}