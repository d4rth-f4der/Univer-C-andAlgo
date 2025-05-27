// Індивідуальне - варіант 30
// Перевірити чи всі значення парні, прямий обхід

#include <iostream>
#include <vector>
#include <queue>

struct Node {
	int data;
	std::vector<Node*> children;
	Node(int value) : data(value) {}
	~Node() {
		for (Node* child : children) {
			delete child;
		}
		children.clear();
	}
};

bool if_all_even_DFS(Node* node) {
	if (!node || node->data % 2 != 0) return false;

	for (Node* child : node->children) {
		if (!if_all_even_DFS(child)) return false;
	}

	return true;
}

bool if_all_even_BFS(Node* node) {
	if (!node || node->data % 2 != 0) return false;

	std::queue<Node*> q;
	q.push(node);

	while (!q.empty()) {
		Node* current = q.front(); q.pop();
		if (current->data % 2 != 0) return false;
		for (Node* child : current->children)
			q.push(child);
	}

	return true;
}

int main() {
	Node* root_1 = new Node(12);

	root_1->children.push_back(new Node(5));
	root_1->children.push_back(new Node(18));
	root_1->children.push_back(new Node(7));
	root_1->children[1]->children.push_back(new Node(22));
	root_1->children[1]->children.push_back(new Node(11));

	Node* root_2 = new Node(6);
	root_2->children.push_back(new Node(10));
	root_2->children.push_back(new Node(6));
	root_2->children.push_back(new Node(12));
	root_2->children[0]->children.push_back(new Node(22));
	root_2->children[1]->children.push_back(new Node(14));

	std::cout << "Чи всі парні в дереві з коренем root_1 (DFS): ";
	std::cout << std::boolalpha << if_all_even_DFS(root_1);
	std::cout << "\nЧи всі парні в дереві з коренем root_2 (DFS): ";
	std::cout << std::boolalpha << if_all_even_DFS(root_2) << std::endl;
	std::cout << "Чи всі парні в дереві з коренем root_1 (BFS): ";
	std::cout << std::boolalpha << if_all_even_BFS(root_1);
	std::cout << "\nЧи всі парні в дереві з коренем root_2 (BFS): ";
	std::cout << std::boolalpha << if_all_even_BFS(root_2) << std::endl;

	return 0;
}