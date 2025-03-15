#include <iostream>
#include <string>
#include <fstream>
using namespace std;

struct Library {
	string name;
	string city;
	string books[5];
	int members;
	int rating;
};

void print_liblist(Library* list, int ent_qty) {
	for (int i = 0; i < ent_qty; ++i) {
		cout << list[i].name << ", " << list[i].city << ", books: ";
		for (int j = 0; j < 5; ++j) {
			if (!list[i].books[j].empty()) {
				cout << list[i].books[j] << ", ";
			}
		}
		cout << list[i].members << " members, rating: " << list[i].rating << endl;
	}
}

void fout_liblistLETTER(Library* list, int ent_qty, string filename, char let) {    // записує динамічний масив в файл поч.з літери
	ofstream outFile(filename);
	cout << "\nwriting to file " << filename << endl;
	outFile << ent_qty << endl;
	for (int i = 0; i < ent_qty; ++i) {
		if (list[i].name[0] == let) {
			outFile << list[i].name << " " << list[i].city << " ";
			for (int j = 0; j < 5; ++j) {
				if (!list[i].books[j].empty()) {
					outFile << list[i].books[j] << " ";
				}
			}
			outFile << " " << list[i].members << " " << list[i].rating << endl;
		}
		
	}
	outFile.close();
}

void fout_liblist(Library* list, int ent_qty, string filename) {    // записує динамічний масив в файл
	ofstream outFile(filename);
	cout << "\nwriting to file " << filename << endl;
	outFile << ent_qty << endl;
	for (int i = 0; i < ent_qty; ++i) {
		outFile << list[i].name << " " << list[i].city << " ";
		for (int j = 0; j < 5; ++j) {
			if (!list[i].books[j].empty()) {
				outFile << list[i].books[j] << " ";
			}
		}
		outFile << " " << list[i].members << " " << list[i].rating << endl;
	}
	outFile.close();
}

Library* fin_crARR_liblist(string filename) {	// загоняє в динамічний масив дані з файлу
	cout << "\nLoading from: " << filename << endl;
	int afqty;
	ifstream inFile(filename);
	inFile >> afqty;
	Library* list = new Library[afqty];
	for (int i = 0; i < afqty; ++i) {
		inFile >> list[i].name >> list[i].city;
		for (int j = 0; j < 5; ++j) {
			if (!list[i].books[j].empty()) {
				inFile >> list[i].books[j];
			}
		}
		inFile >> list[i].members >> list[i].rating;
		inFile.ignore();
		inFile.close();
		return list;
	}
}

int prinlist_moreRate(Library* list, int ent_qty, int tresh) {            // Кількість бібліотек з більш.рейтингом
	int qtymore = 0;
	for (int i = 0; i < ent_qty; ++i) {
		if (list[i].rating > tresh) {
			qtymore += 1;
		}
	}
	return qtymore;
}

int prinAVGread(Library* list, int ent_qty) {            // Кількість бібліотек з більш.рейтингом
	int readqty = 0;
	for (int i = 0; i < ent_qty; ++i) {
		readqty += list[i].members;
	}
	return readqty/ent_qty;
}

void print_startletter(Library* list, int ent_qty, char let) {      // Вивод з літери
	for (int i = 0; i < ent_qty; ++i) {
		if (list[i].name[0] == let) {
			cout << list[i].name << ", " << list[i].city << ", books: ";
			for (int j = 0; j < 5; ++j) {
				if (!list[i].books[j].empty()) {
					cout << list[i].books[j] << ", ";
				}
			}
			cout << list[i].members << " members, rating: " << list[i].rating << endl;
		}
	}
}

void sort_Booksqty(Library* list, int ent_qty) {

}

int main() {
	int libqty = 5;
	Library* liblist = new Library[libqty] {
		{ "Library1","City1",{"Book1","Book2"},500,100},
		{ "Library2","City1",{"Book3","Book4","Book5","Book6"},800,90 },
		{ "Library3","City2",{"Book7","Book8","Book9","Book10","Book11"},900,95 },
		{ "Library4","City1",{"Book12","Book13","Book14","Book15"},600,80 },
		{ "Library5","City1",{"Book16","Book17","Book18","Book15"},550,70 }
	};

	print_liblist(liblist, libqty);
	fout_liblist(liblist, libqty, "Libraries.txt");
	cout << "Libraries with rating more than 90: " << prinlist_moreRate(liblist, libqty, 90);
	cout << "\nAverage members : " << prinAVGread(liblist, libqty);
	cout << "\nStarting from L:\n"; print_startletter(liblist, libqty, 'L');
	cout << "\nStarting from O:\n"; print_startletter(liblist, libqty, 'O');
	fout_liblistLETTER(liblist, libqty, "LibrariesLetterL.txt", 'L');

	Library* newlist = fin_crARR_liblist("Libraries.txt");
	print_liblist(newlist, libqty);

	return 0;
}