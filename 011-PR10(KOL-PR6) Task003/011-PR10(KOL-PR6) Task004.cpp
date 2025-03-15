#include <iostream>
#include <windows.h>
#include <cmath>
#include <string>
using namespace std;

enum Gender { Male, Female };

struct Person {
	string firstname;
	string lastname;
	int age;
	Gender gender;
};

int main() {
	SetConsoleOutputCP(1251);
	Person p1 = { "John", "Wick", 100, Male };
	cout << p1.firstname << " " << p1.lastname << ", " << p1.age << " y.o.\n\n";

	Person persons[]{
		{ "Корбан", "Dallas", 777, Male },
		{ "Max", "Payne", 666, Male }
	};
	// int genderint;
	// cin >> genderint;                      //ввод enum
	// p1.gender = Gender(genderint);
	
	for (int i = 0; i < size(persons); ++i) {
		Person p = persons[i];
		string gen;
		if (p.gender == 0) gen = "Male"; else gen = "Female";
		cout << p.firstname << " " << p.lastname << ", " << p.age << " y.o., " << gen << endl;
	}

	for (int i = 0; i < size(persons); ++i) {
		Person p = persons[i];
		if (p.gender == Male) {
			cout << "Є чоловіки";
			break;
		}
	}
}