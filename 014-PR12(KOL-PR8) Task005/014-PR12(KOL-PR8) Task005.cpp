#include <iostream>
#include <string>
using namespace std;

// �������� 5 ����
int main()
{
	int array[]{ 2, 6 ,8, 4 };
	int* ptrAr = array;
	cout << array << " " << *array << endl; // ����� ������ � � �������� ���� 1 ��������
	cout << ptrAr << " " << *ptrAr << endl;

	cout << array+1 << " " << *(array+1) << endl;
	cout << ptrAr+1 << " " << *(ptrAr+1) << endl;
}