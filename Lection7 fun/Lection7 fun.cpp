#include <iostream>
using namespace std;

int add(int a, int b) {					// функція оперує з двома цілими числами, викликається add(x,y);
	return a + b;						// функція ПОВЕРТАЄ значення суми цих чисел
}
void sub() {							// функція викликається sub()
	int a, b;							// void нічого не повертає
	cout << "Input a, b: ";
	cin >> a >> b;
	cout << "a-b=" << a - b;
}
void sub(int a, int b) {				// функція оперує з двома цілими числами, викликається sub(x,y);
	cout << "a-b=" << a - b << endl;    // функція ВИВОДИТЬ НА ЕКРАН значення суми цих чисел
}
int square(int a);                      // прототип функції (тіло ф. після main)

int main() {
	int x, y, a;
	cout << "Input x, y: ";
	cin >> x >> y;
	cout << x << "+" << y << "=" << add(x, y) << endl;    // виклик функції add(int a, int b)
	sub(x, y);                                        // виклик ф. sub(int a, int b)
	sub();											  // виклик ф. sub()
	cout << "\nInput a for square: ";
	cin >> a;
	cout << "a^2=" << square(a) << endl;
	cout << "a^2!=" << a;
}
int square(int a) {
	a *= a;
	return a;
}