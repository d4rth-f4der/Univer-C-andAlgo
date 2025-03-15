// ПР 6 завдання 3
#include <iostream>
#include <windows.h>
#include <cmath>
#include <string>
using namespace std;
struct Company {
	string name;
	int annualRevenue;
	string location;
};
int main() {
	SetConsoleOutputCP(1251);
	Company companies[]{
		{ "Компанія 1", 1200000, "Київ" },
		{ "Компанія 2", 5850000, "Київ" },
		{ "Компанія 3", 700000, "Київ" },
	};
	
	// cout << companies[1].annualRevenue;
	float test = 5850000;
	float test2 = 0;
	cout << test2+test;
}