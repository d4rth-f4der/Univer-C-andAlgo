#include <iostream>
#include <vector>
#include <queue>
#include <stack>

using namespace std;

struct Node {
	int data;	// значення вузла
	vector<Node*> children;		// вектор дітей вузла
	Node(int value) : data(value) {}	// конструктор вписує value в data при створенні вузла - eg Node(1)
	~Node() {		// деструктор для видалення дітей при знищенні вузла
		for (Node* child : children) { // перебір всіх дітей вузла
			delete child;		// рекурсивно видаляємо кожну дитину дитини
		}
		children.clear();	// очищаємо вектор дітей
	}
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
	queue<Node*> q;		// черга із вказівників на тип Node
	q.push(root);		// додаємо корінь до черги

	while (!q.empty()) {
		Node* current = q.front(); q.pop();		// беремо значення зпереду черги і видаляємо цей вузол
		if (current->data % 2 == 0 && current->data > 10)   // перевірка на умову
			count++;
		for (Node* child : current->children)		// всі діти поточного вузла додаються до черги
			q.push(child);
	}
	return count;
}

//Обхід у глибину - Depth First Search (DFS) — через стек(ітеративний спосіб)
int countEvenGreaterThan10_DFS_Iterative(Node* root) {
	if (!root) return 0;

	int count = 0;
	stack<Node*> s;		// Створюємо стек показників на вузли
	s.push(root);       // додаємо корінь до стека

	while (!s.empty()) {
		Node* current = s.top(); s.pop();	// беремо значення зверху стека і видаляємо цей вузол
		if (current->data % 2 == 0 && current->data > 10)	// перевірка на умову
			count++;
		// У зворотному порядку!!! - щоб ліві діти опрацьовувались першими
		for (auto it = current->children.rbegin(); it != current->children.rend(); ++it)  // rbegin() - початок з кінця
																		// автоматипізована ітерація по вектору з кінця
			s.push(*it);		 // діти додаються до стека задом наперед, щоб потім обробляти їх у правильному порядку
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
