#include <iostream>;
#include <time.h>
using namespace std;
int main()
{
	const int n = 3;
	int a[n];
	cout << "input array of " << n << " elements" << endl;
	srand(time(NULL));
	for (int i = 0; i < n; i++)
		a[i] = 1 + rand(), cout << "i=" << a[i], a[i]=a[i] % 20, cout << endl;
	cout << "output vertical array:" << endl;
	for (int i : a)
		cout << i << endl;
	cout << "through siezof: " << endl;
	for (int i = 0; i < sizeof(a) / sizeof(int); i++) {
		cout << a[i] << endl;
	}
}