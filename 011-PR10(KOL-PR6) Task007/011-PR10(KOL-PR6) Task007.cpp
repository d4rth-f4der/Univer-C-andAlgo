// �� 6 �������� 3
#include <iostream>
#include <windows.h>
#include <cmath>
#include <string>
using namespace std;

enum Genre { Novel, Horror, SciFi, Science, Western, Stories, Fantasy };

struct Book {
	string title;
	string author;
	int pageqty;
	Genre genre;
};
int main() {
	SetConsoleOutputCP(1251);
	Book books[]{
		{ "������� ������", "������", 1240, Fantasy },
		{ "������", "�.˺�", 40, SciFi },
		{ "��� ���� ���������","������", 657, Novel}
	};
	int maxindex = 0;
	for (int i = 1; i < size(books); ++i) {
		Book b = books[i];
		if (b.pageqty > books[maxindex].pageqty) {
			maxindex = i;
		}
	}
	cout << "�������� ������� ������� - " << books[maxindex].title << ", " << books[maxindex].pageqty;

}