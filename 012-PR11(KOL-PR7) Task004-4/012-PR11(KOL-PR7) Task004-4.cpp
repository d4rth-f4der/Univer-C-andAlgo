#include <iostream>
#include <string>
using namespace std;
// ÇÀÂÄÀÍÍß 4
int main()\
{
	string str = "hello world, Some More words\n";
	int vowq = 0;
	for (int i = 0; i < str.length(); ++i) {
		cout << str[i];
		if ((str[i]=='a')|| (str[i] == 'e') || (str[i] == 'i') || (str[i] == 'o') ||
			(str[i] == 'u') || (str[i] == 'y')) {
			vowq += 1;
		}
		
	}
	cout << "vowels - " << vowq << endl;	
}