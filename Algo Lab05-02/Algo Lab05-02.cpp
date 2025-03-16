#include <iostream>
#include <vector>
using namespace std;

void printVectorValues(const vector<int>& arr) {
	for (int i = 0; i < arr.size(); ++i) {
		cout << arr[i] << " ";
	}
	cout << endl;
}

int findMaxElement(const vector<int>& arr) {
    if (arr.empty()) return -1;
    else if (arr.size() == 1) return 0;
    else {
        int maxIndex = 0;
        for (int i = 1; i < arr.size(); ++i) {
            if (arr[i] > arr[maxIndex]) {
                maxIndex = i;
            }
        }
        return maxIndex;
    }
}

int findMaxElementRecursive(const vector<int>& arr, int index = 0, int maxIndex = 0) {
	if (arr.empty()) return -1;
	else if (index == arr.size()) {
		return maxIndex;
	}
	else if (arr[index] > arr[maxIndex]) {
		return findMaxElementRecursive(arr, index + 1, index);
	}
	else {
		return findMaxElementRecursive(arr, index + 1, maxIndex);
	}
}

void removeMaxElement(vector<int>& arr) {
	if (arr.empty()) return;
	else if (arr.size() == 1) {
		arr.pop_back();
		return;
	}
	else {
		int maxIndex = findMaxElement(arr);
		arr.erase(arr.begin() + maxIndex);
	}
}

void removeMaxElementRecursive(vector<int>& arr) {
	if (arr.empty()) return;
	else if (arr.size() == 1) {
		arr.pop_back();
		return;
	}
	else {
		int maxIndex = findMaxElementRecursive(arr);
		arr.erase(arr.begin() + maxIndex);
	}
}

int main() {
    vector<int> v = { 0, -5, 7, 1, 8, 9, 3, 2, 7, 1, 7 };
	cout << "Initial vector: ";
	printVectorValues(v);
	cout << "Max element index: " << findMaxElement(v) << endl;
	removeMaxElement(v);
	cout << "Vector after removing max element: ";
	printVectorValues(v);
	cout << "Max element index (recursive): " << findMaxElementRecursive(v) << endl;
	removeMaxElementRecursive(v);
	cout << "Vector after removing max element (recursive): ";
	printVectorValues(v);
	return 0;
}