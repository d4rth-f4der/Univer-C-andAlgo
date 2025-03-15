#include <iostream>
#include <windows.h>
using namespace std;
int main()
{
	SetConsoleOutputCP(1251);

	int n;
	cout << "¬вед≥ть число N" << endl;
	cin >> n;
	if (n % 3 == 0) {
		cout << "„исло N кратне трьом." << endl;
	}
	else {
		cout << "„исло N не кратне трьом." << endl;
	}
}