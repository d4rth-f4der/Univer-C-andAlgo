#include <iostream>
#include <vector>
using namespace std;

void removeMaxIterative(vector<int>& arr) {
    if (arr.empty()) return;

    if (arr.size() == 1) {
        arr.pop_back();
        return;
    }

    int maxIndex = 0;
    for (int i = 1; i < arr.size(); ++i) {
        if (arr[i] > arr[maxIndex]) {
            maxIndex = i;
        }
    }

    arr.erase(arr.begin() + maxIndex);
}

void removeMaxRecursive(vector<int>& arr) {
    if (arr.empty()) return;

    if (arr.size() == 1) {
        arr.pop_back();
        return;
    }

    int maxIndex = 0;
    for (int i = 1; i < arr.size(); ++i) {
        if (arr[i] > arr[maxIndex]) {
            maxIndex = i;
        }
    }

    arr.erase(arr.begin() + maxIndex);
    removeMaxRecursive(arr);
}