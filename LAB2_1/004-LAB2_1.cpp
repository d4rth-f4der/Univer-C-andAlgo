#include <iostream>
#include <windows.h>
using namespace std;
void main()
{
	float x, y, r, h, l;

	cout << "Input x,y\n";
	cin >> x >> y;
	cout << "Input r\n";
	cin >> r;
	cout << "Input h,l\n";
	cin >> h >> l;
	cout <<boolalpha<<((x >= 0 && x <= l && y >= 0 && y <= h) ||
		((x * x + y * y) <= r * r))<<endl;
}