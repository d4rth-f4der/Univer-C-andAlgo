#include <iostream>;
using namespace std;
/*
int main()
{
	char c = 'a';
	cout << c;
	char c1('\n');
	cout << c1;
	c = 65;
	cout << c << endl;
	char c2 = { 0x41 };
	cout << c2 << endl;
	const char c3 = 'b';
	cout << c3;
	const char c4('\n');
	cout << c4;
	c = 65;
	cout << c << c1;
	cin >> c;
	cout << c << c1;
	cout << int(c) << endl;//отримуємо код символа
	cout << static_cast<int>(c); //отримуємо код символа
}
*/
int main()
{
	char c, c1;
	cout << "input 2 symbols: ";
	cin >> c;
	cout << "code ASCII - " << int(c) << endl;
	cin >> c1;
	cout << "code ASCII - " << int(c1) << endl;
	cout << "Comparison symb1 > symb2: " << (c > c1) <<endl;
	cout << "c-c1=" << c - c1;
}