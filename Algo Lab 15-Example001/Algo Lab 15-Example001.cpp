#include <iostream>
#include <string>
#include <cstdlib>
#include <queue>
#include <stack>

using namespace std;

struct Node {
	int data;
	Node* left;
	Node* right;
	Node(int value) {
		data = value;
		left = nullptr;
		right = nullptr;
	}
};

//Прямий обхід (pre-order)
int countEvenGreaterThan10_PreOrder(Node* root) {
	if (!root) return 0;
	int count = (root->data % 2 == 0 && root->data > 10) ? 1 : 0;
	return count +
		countEvenGreaterThan10_PreOrder(root->left) +
		countEvenGreaterThan10_PreOrder(root->right);
}
//Симетричний обхід (in-order)
int countEvenGreaterThan10_InOrder(Node* root) {
	if (!root) return 0;
	return countEvenGreaterThan10_InOrder(root->left) +
		((root->data % 2 == 0 && root->data > 10) ? 1 : 0) +
		countEvenGreaterThan10_InOrder(root->right);
}
//Зворотній обхід (post-order)
int countEvenGreaterThan10_PostOrder(Node* root) {
	if (!root) return 0;
	return countEvenGreaterThan10_PostOrder(root->left) +
		countEvenGreaterThan10_PostOrder(root->right) +
		((root->data % 2 == 0 && root->data > 10) ? 1 : 0);
}
//Обхід у ширину (рівнево, BFS)
int countEvenGreaterThan10_BFS(Node* root) {
	if (!root) return 0;
	int count = 0;
	queue<Node*> q;
	q.push(root);
	while (!q.empty()) {
		Node* curr = q.front();
		q.pop();
		if (curr->data % 2 == 0 && curr->data > 10)
			count++;
		if (curr->left) q.push(curr->left);
		if (curr->right) q.push(curr->right);
	}
	return count;
}

int main() {
	Node* root = new Node(15);

	root->left = new Node(8);
	root->right = new Node(20);
	root->left->left = new Node(3);
	root->left->right = new Node(12);
	root->right->left = new Node(18);
	root->right->right = new Node(30);

	cout << "Pre-order count: " << countEvenGreaterThan10_PreOrder(root) << endl;
	cout << "In-order count: " << countEvenGreaterThan10_InOrder(root) << endl;
	cout << "Post-order count: " << countEvenGreaterThan10_PostOrder(root) << endl;
	cout << "BFS count: " << countEvenGreaterThan10_BFS(root) << endl;

	return 0;
}