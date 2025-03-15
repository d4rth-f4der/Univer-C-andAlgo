#include <iostream>
#include <string>
using namespace std;

enum Priority {LOW, MEDIUM, HIGH};

struct Date {
	int year;
	int month;
	int day;
};

struct Note {
	string text;
	Date date;
	Priority priority;
};

void Custf_Printstructlist(Note* notes, int entriesqty) {
	for (int i = 0; i < entriesqty; ++i) {
		Note s = notes[i];
		string prio;
		if (s.priority == 0) prio = "LOW";
		else if (s.priority == 1) prio = "MEDIUM";
		else if (s.priority == 2) prio = "HIGH";
		cout << s.text << "\n (" << s.date.year << "/" << s.date.month << "/" << s.date.day << "), priority: " << prio << endl;
	}
}

void Custf_PrintSelect(Note* notes, int entriesqty, Date custdate, int custp) {
	int flag = 0;
	for (int i = 0; i < entriesqty; ++i) {
		Note s = notes[i];
		if ((s.date.year == custdate.year) && (s.date.month == custdate.month) && (s.date.day == custdate.day)
			&& s.priority == custp) {
			string prio;
			if (s.priority == 0) prio = "LOW";
			else if (s.priority == 1) prio = "MEDIUM";
			else if (s.priority == 2) prio = "HIGH";
			cout << s.text << "\n (" << s.date.year << "/" << s.date.month << "/" << s.date.day
				<< "), priority: " << prio << endl;
			flag = 1;
		}
	}
	if (flag == 0) cout << "No entries found.\n";
}

int main() {
	Note nlist1[]{
		{"Today is a good day!",{2024,12,8}, MEDIUM},
		{ "Should go shopping in the evening",{2024,12,8}, LOW },
		{ "Having a ton to do for tomorrow!",{2024,12,8}, HIGH },
		{ "It's a good idea to make a to-buy list",{2024,12,8}, LOW },
		{ "Have to check work messenger and spreadsheets",{2024,12,8}, HIGH },
		{ "It's only Monday and I'm already tired",{2024,12,9}, LOW },
		{ "Why's it already dark outside?",{2024,12,9}, LOW },
		{ "Moving out to find a coat", {2024,12,9}, HIGH },
		{ "Gonna need to count expences today", {2024,12,9}, MEDIUM},
		{ "Why did I get up so early?", {2024,12,10}, LOW}
	};
	Custf_Printstructlist(nlist1, size(nlist1));

	Date custdate;
	int priority;
	cout << "\nInput year: ";
	cin >> custdate.year;
	cout << "Input month: ";
	cin >> custdate.month;
	cout << "Input day: ";
	cin >> custdate.day;
	cout << "Input priority (0-low, 1-medium, 2-high): ";
	cin >> priority;
	cout << endl;

	Custf_PrintSelect(nlist1, size(nlist1), custdate, priority);

	return 0;
}