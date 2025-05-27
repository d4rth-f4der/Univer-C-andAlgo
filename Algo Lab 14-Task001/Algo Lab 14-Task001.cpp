// Всі рівні обходу звичайного дерева (в глибину та в ширину)
#include <iostream>
#include <vector>
#include <string>
#include <queue>
#include <stack>

struct Tree_node {
	std::string data;
	std::vector<Tree_node*> children;

	Tree_node(const std::string& value) : data(value) {}

	~Tree_node() {
		for (Tree_node* child : children) {
			delete child;
		}
		children.clear();
	}
};

void print_tree_DFS_recursive_preorder(Tree_node* node) {
	if (!node) return;

	std::cout << node->data << ' ';

	for (Tree_node* child : node->children)
		print_tree_DFS_recursive_preorder(child);
}

void print_tree_DFS_recursive_postorder(Tree_node* node) {
	if (!node) return;

	for (Tree_node* child : node->children)
		print_tree_DFS_recursive_postorder(child);

	std::cout << node->data << ' ';
}

void print_tree_BFS_queue(Tree_node* node) {
	if (!node) return;

	std::queue<Tree_node*> q;
	q.push(node);

	while (!q.empty()) {
		Tree_node* current = q.front();
		std::cout << current->data << ' ';
		q.pop();

		for (Tree_node* child : current->children)
			q.push(child);
	}
}

void print_tree_DFS_iterative(Tree_node* node) {
	if (!node) return;

	std::stack<Tree_node*> s;
	s.push(node);

	while (!s.empty()) {
		Tree_node* current = s.top();
		std::cout << current->data << ' ';
		s.pop();

		for (auto it = current->children.rbegin(); it != current->children.rend(); ++it)
			s.push(*it);
	}
}

int main() {
	Tree_node* my_tree_root = new Tree_node("a0");

	my_tree_root->children.push_back(new Tree_node("b0"));
	my_tree_root->children.push_back(new Tree_node("b1"));
	my_tree_root->children.push_back(new Tree_node("b2"));
	my_tree_root->children[0]->children.push_back(new Tree_node("c0"));
	my_tree_root->children[0]->children.push_back(new Tree_node("c1"));
	my_tree_root->children[0]->children.push_back(new Tree_node("c2"));
	my_tree_root->children[1]->children.push_back(new Tree_node("c3"));
	my_tree_root->children[1]->children[0]->children.push_back(new Tree_node("d0"));
	my_tree_root->children[1]->children.push_back(new Tree_node("c4"));
	my_tree_root->children[2]->children.push_back(new Tree_node("c5"));
	my_tree_root->children[2]->children.push_back(new Tree_node("c6"));

	std::cout << "Обхід вглибину (рекурсія, preorder: вузол->діти): ";
	print_tree_DFS_recursive_preorder(my_tree_root);
	std::cout << "\nОбхід вглибину (рекурсія, postorder: діти->вузол): ";
	print_tree_DFS_recursive_postorder(my_tree_root);
	std::cout << "\nОбхід вширину (через queue): ";
	print_tree_BFS_queue(my_tree_root);
	std::cout << "\nОбхід вглибину (ітеративно через стек): ";
	print_tree_DFS_iterative(my_tree_root);
	std::cout << std::endl;

	delete my_tree_root;
	return 0;
}