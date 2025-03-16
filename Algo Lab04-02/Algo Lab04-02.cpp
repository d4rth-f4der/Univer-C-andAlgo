#include <iostream>
#include <string>
using namespace std;

int compareStrings(const string& str1, const string& str2, int endIndex, int index = 0) {
    if (index == endIndex) {
        return 0;
    }

    if (str1.length() <= index && str2.length() <= index) {
        return 0;
    }

    if (str1.length() <= index || str2.length() <= index) {
        return 1;
    }

    if (str1[index] != str2[index]) {
        return 1;
    }

    return compareStrings(str1, str2, endIndex, index + 1);
}

int main() {
    string str1, str2;
    int endIndex;

    cout << "Input first line: ";
    getline(cin, str1);

    cout << "Input second line: ";
    getline(cin, str2);

    cout << "Input quantity of symbols to compare: ";
    cin >> endIndex;

    int result = compareStrings(str1, str2, endIndex);

    if (result == 0) {
        if (str1.length() < endIndex && str2.length() < endIndex && str1 == str2) {
            cout << "\nStrings are equal but shorter than " << endIndex << " symbols" << endl;
        }
        else {
            cout << "\nStrings are the same up to " << endIndex << " symbols" << endl;
        }
    }
    else {
        std::cout << "\nStrings are !NOT! equal up to " << endIndex << " symbols" << endl;
    }

    return 0;
}