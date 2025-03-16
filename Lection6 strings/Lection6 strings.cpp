/* #include <iostream>;
#include <string>;
using namespace std;

int main()
{
	char c[10] = "abcdef";
	cout << "C-style string c: " << c << endl;

	char c1[20]{ "abcdef" };
	cout << "C-style string c1: " << c1 << endl;

	char c2[15] = { "abcdef" };
	cout << "C-style string c2: " << c2 << endl;

	char c3[20]("abcdef");
	cout << "C-style string c3: " << c3 << endl;

	char c4[] = { 'a','b','c','d','e','f'};
	cout << "C-style string c4: ";
	for (char i : c4)
		cout << i;
	cout << endl;
	
	char c5[6] = { 'a','b','c','d','e','f' };
	cout << "C-style string c5: ";
	for (char i : c4)
		cout << i;
	cout << endl;

	c[0] = c1[0] = 'A';
	cout << c << endl << c1 <<endl;

	string s = "abcdef";
	cout << "C++ string s: " << s << endl;

	string s1{ "abcdef" };
	cout << "C++ string s1: " << s1 << endl;

	string s2 = { "abcdef" };
	cout << "C++ string s2: " << s2 << endl;

	string s3("abcdef");
	cout << "C++ string s3: " << s3 << endl;

	s[0] = s1[0] = 'A';
	cout << s << endl << s1 << endl; */
	
	/*
	string s = "abcdef";
	string s1{ "abcdefghijkl" };
	//конкатенація
	cout << s + s1 << endl;
	//оператор складового присвоювання
	s += s1;
	std::cout << s << std::endl;
	std::cout << (s == s1) << std::endl;
	std::cout << (s < s1) << std::endl;

	string s2 = "abc";
	cout << s2.at(0) << endl; // виведе a
	cout << s2[1] << endl; // виведе b
	s2[0] = 'A';
	cout << s2; // виведе Abc
	return 0;
	
	string name;
	cout << "Please, enter your name: ";
	getline(cin, name);
	cout << "Hello, " << name << "!\n";
	cout << "Please, enter your full name: ";
	getline(cin, name, '.');
	cout << "Hello, " << name << "!\n";
	return 0;
}
*/

#include <iostream>
#include <string>
using namespace std;
int main()
{
	//APPEND - додавання символів
	string s0 = "abc", s, t = "0123456";
	char p[10] = "0123456";
	s = s0; s.append(t); cout << s << endl; //додавання рядка t в кінець рядка s
	s = s0; s.append(t,2,3); cout << s << endl; //додавання символів рядка t, починаючи з 2, 3 символи підряд, в кінець рядка s
	s = s0; s.append(p); cout << s << endl; //додавання рядка p в кінець рядка s
	s = s0; s.append(p,2); cout << s << endl; //додавання перших 2 символів рядка p
	s = s0; s.append(p, 2, 3); cout << s << endl; //додавання символів рядка p, починаючи з 2, 3 символи підряд, в кінець рядка s

	//FRONT(), BACK() - перший символ, останній символ
	s = "abc";
	cout << s.front() << endl; //перший символ рядка s
	s.front() = 'A'; //перший символ рядка s = A
	cout << s << endl; //перший символ рядка s
	cout << s.back() << endl; //останній символ рядка s
	s.back() = 'a'; //останній символ рядка s = а
	cout << s << endl; //останній символ рядка s

	//ITERATOR
	s = "abcdef"; cout << "symbols iteration:" << endl;
	for (string::iterator it = s.begin(); it != s.end(); ++it) //перебір символів рядка s
		cout << it[0] << endl;

	//SIZE, LENGTH, CAPACITY, MAX_SIZE
	string str("abcdef");
	cout << "string str = " << str << endl;
	cout << "size: " << str.size() << "\n"; //розмір в байтах
	cout << "length: " << str.length() << "\n"; //розмір в байтах
	cout << "capacity: " << str.capacity() << "\n"; //скільки пам'яті займає фактично
	cout << "max_size: " << str.max_size() << "\n"; //максимальна ємність
	
	//ERASE - стерти
	s = "0123456789"; cout << "string s = " << s << endl;
	s.erase(3, 5); cout << s << endl; //стирання починаючи з 3 символа, 5ти символів
	s.erase(3); cout << s << endl; // стирання починаючи з 3 символа до кінця
	s.erase(); cout << s << endl; // стирання всіх символів
	
	//INSERT - вставка
	s = "abcdef", t = "123456";                     cout << "string s = " << s << ", string t = " << t << endl;
	s.insert(4, t); cout << s << endl; // вставка рядка f після 4 символа рядка s
	s = "abcdef", t = "123456";
	s.insert(2, t, 2, 4); cout << s << endl; // вставка після 2 символа рядка s символів з рядка t - поч.2, довжина - 4 символи

	// REPLACE - заміна
	t = "abcdef", s, s0 = "0123456";            cout << "\nstring t = " << t << ", string s = " << s << ", string s0 = " << s0 << endl;
	s = s0; s.replace(2, 3, t); cout << s << endl; // вставка в рядок s починаючи з 2 символа, замість 3 символів, рядка t
	s = s0; s.replace(2, 6, t); cout << s << endl; // вставка в рядок s починаючи з 2 символа, замість 6 символів, рядка t
	s = s0; s.replace(7, 4, t); cout << s << endl; // вставка в рядок s починаючи з 7 символа, замість 4 символів, рядка t
	s = s0; s.replace(2, 9, t); cout << s << endl; // вставка в рядок s починаючи з 2 символа, замість 9 символів, рядка t
	s = s0; s.replace(2, 3, t, 3, 2); cout << s << endl; // вставка в рядок s починаючи з 2 символа, замість 3 символів, символів з
														 // з рядка t - поч.3, довж.2 символи
	s = s0; s.replace(2, 3, t, 2, 9); cout << s << endl; // вставка в рядок s починаючи з 2 символа, замість 3 символів, символів з
														 // з рядка t - поч.2, довж.9 символів
	

	// ПОРІВНЯННЯ STRINGS   -   l < r = -1  ;  l = r = 0  ;  l > r = 1
	s = "01234", t = "43210"; string u = "0123432100";
	cout << "\nstring s = " << s << ", string t = " << t << ", string u = " << u << endl;
	cout << "s.compare(t): " << s.compare(t) << endl; //порівняння s до t, s < t ==> -1
	cout << "t.compare(s): " << t.compare(s) << endl; //порівняння t до s, t > s ==> 1
	cout << "s.compare(s): " << s.compare(s) << endl; //порівняння s до s, s = s ==> 0
	cout << "s.compare(u): " << s.compare(u) << endl; //порівняння s до u, s < u ==> -1
	cout << "u.compare(s): " << u.compare(s) << endl; //порівняння u до s, u > s ==> 1

	cout << "u.compare(0, 5, s): " << u.compare(0, 5, s) << endl; //порівняння перших 5 символів (поч.0) u до s, 01234 = 01234 ==> 0
	cout << "s.compare(0, 5, u): " << s.compare(0, 5, u) << endl; //порівняння перших 5 символів (поч.0) s до u, 01234 < 0123432100 ==> -1
	cout << "u.compare(4, 4, t): " << u.compare(4, 4, t) << endl; //порівняння перших 4 символів (поч.4) u до t, 3210 < 43210 ==> -1
	cout << "u.compare(4, 5, t): " << u.compare(4, 5, t) << endl; //порівняння перших 5 символів (поч.3) u до t, 43210 < 43210 ==> 0
	cout << "u.compare(4, 2, t, 0, 2): " << u.compare(4, 2, t, 0, 2) << endl; //пор. перших 2 симв.(поч.4) u до перших 2 симв(поч.0) t:
																			  //43=43 ==> 0

	// COPY - додавання підрядка???
	char c[10];
	string str1("abcdef");
	size_t lenth = str1.copy(c, 2, 4); 
	// c[length] = '\0'; doesn't work ????


	// EMPTY() - перевірка на порожність
	string str2 = "";
	cout << "\nstring str2 = " << str2 << "; str2.empty() = " << str2.empty() << endl; // empty() = 1 якщо порожнє, 0 - якщо непорожнє
		if (str2.empty()) {
			cout << "String is empty!" << endl;
			}


	// RESIZE
	string str3("abcderf");						cout << "\nstring str3 = " << str3 << endl;
	str3.resize(str3.size()+2, '-');			cout << "string str3 = " << str3 << endl; //збільшує розмір на 2, заповнює символом "-"
	str3.resize(10);			cout << "string str3 = " << str3 << endl; // збільшує розмір до 10 символів, не заповнює нульові символи
	str3.resize(4);				cout << "string str3 = " << str3 << endl; // збільшує розмір до 4 символів, видаляє лишні
	
	
	// SWAP
	string s3 = "01234", t3 = "43210";				cout << "\nstring s3 = " << s3 << ", string t3 = " << t3 << endl;
	s3.swap(t3); /* поміняє s3 і t3 */				cout << "string s3 = " << s3 << ", string t3 = " << t3 << endl;


	// FIND_FIRST_OF - пошук першого символу в рядку
	string s4 = "01234567890123456789", t4 = "abc654";			cout << "\nstring s4 = " << s4 << ", string t4 = " << t4 << endl;
	cout << s4.find_first_of(t4) << endl; // знаходить перший символ в s4 будь-якого символа з t4 (4 на позиції 4)
	cout << s4.find_first_of(t4, 11) << endl; // знаходить перший символ в s4, починаючи з 11симв., будь-якого символа з t4 (4 на позиції 14)
	char ch4[10] = "abc654";                                     cout << "char ch4[10] = " << ch4 << endl;
	cout << s4.find_first_of(ch4, 11, 5) << endl; // знаходить перший символ в s4, починаючи з 11симв., будь-якого символа з перших 5
												 // символів сh4  (5 на позиції 15)
	char c4 = '9';												cout << "char c4 = " << c4 << endl;
	cout << s4.find_first_of(c4) << endl; // знаходить перший символ в s4 символа с4 (9 на позиції 9)


	// FIND_LAST_OF - пошук останнього символа в рядку
	string s5 = "01234567890123456789", t5 = "abc654";			cout << "\nstring s5 = " << s5 << ", string t5 = " << t5 << endl;
	cout << s5.find_last_of(t5) << endl; // знаходить останній символ в s5 будь-якого символа з t5 (6 на позиції 16)
	cout << s5.find_last_of(t5, 11) << endl; // знаходить перший символ з кінця в s5, починаючи з 11символа
											 // будь-якого символа з t5 (6 на позиції 6)
	char ch5[10] = "abc456";										cout << "char ch5[10] = " << ch5 << endl;
	cout << s5.find_last_of(ch5, 11, 5) << endl; // знаходить перший символ в s5, починаючи з 11символа в зворотньому напрямку,
												 // будь-якого символа з перших 5 символів сh5  (5 на позиції 5)
	char c5 = '9';												cout << "char c5 = " << c5 << endl;
	cout << s5.find_last_of(c5) << endl; // знаходить перший символ з кінця в s5 символа с5 (9 на позиції 19)


	// FIND_FIRST_NOT_OF - пошук першого відсутнього символу в рядку
	string s6 = "01234567890123456789", t6 = "abc654";			cout << "\nstring s6 = " << s6 << ", string t6 = " << t6 << endl;
	cout << s6.find_first_not_of(t6) << endl; // знаходить позицію першого символа в s6, котрого немає в t6 (0 на позиції 0)
	cout << s6.find_first_not_of(t6, 11) << endl; // знаходить позицію першого символа в s6 (поч.з 11), кого немає в t6 (1 на позиції 11)
	char ch6[10] = "abc456";										cout << "char ch6[10] = " << ch6 << endl;
	cout << s6.find_first_not_of(ch6, 4, 4) << endl; // перший символ в s6 (поч.з 4) кого немає серед 1ших 4 з ch6 (5 на позиції 5)
	char c6 = '0';													cout << "char c6 = " << c6 << endl;
	cout << s6.find_first_not_of(c6) << endl; // перший символ в s6 що не є с6 (1 на позиції 1)


	// FIND_LAST_NOT_OF - пошук першого з кінця відсутнього символу в рядку
	string s7 = "01234567890123456789", t7 = "abc654";			cout << "\nstring s7 = " << s7 << ", string t7 = " << t7 << endl;
	cout << s7.find_last_not_of(t7) << endl; // знаходить позицію останнього символа в s7, котрого немає в t7 (9 на позиції 19)
	cout << s7.find_last_not_of(t7, 16) << endl; // знаходить позицію останнього символа в s7 (з 16го символа в зворотньому напрямку),
												 // котрого немає в t7 (3 на позиції 13)
	char ch7[10] = "abc654";										cout << "char ch7[10] = " << ch7 << endl;
	cout << s7.find_last_not_of(ch7, 16, 5) << endl; // знаходить позицію останнього символа в s7 (з 16го символа в зворотньому напрямку),
												     // котрого немає серед перших 5 символів ch7 (4 на позиції 14)


	// FIND, RFIND - пошук входження рядка, find - з початку, rfind - з кінця
	string s8 = "01234567890123456789", t8 = "345", u8="abc";
												cout << "\nstring s8 = " << s8 << ", string t8 = " << t7 << ", string u8 = " << u8 << endl;
	cout << s8.find(t8) << endl; // перше входження t8(345) в s8 (з 3го символу)
	cout << s8.find(t8, 5) << endl; // перше входження t8(345) в s8, починаючи з 5симовлу (з 13го символу)
	cout << s8.find(t8, 15) << endl; // перше входження t8(345) в s8, починаючи з 15симовлу (нема, виведе сміття)
	cout << s8.find(u8) << endl; // перше входження u8(abc) в s8 (нема, виведе сміття)
	cout << s8.rfind(t8) << endl; // останнє входження t8(345) в s8 (з 13го символу)
	cout << s8.rfind(t8, 12) << endl; // останнє входження t8(345) в s8, поч.з 12 символу в звор.порядку (з 3го символу)
	cout << s8.rfind(t8, 2) << endl; // останнє входження t8(345) в s8, поч.з 2 символу в звор.порядку (нема, виведе сміття)
	cout << s8.rfind(u8) << endl; // останнє входження u8(abc) в s8 (нема, виведе сміття)
	char ch8[10] = "abc345";										cout << "char ch8[10] = " << ch7 << endl;
	// cout << ch8.find(t8) << endl; -- з с-type не працює
	string strch8 = ch8;											cout << "strch8 = " << strch8 << endl;
	cout << strch8.find(t8) << endl; // перше входждення t8(345) в strch8 (abc345) - (з 3 символу)
	cout << strch8.find(u8, 0) << endl; // перше входждення u8(abc) в strch8 (abc345) - (з 0 символу)
	return 0;
}