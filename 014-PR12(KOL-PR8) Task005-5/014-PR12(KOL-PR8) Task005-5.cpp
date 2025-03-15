#include <iostream>
#include <string>
using namespace std;

// завдання 5
int main()
{
	int const n = 3;
	int sum = 0;
	int array[n]{ 2, 6 ,9 };
	for (int i = 0; i < n; ++i) {
		sum += *(array + i);
	}
	cout << sum;
}