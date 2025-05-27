#include <iostream>
#include <queue>

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

// Обходи бінарного дерева пошуку

void print_DFS_preorder(Node* node) {
	if (!node) return;

	std::cout << node->data << ' ';

	print_DFS_preorder(node->left);
	print_DFS_preorder(node->right);
}

void print_DFS_postorder(Node* node) {
	if (!node) return;

	print_DFS_postorder(node->left);
	print_DFS_postorder(node->right);

	std::cout << node->data << ' ';
}

void print_BFS_queue(Node* node) {
	if (!node) return;

	std::queue<Node*> q;
	q.push(node);
	while (!q.empty()) {
		Node* current = q.front();
		std::cout << current->data << ' ';
		q.pop();
		if (current->left) q.push(current->left);
		if (current->right) q.push(current->right);
	}
}

void print_inorder(Node* root) {
	if (!root) return;
	print_inorder(root->left);
	cout << root->data << " ";
	print_inorder(root->right);
}

int countNodes(Node* root) {
	if (root == NULL) return 0;
	else {
		int count = 1;
		count += countNodes(root->left);
		count += countNodes(root->right);
		return count;
	}
}

bool tree_search(Node* root, int item)
{
	Node* runner;
	runner = root;
	while (root) {
		if (runner == NULL) return false;
		if (item == runner->data) return true;
		if (item < runner->data)
			runner = runner->left;
		else
			runner = runner->right;
	}
}

bool search_recursive(Node* root, int key)
{
	if (!root) return false;
	if (root->data == key) return true;
	return key < root->data ? search_recursive(root->left, key) : search_recursive(root->right, key);
}

// Додавання вузла за алгоритмом бінарного дерева пошуку

Node* insert(Node* root, int key) {
	if (!root) return new Node(key);
	if (key < root->data)
		root->left =
		insert(root->left, key);
	else
		// уникаємо дублікатів
		if (key > root->data)
			root->right =
			insert(root->right, key);
	return root;
}

// Видалення самого правого вузла

Node* deleteRightmost(Node* root) {
	if (!root) return nullptr;
	if (!root->right) {
		// Якщо у вузла немає правого нащадка, це і є самий правий вузол
		Node* leftChild = root->left;
		delete root;
		return leftChild;
	}
	// Рекурсивно йдемо вправо
	root->right = deleteRightmost(root->right);
	return root;
}

// Видалення вузла за значенням

Node* deleteNode(Node* root, int key) {
	if (!root) return nullptr;
	if (key < root->data) {
		root->left = deleteNode(root->left, key);
	}
	else if (key > root->data) {
		root->right = deleteNode(root->right, key);
	}
	else {
		// Вузол знайдено
		if (!root->left && !root->right) {
			delete root;
			return nullptr;
		}
		else if (!root->left) {
			Node* temp = root->right;
			delete root;
			return temp;
		}
		else if (!root->right) {
			Node* temp = root->left;
			delete root;
			return temp;
		}
		else {
			// Два нащадки: шукаємо мінімальний у правому піддереві
			Node* minNode = root->right;
			while (minNode->left) minNode = minNode->left;
			root->data = minNode->data;
			root->right = deleteNode(root->right, minNode->data);
		}
	}
	return root;
}

// додає новий вузол зі значенням N після першого вузла зі значенням K (у порядку обходу в глибину)

void insert_after_inorder(Node* root, int K, int N) {
	if (!root) return;
	if (root->data == K) {
		// Якщо правий син вільний — просто додаємо
		if (!root->right) {
			root->right = new Node(N);
		}
		else {
			// Йдемо у праве піддерево і шукаємо найлівіший вузол
			Node* curr = root->right;
			while (curr->left) {
				curr = curr->left;
			}
			curr->left = new Node(N);
		}
		return;
	}
	insert_after_inorder(root->left, K, N);
	insert_after_inorder(root->right, K, N);
}

// Варіант 30 - Визначити кількість листів в дереві. Використовувати обхід в ширину
int count_leaves_bfs(Node* root) {
	if (!root) return 0;
	int leaf_count = 0;
	std::queue<Node*> q;
	q.push(root);
	while (!q.empty()) {
		Node* current = q.front();
		q.pop();
		if (!current->left && !current->right) {
			++leaf_count;
		}
		if (current->left) q.push(current->left);
		if (current->right) q.push(current->right);
	}
	return leaf_count;
}

// Додаткове 1 - Знайти ширину дерева
int tree_width(Node* root) {
	if (!root) return 0;
	int max_width = 0;
	std::queue<Node*> q;
	q.push(root);
	while (!q.empty()) {
		int level_width = q.size();
		if (level_width > max_width)
			max_width = level_width;
		for (int i = 0; i < level_width; ++i) {
			Node* current = q.front();
			q.pop();
			if (current->left) q.push(current->left);
			if (current->right) q.push(current->right);
		}
	}
	return max_width;
}

// Додаткове 2 - Знайти висоту дерева
int tree_height(Node* root) {
	if (!root) return 0;
	int left_height = tree_height(root->left);
	int right_height = tree_height(root->right);
	return 1 + std::max(left_height, right_height);
}

// Додаткове 3 - Виконати балансування дерева

// Збираємо всі значення у відсортований масив
void store_inorder(Node* root, std::vector<int>& vals) {
	if (!root) return;
	store_inorder(root->left, vals);
	vals.push_back(root->data);
	store_inorder(root->right, vals);
}

// Рекурсивно будуємо збалансоване дерево з відсортованого масиву
Node* build_balanced_tree(const std::vector<int>& vals, int start, int end) {
	if (start > end) return nullptr;
	int mid = (start + end) / 2;
	Node* node = new Node(vals[mid]);
	node->left = build_balanced_tree(vals, start, mid - 1);
	node->right = build_balanced_tree(vals, mid + 1, end);
	return node;
}

// Основна функція балансування
Node* balance_tree(Node* root) {
	std::vector<int> vals;
	store_inorder(root, vals);
	return build_balanced_tree(vals, 0, vals.size() - 1);
}

int main() {

	std::srand(std::time(0));
	Node* root = nullptr;
	int n_qty = 25;
	std::cout << "Вставлені числа (в порядку генерації): ";

	for (int i = 0; i < n_qty; ++i) {
		int num = rand() % 20;
		std::cout << num << " ";
		root = insert(root, num);
	}

	std::cout << "\nобхід дерева вглибину (корінь->діти): ";
	print_DFS_preorder(root);

	std::cout << "\nобхід дерева вглибину (діти->корінь): ";
	print_DFS_postorder(root);

	std::cout << "\nКількість вузлів: " << countNodes(root);

	std::cout << "\n\n_обхід дерева по рівням - зліва направо: ";
	print_BFS_queue(root);
	
	std::cout << "\n_Відсортований вивод дерева (лівий->вершина->правий): ";
	print_inorder(root);

	std::cout << "\n_Кількість листків у дереві (обхід вширину): " << count_leaves_bfs(root);
	std::cout << "\n_Ширина дерева: " << tree_width(root);
	std::cout << "\n_Висота дерева: " << tree_height(root);
	std::cout << "\n\n+++Балансування дерева... ";
	root = balance_tree(root);
	std::cout << "\n_обхід дерева по рівням - зліва направо: ";
	print_BFS_queue(root);
	std::cout << "\n_Відсортований вивод дерева (лівий->вершина->правий): ";
	print_inorder(root);
	std::cout << "\n_Кількість листків у дереві (обхід вширину): " << count_leaves_bfs(root);
	std::cout << "\n_Ширина дерева: " << tree_width(root);
	std::cout << "\n_Висота дерева: " << tree_height(root);

	std::cout << "\n\nПошук елементу 7: " << std::boolalpha << tree_search(root, 7);
	std::cout << "\nПошук елементу 13 (рекурсивно): " << std::boolalpha << search_recursive(root, 13);

	std::cout << "\nВидалення самого правого (більшого) вузла: ";
	deleteRightmost(root);

	std::cout << "\nВідсортований вивод дерева після видалення: ";
	print_inorder(root);

	std::cout << "\nВидалення елементу 7....";
	deleteNode(root, 7);

	std::cout << "\nВідсортований вивод дерева після видалення: ";
	print_inorder(root);

	

	int K, N;
	std::cout << "\n\nВведіть К: ";
	cin >> K;
	std::cout << "Введіть N: ";
	cin >> N;
	std::cout << "додавання після першого вузла зі значенням ключа K вузол зі значенням ключа N...";

	insert_after_inorder(root, K, N);
	std::cout << "\nВідсортований вивод дерева після додавання: ";
	print_inorder(root);
	std::cout << endl;

	

	return 0;
}