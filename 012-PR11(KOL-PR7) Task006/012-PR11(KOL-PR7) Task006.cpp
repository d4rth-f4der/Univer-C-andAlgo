#include <iostream>
#include <string>
using namespace std;
int main()\
{
	string str = "hello world, Some More words 15244\n";
	int letq = 0, numq = 0;
	for (int i = 0; i < str.length(); ++i) {
		cout << str[i];
		if (isalpha(str[i])) {
			letq += 1;
		}
		else if (isdigit(str[i])) {
			numq += 1;
		}
	}
	cout << "letters - " << letq << endl;
	cout << "numbers - " << numq << endl;
}