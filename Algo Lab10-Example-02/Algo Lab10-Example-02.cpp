#include <iostream>
#include <string>
#include <list>
/*
l.begin()	- вказівник на початок списку l
l.end()		- вказівник на кінець списку l
l.rbegin()	- вказівник на кінець списку l (реверсний)
l.rend()	- вказівник на початок списку l (реверсний)
l.empty()	- перевірка на пустоту списку l
l.push_front(e)		- вставка елемента e на початок списку
l.pop_front()		- видалення елемента з початку списку
l.push_back(e)		- вставка елемента e на кінець списку
l.pop_back()		- видалення елемента з кінця списку
l.front()			- перший елемент списку
l.back()			- останній елемент списку
l.insert(it, e)		- вставка елемента e перед ітератором it
l.erase(j,k)		- видалення елементів з j до k
*/

using namespace std;

void printList(const list<int>& l) {
	cout << "List elements: ";
	for (const auto& elem : l) {
		cout << elem << " ";
	}
	cout << "\n----------------------------------" << endl;
}

void main() {
	list<int> l;
	cout << "Is list empty? " << (l.empty() ? "Yes" : "No") << endl;

	l.push_back(10);
	l.push_back(20);
	l.push_back(30);
	printList(l);

	cout << "First element: " << l.front() << endl;
	cout << "Last element: " << l.back() << endl;

	auto it = l.begin();
	cout << "First element via l.begin(): " << *it << endl;
	cout << "First element via l.front(): " << l.front() << endl;
	auto it_end = l.end();
	--it_end;
	cout << "Last element via l.end()-1: " << *it_end << endl;

	cout << "\nInsertion of first element via l.push_front()" << endl;
	l.push_front(50);
	printList(l);
	cout << "Deletion of first element via l.pop_front()" << endl;
	l.pop_front();
	printList(l);

	cout << "List elements in reverse order:" << endl;
	for (auto rit = l.rbegin(); rit != l.rend(); ++rit) {
		cout << *rit << " ";
	}
	cout << endl;

	it = l.begin();
	advance(it, 1); // insertion after the first element
	l.insert(it, 40);
	cout << "\nResult of insertion of 40 after the first element:" << endl;
	printList(l);

	l.pop_back();
	cout << "Result of deletion of the last element (pop_back):" << endl;
	printList(l);

	auto start = l.begin();
	auto end = start;
	advance(start, 0); // start starting from +0 position
	advance(end, 2); // moving end from start to 2nd position
	l.erase(start, end);
	cout << "After deletion of elements from 0 to 2: (erase)" << endl;
	printList(l);

	cout << "Is the list empty in the end? " << (l.empty() ? "Yes" : "No") << endl;
}