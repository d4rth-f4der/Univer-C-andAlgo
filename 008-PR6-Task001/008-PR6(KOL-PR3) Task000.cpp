#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	int i = 0;
	/* cout << i << endl;
	++i; // краще предінкремент
	i++;
	int res = i++ * 2; // інкерментація після обчислення
	cout << res << endl << i;
	int res = ++i * 2; // після обчислення інкерментації
	cout << res << endl << i; */
	
	/* while (i < 5) {
		cout << i << endl;
	} */
	
	do {
		cout << i << endl;
		++i;
	} while (i < 5);

	for (int i = 0; i < 10; ++i) {
		cout << i << endl;
	}
}