#include <iostream>;
using namespace std;
/*
int main()
{
	struct Strudent
	{
		struct PIB
		{
			string FirstName, Lastname;
		} p;
		float Sr_ball;
	} st;
	st.p.FirstName = "Egor";
	st.p.Lastname = "Egorov";
	st.Sr_ball = 4.5;
	cout << sizeof(Strudent) << endl;
	cout << sizeof(string) << " * 2 + " << sizeof(float) << " = " << sizeof(st);
}
*/
/*
int main()

{
	setlocale(LC_CTYPE, "ukr");
	const int n = 4; //розмірність масиву
	struct student { string Name; string nom_gr; float sr_ball; };
	student a[n]; // масив структур
	// ввод даних
	cout << "Введіть масив з " << n << " елементів" << std::endl;
	for (int i = 0; i < n; i++) { //рух по масиву
		cout << "Ім'я: ";
		cin >> a[i].Name;
		cout << "Група: "; 
		cin >> a[i].nom_gr;
		cout << "Сер. бал: ";
		cin >> a[i].sr_ball; //ввод ел-тів структури
	}
	float max = a[0].sr_ball;
	for (int i = 1; i < n; i++)
		if (max < a[i].sr_ball) max = a[i].sr_ball;
	cout << "max =" << max; // вивод максимального елемента
}
*/
/*
enum Move {
	LEFT = 2, // присвоюється 2
	RIGHT, // присвоюється 3
	Forward = 3, // присвоюється 3
	Backward = -1 // присвоюється -1
};
int main()
{
	cout << LEFT << endl;
	cout << Move::RIGHT << endl;
	enum Colors :char
	{
		yellow='y',
		WHITE='a',
		ORANGE
	};
	cout << yellow << endl;
	cout << Colors::ORANGE << endl;
}
*/
/*
enum Move {
	LEFT = 2, // присвоюється 2
	RIGHT // присвоюється 3
};

int main()
{
	Move m = LEFT;// L-вираз
	cout << LEFT % 2 << endl;
	cout << (LEFT >= RIGHT) << endl;
	cout << LEFT + 2 << endl;
}
*/
/*
enum Move {
	LEFT = 2, // присвоюється 2
	RIGHT // присвоюється 3
};

enum Count {
	ONE = 1, // присвоюється 1
	TWO // присвоюється 2
};
int main()
{
	Move m = static_cast<Move>(ONE);
	cout << m;
}
*/
/*
enum Methods {
	ADD,SUB,MUL,DIV
};
int main() {
	int n;
	float a, b;
	cout << "Input a,b\n";
	cin >> a >> b;
	cout << "Input operation sign n (0-ADD,1-SUB,2-MUL,3-DIV)\n";
	cin >> n;
	switch(n) {
	case ADD: cout << a + b; break;
	case SUB: cout << a - b; break;
	case MUL: cout << a * b; break;
	case DIV: cout << a / b; break;
	default: cout << "operation not found";
		break;
	}
}
*/
/*
enum Methods {
	ADD, SUB, MUL, DIV
};
int main() {
	int n;
	float a, b;
	cout << "Input a,b\n";
	cin >> a >> b;
	cout << "Input operation sign n (+ ADD, - SUB, * MUL, / DIV)\n";
	cin >> n;
	switch (n) {
	case ADD: cout << a + b; break;
	case SUB: cout << a - b; break;
	case MUL: cout << a * b; break;
	case DIV: cout << a / b; break;
	default: cout << "operation not found";
		break;
	}
}
*/
/*
union MyUnion
{
	int i;
	float f;
	char c = 'A'; // по замовченням значення union те, що задано
};
int main()
{
	MyUnion u{ 1 }; // Присвоїти значення члену i=1
	u.i = 10; // Присвоїти значення члену i
	cout << u.i << endl; // Вивести значення 10
	u.f = 5.5; // Тепер присвоїмо значення члену f
	cout << u.f << endl; // Вивести значення 5.5
	cout << u.i << endl; // Це вже непередбачуваний результат
	MyUnion u1;
	cout << u1.c << endl; // Вивести значення 'A'
}
*/
union MyUnion
{
	int i; float f; char c;

};
int main()
{
	MyUnion u{ 7.2 }, u1 = { 12 };
	cout << (u.i >= u1.i) << endl; // Вивести значення 1 або 0
	u.f = u.i + 5.5;
	cout << u.f<<endl;
	u.f *= 2;
	cout << u.f;
}