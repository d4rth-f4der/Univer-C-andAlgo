#include <iostream>
#include <windows.h>
using namespace std;

// ПР 6 завдання 2
struct User {
	string login;
	string password;
};

int main() {
	SetConsoleOutputCP(1251);
	cout << "Введіть login: ";
	User s1;
	cin >> s1.login;
	cout << "Введіть пароль: ";
	cin >> s1.password;
	if ((s1.login == "pdgroup") && (s1.password == "pdpassword")) {
		cout << "Логін і пароль правильні!";
	}
	else {
		cout << "Неправильний логін та/або пароль.";
	}
}