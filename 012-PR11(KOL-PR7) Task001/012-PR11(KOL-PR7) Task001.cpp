#include <iostream>
#include <string>
using namespace std;

int main()
{
	char str[1000];
	cin.getline(str, 1000);
	if (strlen(str) > 5) {
		for (int i = 0; i < 5; ++i) {
			cout << str[i];
		}
	}
	else {
		cout << str;
	}
}