#include <iostream>
#include <windows.h>
#include <cmath>
#include <string>
using namespace std;

struct Car {
	string model;
	int year;
	string color;
};
struct Person {
	string firstname;
	string lastname;
	int age;
};
struct Price
{
	double inititalPrice;
	double finalPrice;
};
struct Product
{
	string title;
	Price price;
	Person owner;
};
int main() {
	// ПР 6 завдання 0
	SetConsoleOutputCP(1251);
	Person p1;
	p1.firstname = "Корбан"; //явна ініциалізація
	p1.lastname = "Dallas";
	p1.age = 777;

	Person p2{ "Max", "Payne", 666 }; // неявна ініціалізація, дотримуватись послідовності полів структури	

	cout << "Ім'я персони 1: " << p1.firstname;
	cout << "\nІм'я персони 2: " << p2.firstname << endl;

	if (p1.age > p2.age) {
		cout << p1.firstname << " старше";
	}
	else if (p1.age < p2.age) {
		cout << p2.firstname << " старше";
	}
}