#include <iostream>
#include <windows.h>
#include <cmath>
#include <string>
#include <iomanip>
using namespace std;
//ЛАБОРАТОРНА 7 ВАРІАНТ 31

enum Industry { Software, Hardware, AI };

struct Company {
    string name;
    double annualRevenue;
    string location;
    string projects[5];
    Industry industry;
};
ostream& operator <<(ostream& companycout, Company t)
{
    // companycout.width(15);
    companycout << "Назва компанії: " << t.name << ". ";
    // companycout.width(20);
    companycout << "річний дохід: " << fixed << setprecision(0) << t.annualRevenue << " USD/year. Проекти: ";
    for (int i = 0; i < 5; ++i) {
        if (!t.projects[i].empty()) {
            companycout << t.projects[i] << ", ";
        }
    }
    // companycout.width(30);
    companycout << "Локація: " << t.location << endl;
    return companycout;
}
int main() {
    SetConsoleOutputCP(1251);
    // Кількість компаній
    const int numCompanies = 3;
    Company companies[numCompanies];

    cout << "Введіть дані про " << numCompanies << " компаній:" << endl;
    for (int i = 0; i < numCompanies; i++) {
        cout << "Компанія " << i + 1 << ":" << endl;
        cout << "Назва: ";
        getline(cin, companies[i].name);
        cout << "Річний дохід: ";
        cin >> companies[i].annualRevenue;
        cin.ignore();
        cout << "Локація: ";
        getline(cin, companies[i].location);

        // Введення проектів
        cout << "Введіть назви проектів (або 'n' для завершення):" << endl;
        string project;
        int j = 0;
        while (j < 5) {
            cout << "Проект " << j + 1 << ": ";
            getline(cin, project);
            if (project == "n") {
                break;
            }
            companies[i].projects[j] = project;
            j++;
        }
        // Введення галузі
        cout << "Галузь (Software, Hardware, AI): ";
        string industryStr;
        getline(cin, industryStr);
        if (industryStr == "Software") {
            companies[i].industry = Software;
        }
        else if (industryStr == "Hardware") {
            companies[i].industry = Hardware;
        }
        else if (industryStr == "AI") {
            companies[i].industry = AI;
        }
        else {
            cout << "Помилка введення даних";
            break;
        }
    }
    for (int i = 0; i < numCompanies; ++i) {
        cout << companies[i];
    }
}