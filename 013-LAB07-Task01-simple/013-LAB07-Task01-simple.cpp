// �� 6 �������� 3
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
		{ "������� 1", 1200000, "���" },
		{ "������� 2", 5850000, "���" },
		{ "������� 3", 700000, "���" },
	};
	
	// cout << companies[1].annualRevenue;
	float test = 5850000;
	float test2 = 0;
	cout << test2+test;
}