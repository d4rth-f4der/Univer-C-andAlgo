// Всі рівні обходу бінарного дерева (в глибину та в ширину)
#include <iostream>
#include <vector>
#include <string>
#include <queue>
#include <stack>

struct B_tree_node {
	B_tree_node* left;
	std::string data;
	B_tree_node* right;

	B_tree_node(const std::string& value) {
		data = value;
		left = right = nullptr;
	}

	~B_tree_node() {
		delete left;
		delete right;
	}
};

void print_B_tree_DFS_recursive_preorder(B_tree_node* node) {
	if (!node) return;

	std::cout << node->data << ' ';

	print_B_tree_DFS_recursive_preorder(node->left);
	print_B_tree_DFS_recursive_preorder(node->right);
}

void print_B_tree_DFS_recursive_postorder(B_tree_node* node) {
	if (!node) return;

	print_B_tree_DFS_recursive_postorder(node->left);
	print_B_tree_DFS_recursive_postorder(node->right);

	std::cout << node->data << ' ';
}

void print_B_tree_inorder_left_node_right(B_tree_node* node) {
	if (!node) return;

	print_B_tree_inorder_left_node_right(node->left);
	std::cout << node->data << ' ';
	print_B_tree_inorder_left_node_right(node->right);
}

void print_B_tree_BFS_queue(B_tree_node* node) {
	if (!node) return;

	std::queue<B_tree_node*> q;
	q.push(node);
	while (!q.empty()) {
		B_tree_node* current = q.front();
		std::cout << current->data << ' ';
		q.pop();
		if (current->left) q.push(current->left);
		if (current->right) q.push(current->right);
	}
}

void print_B_tree_DFS_iterative(B_tree_node* node) {
	if (!node) return;

	std::stack<B_tree_node*> s;
	s.push(node);
	while (!s.empty()) {
		B_tree_node* current = s.top();
		s.pop();
		std::cout << current->data << ' ';
		if (current->right) s.push(current->right);
		if (current->left) s.push(current->left);
	}
}

int main() {
	B_tree_node* root = new B_tree_node("a");
	root->left = new B_tree_node("b0");
	root->right = new B_tree_node("b1");
	root->left->left = new B_tree_node("c0");
	root->left->right = new B_tree_node("c1");
	root->right->left = new B_tree_node("c2");
	root->right->right = new B_tree_node("c3");
	root->left->left->left = new B_tree_node("d0");
	root->left->left->right = new B_tree_node("d1");
	root->left->right->left = new B_tree_node("d2");
	root->left->right->right = new B_tree_node("d3");
	root->right->left->left = new B_tree_node("d4");
	root->right->left->right = new B_tree_node("d5");
	root->right->right->left = new B_tree_node("d6");
	root->right->right->right = new B_tree_node("d7");

	std::cout << "DFS Preorder: ";
	print_B_tree_DFS_recursive_preorder(root);
	std::cout << "\nDFS Postorder: ";
	print_B_tree_DFS_recursive_postorder(root);
	std::cout << "\nInorder (left-node-right): ";
	print_B_tree_inorder_left_node_right(root);
	std::cout << "\nBFS Queue: ";
	print_B_tree_BFS_queue(root);
	std::cout << "\nDFS Iterative (stack, preorder): ";
	print_B_tree_DFS_iterative(root);
	std::cout << std::endl;

	delete root;
	return 0;
}