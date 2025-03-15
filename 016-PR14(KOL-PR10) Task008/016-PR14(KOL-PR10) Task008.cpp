#include<iostream>
using namespace std;

string weekday(int a) {
	string day;
	switch (a) {
	case 1: day = "Monday"; break;
	case 2: day = "Tuesday"; break;
	case 3: day = "Wednesday"; break;
	case 4: day = "Thursday"; break;
	case 5: day = "Friday"; break;
	case 6: day = "Saturday"; break;
	case 7: day = "Sunday"; break;
	default: day = "ERROR wrong number";
	}
	return day;
}

int main() {
	int d;
	cout << "Input day of the week:\n";
	cin >> d;
	cout << "The day is " << weekday(d);
	return 0;
}