/* ����������� ������ #8
������ 31

������� ��������� Event � ������:
name, date, location, type, attendees.
��� ������������ ���� ����������� � ����.

- ������� � ���� ��䳿 ������� ���� (type)
- ��������� ������� ������� ��������
- ������� ��䳿, ����� ���� ���������� �� ����� F. */

#include <iostream>
#include <string>
#include <fstream>
using namespace std;

struct Date {
	int year;
	int month;
	int day;
};

struct Event {
	string name;
	Date date;
	string location;
	string type;
	int attendees;
};

void print_struct(Event* list, int entr_qty) {    // �������� �� ����� ��������� ����� � ���'��
	cout << "\ncontents of dynamic array:\n";
	for (int i = 0; i < entr_qty; ++i) {
		Event e = list[i];
		cout << e.name << ", " << e.date.year << "/" << e.date.month << "/" << e.date.day << ", "
			<< e.location << ", " << e.type << ", " << e.attendees << " attendants" << endl;
	}
}

void fout_struct(Event* list, int entr_qty, string filename) {    // ������ ��������� ����� � ����
	ofstream outFile(filename);
	cout << "\nwriting to file " << filename << endl;
	outFile << entr_qty << endl;
	for (int i = 0; i < entr_qty; ++i) {
		Event e = list[i];
		outFile << e.name << ": " << e.date.year << ' ' << e.date.month << ' ' << e.date.day << ' '
			<< e.location << ": " << e.type << ' ' << e.attendees << endl;
		cout << "writing: "
			<< e.name << ": " << e.date.year << ' ' << e.date.month << ' ' << e.date.day << ' '
			<< e.location << ": " << e.type << ' ' << e.attendees << endl;
	}
	outFile.close();
}

void fout_typed(Event* list, int entr_qty, string type, string filename) {    // ������ ����� �������� ��� ���� � ����
	int typeqty = 0;
	for (int i = 0; i < entr_qty; ++i) {
		if (list[i].type == type) typeqty += 1;
	}
	cout << "\nmatches with '" << type << "' found: " << typeqty << endl;
	ofstream outFile(filename);
	cout << "writing to file " << filename << endl;
	outFile << typeqty << endl;
	for (int i = 0; i < entr_qty; ++i) {
		if (list[i].type == type) {
			Event e = list[i];
			outFile << e.name << ": " << e.date.year << ' ' << e.date.month << ' ' << e.date.day << ' '
				<< e.location << ": " << e.type << ' ' << e.attendees << endl;
			cout << "writing: "
				<< e.name << ": " << e.date.year << ' ' << e.date.month << ' ' << e.date.day << ' '
				<< e.location << ": " << e.type << ' ' << e.attendees << endl;
		}
	}
	outFile.close();
}

void fout_EventLetter(Event* list, int entr_qty, char letter, string filename) {   // ������ ����� ��䳿, �� �����������
	int letqty = 0;																   // �� ������ �����
	for (int i = 0; i < entr_qty; ++i) {
		if (list[i].name[0] == letter) letqty += 1;
	}
	cout << "\nmatches with '" << letter << "' found: " << letqty << endl;
	ofstream outFile(filename);
	cout << "writing to file " << filename << endl;
	outFile << letqty << endl;
	for (int i = 0; i < entr_qty; ++i) {
		if (list[i].name[0] == letter) {
			Event e = list[i];
			outFile << e.name << ": " << e.date.year << ' ' << e.date.month << ' ' << e.date.day << ' '
				<< e.location << ": " << e.type << ' ' << e.attendees << endl;
			cout << "writing: "
				<< e.name << ": " << e.date.year << ' ' << e.date.month << ' ' << e.date.day << ' '
				<< e.location << ": " << e.type << ' ' << e.attendees << endl;
		}
	}
	outFile.close();
}

int get_entryQTY(string filename) {			// ���� � ����� ������� ����� �������
	int afqty;
	ifstream inFile(filename);
	inFile >> afqty;
	inFile.close();
	return afqty;
}

Event* createARR_fromFile(string filename) {	// ������� � ��������� ����� ��� � �����
	cout << "\nLoading from: " << filename << endl;
	int afqty;
	ifstream inFile(filename);
	inFile >> afqty;
	Event* list = new Event[afqty];
	for (int i = 0; i < afqty; ++i) {
		getline(inFile, list[i].name, ':');
		inFile >> list[i].date.year >> list[i].date.month >> list[i].date.day;
		getline(inFile, list[i].location, ':');
		inFile >> list[i].type >> list[i].attendees;
		inFile.ignore();
	}
	inFile.close();
	return list;
}

void attendAVG_fromFile(string filename) {  // ���� ������� ����������� � �����
	int afqty;
	ifstream inFile(filename);
	inFile >> afqty;
	Event* list = new Event[afqty];
	float attendsum = 0;
	cout << "\naverage attendees in list " << filename << ": ";
	for (int i = 0; i < afqty; ++i) {
		getline(inFile, list[i].name, ':');
		inFile >> list[i].date.year >> list[i].date.month >> list[i].date.day;
		getline(inFile, list[i].location, ':');
		inFile >> list[i].type >> list[i].attendees;
		inFile.ignore();
		attendsum += list[i].attendees;
		cout << list[i].attendees << " + ";
	}
	cout << " / " << afqty << " = " << attendsum / afqty << endl;
	inFile.close();
}

int main() {
	int afisha_qty = 5;                // �������� ���
	Event* afisha = new Event[afisha_qty]{
		{"Foo Fighters", {2024,12,12}, "Palats Ukraina","concert",12540},
		{"Yolka", {2024,12,31}, "Kyiv, Sofyiska square","family",25000},
		{"Vsi svoi", {2024,12,18}, "Andriivsky yzviz, 5, Kyiv","christmas_fare",15000},
		{"Ocean Elzy", {2024,12,19}, "Palats Sportu","concert",19500},
		{"Santa's party", {2024,12,25}, "Kraina mriy, Golosiyvky avenue","family", 7000}
	};

	fout_struct(afisha, afisha_qty, "eventlist.txt");   // ����� ����� � ����
	delete[]afisha;
	
	Event* loadlist = createARR_fromFile("eventlist.txt");   // ������������ � ��������� ����� ����� � �����
	print_struct(loadlist, get_entryQTY("eventlist.txt"));
	
	fout_typed(loadlist, get_entryQTY("eventlist.txt"), "concert", "concertlist.txt");  // ��������� ����� � ��������
	loadlist = createARR_fromFile("concertlist.txt");									// ���� ���� "�������"
	print_struct(loadlist, get_entryQTY("concertlist.txt"));
	
	attendAVG_fromFile("eventlist.txt");							// ������� �����������, � ���������� �����
	
	loadlist = createARR_fromFile("eventlist.txt");				 
	fout_EventLetter(loadlist, get_entryQTY("eventlist.txt"), 'Y', "Teventlist.txt");  // ��������� ����� � �������� ����,
	loadlist = createARR_fromFile("Teventlist.txt");								   // �� ����������� �� ����� "Y"
	print_struct(loadlist, get_entryQTY("Teventlist.txt"));

	delete[] loadlist;
	return 0;
}