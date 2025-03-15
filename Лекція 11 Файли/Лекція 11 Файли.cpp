#include <iostream>
#include <stdio.h>
#include <fstream>

int main(void)
{
	FILE* in, * out;
	setlocale(LC_CTYPE, "ukr");
	char filename[50] = "C:\\ДУІКТ\\Прог\\Lect1_files\\Test01.txt";
	if (fopen_s(&in, filename, "rt") != 0) {
		std::cout << "Не можу вiдкрити файл для читання\n";
		return 1;
	}
	// std::fstream isopen;
}




