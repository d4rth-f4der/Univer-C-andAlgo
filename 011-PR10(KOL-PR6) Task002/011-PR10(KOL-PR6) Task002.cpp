#include <iostream>
#include <windows.h>
using namespace std;

// �� 6 �������� 2
struct User {
	string login;
	string password;
};

int main() {
	SetConsoleOutputCP(1251);
	cout << "������ login: ";
	User s1;
	cin >> s1.login;
	cout << "������ ������: ";
	cin >> s1.password;
	if ((s1.login == "pdgroup") && (s1.password == "pdpassword")) {
		cout << "���� � ������ ��������!";
	}
	else {
		cout << "������������ ���� ��/��� ������.";
	}
}