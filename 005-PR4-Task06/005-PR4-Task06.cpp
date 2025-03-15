#include <iostream>
#include <windows.h>
using namespace std;
int main()
{
	SetConsoleOutputCP(1251);
	int a;
	cout << "¬вед≥ть число (ц≥ле): " << endl;
	cin >> a;
	if ((a % 3 == 0) && (a % 5 == 0)) {
		cout << "FizzBuzz";
	}
	else if (a % 3 == 0) {
		cout << "Fizz";
	}
	else if (a % 5 == 0) {
		cout << "Buzz";
	}
}