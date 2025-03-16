#include <iostream>
#include <string>
#include <cmath>
using namespace std;

int octalToDecimal(const string& octal, int power = 0) {
    if (octal.empty()) return 0;

    char lastDigit = octal.back();
    int digitValue = lastDigit - '0';
    string remainingOctal = octal.substr(0, octal.length() - 1);
    return digitValue * pow(8, power) + octalToDecimal(remainingOctal, power + 1);
}

int main() {
    string octalNumber;
    cout << "Input octal number: ";
    cin >> octalNumber;
    int decimalNumber = octalToDecimal(octalNumber);
    cout << "Decimal number: " << decimalNumber << std::endl;
    return 0;
}