#include <iostream>
#include <windows.h>
using namespace std;
int main()
{
	SetConsoleOutputCP(1251);
	float x, y;
	cout << "¬вед≥ть число 1" << endl;
	cin >> x;
	cout << "¬вед≥ть число 2" << endl;
	cin >> y;
	if (x == -y) {
		cout << "true";
	}
}