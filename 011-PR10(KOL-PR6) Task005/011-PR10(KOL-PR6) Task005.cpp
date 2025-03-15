#include <iostream>
using namespace std;

enum Gender {Male, Female};

struct Employee {
	string name;
	int age;
	Gender gender;
	float salary;
};

int main() {
	Employee employees[]{
		{ "John Snow", 34, Male, 20500},
		{ "Kate Bush", 50, Female, 35000},
		{ "Sam Brown", 41, Male, 24150},
		{ "Mary Soso", 31, Female, 22500},
		{ "Bob Clinging", 39, Male, 51000},
		{ "Zoya Barns", 23, Female, 21000}
	};

	for (int i = 0; i < size(employees); ++i) {
		string gen; if (employees[i].gender == 0) gen = "Male"; else gen = "Female";
		cout << employees[i].name << ", " << employees[i].age << ", " << gen << ", " << employees[i].salary << endl;
	}
	float AVGsal=0;
	for (int i = 0; i < size(employees); ++i) {
		AVGsal += employees[i].salary;
	}
	cout << "\nEmployees quantity: " << size(employees) << endl;
	AVGsal /= size(employees);
	cout << "\nAverage salary: " << AVGsal << endl;
	cout << "\nEmployees with higher than average salary:\n";
	for (int i = 0; i < size(employees); ++i) {
		if (employees[i].salary > AVGsal) {
			string gen; if (employees[i].gender == 0) gen = "Male"; else gen = "Female";
			cout << employees[i].name << ", " << employees[i].age << ", " << gen << ", " << employees[i].salary << endl;
		}	
	}
	return 0;
}