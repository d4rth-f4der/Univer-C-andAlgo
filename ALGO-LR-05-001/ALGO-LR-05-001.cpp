#include <iostream>
#include <string>
#include <vector>
using namespace std;

int findFirstIndexOfElement(const vector<int> &array, int element) {
	for (int i = 0; i < array.size(); ++i) {
		if (array[i] == element) return i;
	}
	return -1;
}

int findFirstIndexRecursively(const vector<int>& array, int element, int index) {
	if (array[index] == element) return index;
	else if (index < array.size() - 1) return findFirstIndexRecursively(array, element, index + 1);
	return -1;
}

int main() {
	vector<int> v = { 0, -5, 7, 1, 8, 9, 3, 2, 7, 1, 7 };
	int element;
	cout << "input element to search: ";
	cin >> element;

	int indexOfEl = findFirstIndexOfElement(v, element);

	int indexRecursive = findFirstIndexRecursively(v, element, 0);

	if (indexOfEl == -1) cout << "No such element";
	else cout << "first index of element " << element << " is " << indexOfEl << endl;

	if (indexRecursive == -1) cout << "\nNo such element (recursively)";
	else cout << "\nfirst index of element (recursively) " << element << " is " << indexRecursive << endl;

	return 0;
}