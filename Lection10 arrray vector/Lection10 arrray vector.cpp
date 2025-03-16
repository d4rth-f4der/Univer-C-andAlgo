#include <iostream>
#include <array>
#include <string>

// Масиви std::array


std::array<int, 5>arr1{ 2,3,5 }, arr2 = { 2,4 }; // arr1: 2,3,5,0,0      arr2: 2,4,0,0,0
std::array<float, 4> arr3;


int main() {
	for (int i = 0; i < 4; ++i) {
		std::cout << arr3[i];
	}
}