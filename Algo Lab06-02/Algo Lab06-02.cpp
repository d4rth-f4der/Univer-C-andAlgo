#include <iostream>
#include <vector>
using namespace std;

void printVectorValues(const vector<int>& arr) {
	for (int i = 0; i < arr.size(); ++i) {
		cout << arr[i] << " ";
	}
	cout << endl;
}

void deleteAllPositiveElements(vector<int>& arr) {
	if (arr.empty()) return;
	else {
		for (int i = 0; i < arr.size(); ++i) {
			if (arr[i] > 0) {
				arr.erase(arr.begin() + i);
				--i;
			}
		}
	}
}

void deleteAllPositiveRecursively(vector<int>& arr, int index = 0) {
	if (arr.empty()) return;
	else if (index == arr.size()) return;
	else {
		if (arr[index] > 0) {
			arr.erase(arr.begin() + index);
			deleteAllPositiveRecursively(arr, index);
		}
		else {
			deleteAllPositiveRecursively(arr, index + 1);
		}
	}
}

int main() {
	vector<int> v = { 1, 6, 3, -3, -8, 4, 0, -12, 5 };
	cout << "Vector values: ";
	printVectorValues(v);

	deleteAllPositiveElements(v);
	cout << "Vector values after deleting all positive elements: ";
	printVectorValues(v);

	vector<int> v2 = { 1, 6, 3, -3, -6, 4, 15, -8, 5 };
	cout << "Vector values: ";
	printVectorValues(v2);

	deleteAllPositiveRecursively(v2);
	cout << "Vector values after deleting all positive elements (recursively): ";
	printVectorValues(v2);
	return 0;
}