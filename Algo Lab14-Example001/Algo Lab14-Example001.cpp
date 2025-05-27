#include <iostream>
#include <string>
#include <queue>
#include <stack>

using namespace std;

struct Node {
	int data;	// значення вузла
	vector<Node*> children;		// вектор дітей вузла
	Node(int value) : data(value) {}	// конструктор
};

//Обхід у глибину - Depth First Search (DFS) — рекурсивно(прямий обхід, pre - order)
int countEvenGreaterThan10_DFS(Node* node) {	// Підрахунок парних чисел більше 10
	if (!node) return 0;

	int count = 0;
	if (node->data % 2 == 0 && node->data > 10)
		count++;
	for (Node* child : node->children)			// перебір дітей в векторі сhildren
		count += countEvenGreaterThan10_DFS(child);		// рекурсивний виклик для кожної дитини
	return count;
}

//Обхід у ширину - Breadth First Search (BFS) — через чергу
int countEvenGreaterThan10_BFS(Node* root) {
	if (!root) return 0;

	int count = 0;
	queue<Node*> q;
	q.push(root);

	while (!q.empty()) {
		Node* current = q.front(); q.pop();
		if (current->data % 2 == 0 && current->data > 10)
			count++;
		for (Node* child : current->children)
			q.push(child);
	}
	return count;
}

//Обхід у глибину - Depth First Search (DFS) — через стек(ітеративний спосіб)
int countEvenGreaterThan10_DFS_Iterative(Node* root) {
	if (!root) return 0;

	int count = 0;
	stack<Node*> s;
	s.push(root);
	while (!s.empty()) {
		Node* current = s.top(); s.pop();
		if (current->data % 2 == 0 && current->data > 10)
			count++;
		// У зворотному порядку, щоб ліві діти опрацьовувались першими
		for (auto it = current->children.rbegin(); it != current->children.rend();
			++it)
			s.push(*it);
	}
	return count;
}
int main() {
	Node* root = new Node(12);
	root->children.push_back(new Node(5));
	root->children.push_back(new Node(18));
	root->children.push_back(new Node(7));
	root->children[1]->children.push_back(new Node(22));
	root->children[1]->children.push_back(new Node(11));
	cout << "DFS (рекурсія): " << countEvenGreaterThan10_DFS(root) << endl;
	cout << "BFS (черга): " << countEvenGreaterThan10_BFS(root) << endl;
	cout << "DFS (стек): " << countEvenGreaterThan10_DFS_Iterative(root) << endl;
	return 0;
}
