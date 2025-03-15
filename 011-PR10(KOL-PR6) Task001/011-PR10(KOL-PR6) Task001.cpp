#include <iostream>
#include <windows.h>

using namespace std;

// ПР 6 завдання 1
struct Point {
	int x;
	int y;
};

int main() {
	SetConsoleOutputCP(1251);
	cout << "Введіть координати х, у першої точки:\n";
	Point p1;
	cin >> p1.x >> p1.y;
	cout << "Введіть координати х, у другої точки:\n";
	Point p2;
	cin >> p2.x >> p2.y;
	float AB = sqrt(pow((p2.x - p1.x), 2) + pow((p2.y - p1.y), 2));
	cout << "AB = " << AB;
}