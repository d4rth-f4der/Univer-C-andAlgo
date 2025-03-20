#include <iostream>
#include <vector>
using namespace std;

void printVectorValues(const vector<int>& arr) {
	for (int i = 0; i < arr.size(); ++i) {
		cout << arr[i] << " ";
	}
	cout << endl;
}

int get_multiplied_els(const vector<int>& arr) {
	if (arr.empty()) return -1;
	else if (arr.size() == 1) return arr[0];
	else {
		int result = arr[0];
		for (int i = 1; i < arr.size(); ++i) {
			result *= arr[i];
		}
		return result;
	}
}

int get_multiplied_els_recursively(const vector<int>& arr, int index = 0, int result = 1) {
	if (arr.empty()) return -1;
	else if (index == arr.size()) {
		return result;
	}
	else {
		return get_multiplied_els_recursively(arr, index + 1, result * arr[index]);
	}
}

int main() {
	vector<int> v = { 1, 6, 3, -3, 8, 4, 11, 8, 5 };

	cout << "Vector values: ";
	printVectorValues(v);
	int result = get_multiplied_els(v);
	if (result == -1) cout << "No elements in vector";
	else cout << "Result of multiplication: " << result << endl;
	
	int resultRecursive = get_multiplied_els_recursively(v);
	if (resultRecursive == -1) cout << "No elements in vector";
	else cout << "Result of multiplication (recursively): " << resultRecursive << endl;

	return 0;
}