#include <iostream>;
using namespace std;
int main()
{
	const int n = 3;
	int a[n];
	cout << "input array of " << n << " elements" << endl;
	for (int i = 0; i < n; i++) // int i=0, if i<3 => {i+1}
		cin >> a[i]; // a[0]<3, =?; a[1]<3, =?; a[2]<3, =?; a[3]!<3. stop
	cout << "output array:" << endl;
	// cout << a[0] << a[1] << a[2] << endl; // a[0]a[1]a[2]
	for (int i : a)
		cout << i;
	cout << endl;
	cout << "output vertical array:" << endl;
	for (int i : a)
		cout << i << endl;
}