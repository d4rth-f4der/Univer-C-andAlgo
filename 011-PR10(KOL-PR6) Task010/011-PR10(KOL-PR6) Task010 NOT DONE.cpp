#include <iostream>
using namespace std;

enum Cathedra{NSIIT, CYBERSEC, TELECOM, MGMT};

struct onlineclass {
	string teacher_Fname;
	Cathedra cathedra;
	int year;
	int month;
	int day;
	string topic;
	string discipline;
	int attendqty;
	int SThours;
	int STminutes;
	int durationmins;
};

void fun_OUTclasslist()(onlineclass* classlist, int lsize) {
	cout << "strange";
}

int main() {
	onlineclass cl_list[]{
		{"John Smith", NSIIT, 2024, 12, 10, "Inside the Matrix", "Software Development", 30, 7, 59, 121},
		{"Peter Parker", NSIIT, 2024, 12, 10, "C++ on the fligh", "Software Development", 8, 8, 01, 110},
		{"Freddie Croeger", CYBERSEC, 2024, 12, 11, "Deep infiltration", "Cybersecurity", 16, 9, 45, 115}
	};

	return 0;
}