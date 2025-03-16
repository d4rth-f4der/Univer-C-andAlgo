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
	//������������
	cout << s + s1 << endl;
	//�������� ���������� ������������
	s += s1;
	std::cout << s << std::endl;
	std::cout << (s == s1) << std::endl;
	std::cout << (s < s1) << std::endl;

	string s2 = "abc";
	cout << s2.at(0) << endl; // ������ a
	cout << s2[1] << endl; // ������ b
	s2[0] = 'A';
	cout << s2; // ������ Abc
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
	//APPEND - ��������� �������
	string s0 = "abc", s, t = "0123456";
	char p[10] = "0123456";
	s = s0; s.append(t); cout << s << endl; //��������� ����� t � ����� ����� s
	s = s0; s.append(t,2,3); cout << s << endl; //��������� ������� ����� t, ��������� � 2, 3 ������� �����, � ����� ����� s
	s = s0; s.append(p); cout << s << endl; //��������� ����� p � ����� ����� s
	s = s0; s.append(p,2); cout << s << endl; //��������� ������ 2 ������� ����� p
	s = s0; s.append(p, 2, 3); cout << s << endl; //��������� ������� ����� p, ��������� � 2, 3 ������� �����, � ����� ����� s

	//FRONT(), BACK() - ������ ������, ������� ������
	s = "abc";
	cout << s.front() << endl; //������ ������ ����� s
	s.front() = 'A'; //������ ������ ����� s = A
	cout << s << endl; //������ ������ ����� s
	cout << s.back() << endl; //������� ������ ����� s
	s.back() = 'a'; //������� ������ ����� s = �
	cout << s << endl; //������� ������ ����� s

	//ITERATOR
	s = "abcdef"; cout << "symbols iteration:" << endl;
	for (string::iterator it = s.begin(); it != s.end(); ++it) //������ ������� ����� s
		cout << it[0] << endl;

	//SIZE, LENGTH, CAPACITY, MAX_SIZE
	string str("abcdef");
	cout << "string str = " << str << endl;
	cout << "size: " << str.size() << "\n"; //����� � ������
	cout << "length: " << str.length() << "\n"; //����� � ������
	cout << "capacity: " << str.capacity() << "\n"; //������ ���'�� ����� ��������
	cout << "max_size: " << str.max_size() << "\n"; //����������� ������
	
	//ERASE - ������
	s = "0123456789"; cout << "string s = " << s << endl;
	s.erase(3, 5); cout << s << endl; //�������� ��������� � 3 �������, 5�� �������
	s.erase(3); cout << s << endl; // �������� ��������� � 3 ������� �� ����
	s.erase(); cout << s << endl; // �������� ��� �������
	
	//INSERT - �������
	s = "abcdef", t = "123456";                     cout << "string s = " << s << ", string t = " << t << endl;
	s.insert(4, t); cout << s << endl; // ������� ����� f ���� 4 ������� ����� s
	s = "abcdef", t = "123456";
	s.insert(2, t, 2, 4); cout << s << endl; // ������� ���� 2 ������� ����� s ������� � ����� t - ���.2, ������� - 4 �������

	// REPLACE - �����
	t = "abcdef", s, s0 = "0123456";            cout << "\nstring t = " << t << ", string s = " << s << ", string s0 = " << s0 << endl;
	s = s0; s.replace(2, 3, t); cout << s << endl; // ������� � ����� s ��������� � 2 �������, ������ 3 �������, ����� t
	s = s0; s.replace(2, 6, t); cout << s << endl; // ������� � ����� s ��������� � 2 �������, ������ 6 �������, ����� t
	s = s0; s.replace(7, 4, t); cout << s << endl; // ������� � ����� s ��������� � 7 �������, ������ 4 �������, ����� t
	s = s0; s.replace(2, 9, t); cout << s << endl; // ������� � ����� s ��������� � 2 �������, ������ 9 �������, ����� t
	s = s0; s.replace(2, 3, t, 3, 2); cout << s << endl; // ������� � ����� s ��������� � 2 �������, ������ 3 �������, ������� �
														 // � ����� t - ���.3, ����.2 �������
	s = s0; s.replace(2, 3, t, 2, 9); cout << s << endl; // ������� � ����� s ��������� � 2 �������, ������ 3 �������, ������� �
														 // � ����� t - ���.2, ����.9 �������
	

	// ��в������ STRINGS   -   l < r = -1  ;  l = r = 0  ;  l > r = 1
	s = "01234", t = "43210"; string u = "0123432100";
	cout << "\nstring s = " << s << ", string t = " << t << ", string u = " << u << endl;
	cout << "s.compare(t): " << s.compare(t) << endl; //��������� s �� t, s < t ==> -1
	cout << "t.compare(s): " << t.compare(s) << endl; //��������� t �� s, t > s ==> 1
	cout << "s.compare(s): " << s.compare(s) << endl; //��������� s �� s, s = s ==> 0
	cout << "s.compare(u): " << s.compare(u) << endl; //��������� s �� u, s < u ==> -1
	cout << "u.compare(s): " << u.compare(s) << endl; //��������� u �� s, u > s ==> 1

	cout << "u.compare(0, 5, s): " << u.compare(0, 5, s) << endl; //��������� ������ 5 ������� (���.0) u �� s, 01234 = 01234 ==> 0
	cout << "s.compare(0, 5, u): " << s.compare(0, 5, u) << endl; //��������� ������ 5 ������� (���.0) s �� u, 01234 < 0123432100 ==> -1
	cout << "u.compare(4, 4, t): " << u.compare(4, 4, t) << endl; //��������� ������ 4 ������� (���.4) u �� t, 3210 < 43210 ==> -1
	cout << "u.compare(4, 5, t): " << u.compare(4, 5, t) << endl; //��������� ������ 5 ������� (���.3) u �� t, 43210 < 43210 ==> 0
	cout << "u.compare(4, 2, t, 0, 2): " << u.compare(4, 2, t, 0, 2) << endl; //���. ������ 2 ����.(���.4) u �� ������ 2 ����(���.0) t:
																			  //43=43 ==> 0

	// COPY - ��������� �������???
	char c[10];
	string str1("abcdef");
	size_t lenth = str1.copy(c, 2, 4); 
	// c[length] = '\0'; doesn't work ????


	// EMPTY() - �������� �� ���������
	string str2 = "";
	cout << "\nstring str2 = " << str2 << "; str2.empty() = " << str2.empty() << endl; // empty() = 1 ���� ������, 0 - ���� ��������
		if (str2.empty()) {
			cout << "String is empty!" << endl;
			}


	// RESIZE
	string str3("abcderf");						cout << "\nstring str3 = " << str3 << endl;
	str3.resize(str3.size()+2, '-');			cout << "string str3 = " << str3 << endl; //������ ����� �� 2, �������� �������� "-"
	str3.resize(10);			cout << "string str3 = " << str3 << endl; // ������ ����� �� 10 �������, �� �������� ������ �������
	str3.resize(4);				cout << "string str3 = " << str3 << endl; // ������ ����� �� 4 �������, ������� ����
	
	
	// SWAP
	string s3 = "01234", t3 = "43210";				cout << "\nstring s3 = " << s3 << ", string t3 = " << t3 << endl;
	s3.swap(t3); /* ������ s3 � t3 */				cout << "string s3 = " << s3 << ", string t3 = " << t3 << endl;


	// FIND_FIRST_OF - ����� ������� ������� � �����
	string s4 = "01234567890123456789", t4 = "abc654";			cout << "\nstring s4 = " << s4 << ", string t4 = " << t4 << endl;
	cout << s4.find_first_of(t4) << endl; // ��������� ������ ������ � s4 ����-����� ������� � t4 (4 �� ������� 4)
	cout << s4.find_first_of(t4, 11) << endl; // ��������� ������ ������ � s4, ��������� � 11����., ����-����� ������� � t4 (4 �� ������� 14)
	char ch4[10] = "abc654";                                     cout << "char ch4[10] = " << ch4 << endl;
	cout << s4.find_first_of(ch4, 11, 5) << endl; // ��������� ������ ������ � s4, ��������� � 11����., ����-����� ������� � ������ 5
												 // ������� �h4  (5 �� ������� 15)
	char c4 = '9';												cout << "char c4 = " << c4 << endl;
	cout << s4.find_first_of(c4) << endl; // ��������� ������ ������ � s4 ������� �4 (9 �� ������� 9)


	// FIND_LAST_OF - ����� ���������� ������� � �����
	string s5 = "01234567890123456789", t5 = "abc654";			cout << "\nstring s5 = " << s5 << ", string t5 = " << t5 << endl;
	cout << s5.find_last_of(t5) << endl; // ��������� ������� ������ � s5 ����-����� ������� � t5 (6 �� ������� 16)
	cout << s5.find_last_of(t5, 11) << endl; // ��������� ������ ������ � ���� � s5, ��������� � 11�������
											 // ����-����� ������� � t5 (6 �� ������� 6)
	char ch5[10] = "abc456";										cout << "char ch5[10] = " << ch5 << endl;
	cout << s5.find_last_of(ch5, 11, 5) << endl; // ��������� ������ ������ � s5, ��������� � 11������� � ����������� ��������,
												 // ����-����� ������� � ������ 5 ������� �h5  (5 �� ������� 5)
	char c5 = '9';												cout << "char c5 = " << c5 << endl;
	cout << s5.find_last_of(c5) << endl; // ��������� ������ ������ � ���� � s5 ������� �5 (9 �� ������� 19)


	// FIND_FIRST_NOT_OF - ����� ������� ���������� ������� � �����
	string s6 = "01234567890123456789", t6 = "abc654";			cout << "\nstring s6 = " << s6 << ", string t6 = " << t6 << endl;
	cout << s6.find_first_not_of(t6) << endl; // ��������� ������� ������� ������� � s6, ������� ���� � t6 (0 �� ������� 0)
	cout << s6.find_first_not_of(t6, 11) << endl; // ��������� ������� ������� ������� � s6 (���.� 11), ���� ���� � t6 (1 �� ������� 11)
	char ch6[10] = "abc456";										cout << "char ch6[10] = " << ch6 << endl;
	cout << s6.find_first_not_of(ch6, 4, 4) << endl; // ������ ������ � s6 (���.� 4) ���� ���� ����� 1��� 4 � ch6 (5 �� ������� 5)
	char c6 = '0';													cout << "char c6 = " << c6 << endl;
	cout << s6.find_first_not_of(c6) << endl; // ������ ������ � s6 �� �� � �6 (1 �� ������� 1)


	// FIND_LAST_NOT_OF - ����� ������� � ���� ���������� ������� � �����
	string s7 = "01234567890123456789", t7 = "abc654";			cout << "\nstring s7 = " << s7 << ", string t7 = " << t7 << endl;
	cout << s7.find_last_not_of(t7) << endl; // ��������� ������� ���������� ������� � s7, ������� ���� � t7 (9 �� ������� 19)
	cout << s7.find_last_not_of(t7, 16) << endl; // ��������� ������� ���������� ������� � s7 (� 16�� ������� � ����������� ��������),
												 // ������� ���� � t7 (3 �� ������� 13)
	char ch7[10] = "abc654";										cout << "char ch7[10] = " << ch7 << endl;
	cout << s7.find_last_not_of(ch7, 16, 5) << endl; // ��������� ������� ���������� ������� � s7 (� 16�� ������� � ����������� ��������),
												     // ������� ���� ����� ������ 5 ������� ch7 (4 �� ������� 14)


	// FIND, RFIND - ����� ��������� �����, find - � �������, rfind - � ����
	string s8 = "01234567890123456789", t8 = "345", u8="abc";
												cout << "\nstring s8 = " << s8 << ", string t8 = " << t7 << ", string u8 = " << u8 << endl;
	cout << s8.find(t8) << endl; // ����� ��������� t8(345) � s8 (� 3�� �������)
	cout << s8.find(t8, 5) << endl; // ����� ��������� t8(345) � s8, ��������� � 5������� (� 13�� �������)
	cout << s8.find(t8, 15) << endl; // ����� ��������� t8(345) � s8, ��������� � 15������� (����, ������ �����)
	cout << s8.find(u8) << endl; // ����� ��������� u8(abc) � s8 (����, ������ �����)
	cout << s8.rfind(t8) << endl; // ������ ��������� t8(345) � s8 (� 13�� �������)
	cout << s8.rfind(t8, 12) << endl; // ������ ��������� t8(345) � s8, ���.� 12 ������� � ����.������� (� 3�� �������)
	cout << s8.rfind(t8, 2) << endl; // ������ ��������� t8(345) � s8, ���.� 2 ������� � ����.������� (����, ������ �����)
	cout << s8.rfind(u8) << endl; // ������ ��������� u8(abc) � s8 (����, ������ �����)
	char ch8[10] = "abc345";										cout << "char ch8[10] = " << ch7 << endl;
	// cout << ch8.find(t8) << endl; -- � �-type �� ������
	string strch8 = ch8;											cout << "strch8 = " << strch8 << endl;
	cout << strch8.find(t8) << endl; // ����� ���������� t8(345) � strch8 (abc345) - (� 3 �������)
	cout << strch8.find(u8, 0) << endl; // ����� ���������� u8(abc) � strch8 (abc345) - (� 0 �������)
	return 0;
}