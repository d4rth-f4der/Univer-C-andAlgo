#include <iostream>
#include <windows.h>
using namespace std;
int main()
{
	SetConsoleOutputCP(1251);

	float x; 
	int y;
	cout << "¬вед≥ть базову варт≥сть квитка:" << endl;
	cin >> x;
	cout << "¬вед≥ть в≥к пасажира (повних рок≥в):" << endl;
	cin >> y;
	if ((y < 12) || (y > 60))
	{
		cout << "—ума до сплати (з≥ знижкою): " << (x - x * 0.15) << endl;
	}
	else
	{
		cout << "—ума до сплати (без знижки): " << x << endl;
	}
}