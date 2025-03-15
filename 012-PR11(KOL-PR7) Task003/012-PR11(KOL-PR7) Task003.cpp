#include <iostream>
#include <string>
using namespace std;

int main()\
{
	string str = "hello world";
	for (int i = 0; i < str.size(); ++i) {
		cout << str[i];
	}
	cout << endl;
	str = "text";
	for (int i = 0; i < str.length(); ++i) {
		cout << str[i];
	}
	cout << endl;
	str += " concattext";
	cout << str << endl;
	// str.clear();
	cout << islower(str[0]) << isupper(str[0]) << isalpha(str[0]) << isspace(str[0]); //ןמגונעא÷ 0 ÿךשמ ם³
}