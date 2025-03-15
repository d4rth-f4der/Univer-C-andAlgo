#include <iostream>
#include <string>
using namespace std;

int main()\
{
	char str[1000] = "Hello; world; amalgama; wazza;";
	cout << str;
	int enda = 0;
	for (int i = 1; i < strlen(str); ++i) {
		if ((str[i] == ';') && (str[i-1] == 'a')) {
			enda += 1;
		}
	}
	cout << "\na; quantity: " << enda;
}