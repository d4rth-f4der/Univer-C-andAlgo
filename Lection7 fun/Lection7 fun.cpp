#include <iostream>
using namespace std;

int add(int a, int b) {					// ������� ����� � ����� ������ �������, ����������� add(x,y);
	return a + b;						// ������� �������� �������� ���� ��� �����
}
void sub() {							// ������� ����������� sub()
	int a, b;							// void ����� �� �������
	cout << "Input a, b: ";
	cin >> a >> b;
	cout << "a-b=" << a - b;
}
void sub(int a, int b) {				// ������� ����� � ����� ������ �������, ����������� sub(x,y);
	cout << "a-b=" << a - b << endl;    // ������� �������� �� ����� �������� ���� ��� �����
}
int square(int a);                      // �������� ������� (��� �. ���� main)

int main() {
	int x, y, a;
	cout << "Input x, y: ";
	cin >> x >> y;
	cout << x << "+" << y << "=" << add(x, y) << endl;    // ������ ������� add(int a, int b)
	sub(x, y);                                        // ������ �. sub(int a, int b)
	sub();											  // ������ �. sub()
	cout << "\nInput a for square: ";
	cin >> a;
	cout << "a^2=" << square(a) << endl;
	cout << "a^2!=" << a;
}
int square(int a) {
	a *= a;
	return a;
}