#include <iostream>
#include <windows.h>
#include <time.h>
using namespace std;
int main()
{
	SetConsoleOutputCP(1251);
	// �������� 13
	const int n = 20;
	int arr[n];
	int indxFZ = -1;
	int indxSZ = -1;
	int inZsum = 0;
	cout << "������ 31\n��������� ���������� ������� �������� ������ � " << n << " ��������\n";
	srand(time(NULL));
	for (int i = 0; i < n; ++i) {
		arr[i] = -11 + rand() % 20 +1;
		cout.width(4);
		cout << arr[i];
		if ((arr[i]==0)&&(indxFZ == -1)) {
			indxFZ = i;
			cout << "\n������ ���� - " << i + 1 << " �������\n";
		}
		else if ((arr[i] == 0)&&(indxFZ != -1) && (indxSZ == -1)) {
			indxSZ = i;
			cout << "\n������ ���� - " << i + 1 << " �������\n";
		}
	}
	if ((indxFZ >= 0) && (indxSZ >= 0)) {
		for (int i = (indxFZ + 1); i < indxSZ; ++i) {
			inZsum += arr[i];
		}
		cout << "\n���� �������� �� ����� ������� ������: " << inZsum;
	}
	else {
		cout << "0";
	}
}