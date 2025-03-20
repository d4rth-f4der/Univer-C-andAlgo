#include <iostream>
#include <vector>
using namespace std;

int getNegativeQtyInColumn(const vector<vector<int>>& matrix, int column) {
	int count = 0;
	for (int i = 0; i < matrix.size(); ++i) {
		if (matrix[i][column] < 0) {
			++count;
		}
	}
	return count;
}

int getNegativeQtyInColumns_recursively(const vector<vector<int>>& matrix, int column, int row = 0) {
	if (row == matrix.size()) return 0;
	else {
		if (matrix[row][column] < 0) {
			return 1 + getNegativeQtyInColumns_recursively(matrix, column, row + 1);
		}
		else {
			return getNegativeQtyInColumns_recursively(matrix, column, row + 1);
		}
	}
}

void printNegativesInColumns(const vector<vector<int>>& matrix) {
	for (int i = 0; i < matrix[0].size(); ++i) {
		cout << "Column " << i << ": " << getNegativeQtyInColumn(matrix, i) << " negative elements" << endl;
	}
}

void printNegativesInColumns_recursively(const vector<vector<int>>& matrix, int column) {
	if (column == matrix[0].size()) return;
	else {
		cout << "Column " << column << ": " << getNegativeQtyInColumns_recursively(matrix, column) << " negative elements" << endl;
		printNegativesInColumns_recursively(matrix, column + 1);
	}
}

int main() {
	vector<vector<int>> matrix = {
		{ 13, -3, 6, 1, -8 },
		{ 11, 4, -7, 9, 2 },
		{ -5, 15, -10, 3, 10 },
		{ -1, 12, -2, 5, 14 },
		{ -6, 8, -4, 7, -9 }
	};

	printNegativesInColumns(matrix);
	cout << "\nNow using recursion: " << endl;
	printNegativesInColumns_recursively(matrix, 0);

	return 0;
}