#include <iostream>
#include <windows.h>
using namespace std;
int main()
{
	SetConsoleOutputCP(1251);
	double chock, coff, milkgl;
	int chock_qty, coff_qty, milkgl_qty;
	cout << "¬вед≥ть варт≥сть шоколадки: ";
	cin >> chock;
	cout << "¬вед≥ть к≥льк≥сть шоколадок: ";
	cin >> chock_qty;
	cout << "¬вед≥ть варт≥сть кави: ";
	cin >> coff;
	cout << "¬вед≥ть к≥льк≥сть порц≥й кави: ";
	cin >> coff_qty;
	cout << "¬вед≥ть варт≥сть скл€нки молока: ";
	cin >> milkgl;
	cout << "¬вед≥ть к≥льк≥сть скл€нок молока: ";
	cin >> milkgl_qty;
	cout << "—ума до сплати: " << chock * chock_qty + coff * coff_qty + milkgl * milkgl_qty;
}