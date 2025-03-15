#include <iostream>
#include <string>
using namespace std;

// завдання 5 зраз
int main()
{
	int array[]{ 2, 6 ,8, 4 };
	int* ptrAr = array;
	cout << array << " " << *array << endl; // назва масиву і є вказівник його 1 елементу
	cout << ptrAr << " " << *ptrAr << endl;

	cout << array+1 << " " << *(array+1) << endl;
	cout << ptrAr+1 << " " << *(ptrAr+1) << endl;
}