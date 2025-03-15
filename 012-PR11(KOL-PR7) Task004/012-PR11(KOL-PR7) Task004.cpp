#include <iostream>
#include <string>
using namespace std;
// ÇÀÂÄÀÍÍß 3
int main()\
{
	string str = "hello world, Some More words\n";
	int lowq = 0, upq = 0, spq = 0;
	for (int i = 0; i < str.length(); ++i) {
		cout << str[i];
		if (islower(str[i]) != 0) {
			lowq += 1;
		}
		else if (isupper(str[i]) != 0) {
			upq += 1;
		}
		else if (isspace(str[i]) != 0) {
			spq += 1;
		}
	}
	cout << "lower - " << lowq << endl;
	cout << "upper - " << upq << endl;
	cout << "space - " << spq << endl;
}