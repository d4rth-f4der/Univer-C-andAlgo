#include <iostream>
using namespace std;

// завдання 6
int main()
{
	int const n = 3;
	int array[n]{ 2, 6 ,9 };
	int arr1[n];
	for (int i = 0; i < n; ++i) {
		*(arr1 +i) = *(array + i);
	}
	
	for (int i = 0; i < n; ++i) {
		cout << *(arr1 +i);
	}
}