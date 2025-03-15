#include <iostream>
#include <string>
using namespace std;

int main()\
{
	char str[1000]{ 't', 'e', 'x', 't', '\0' };
	char str2[1000] = "Hello world";
	/* for (int i = 0; str[i] != '\0'; ++i) {
		cout << str[i];
	} */
	cout << str << endl;
	cout << str2;
	cout << "\n" << size(str);
	cout << "\n" << strlen(str);
	cin >> str;
	cout << str << endl;
	cin.getline(str, 1000);
	cout << str;
}