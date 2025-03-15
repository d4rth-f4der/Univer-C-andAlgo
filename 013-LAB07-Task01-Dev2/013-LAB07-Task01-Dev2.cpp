#include <iostream>
#include <windows.h>
#include <cmath>
#include <string>
#include <iomanip>
using namespace std;
//����������� 7 ��в��� 31

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
    companycout << "����� ������: " << t.name << ". ";
    // companycout.width(20);
    companycout << "����� �����: " << fixed << setprecision(0) << t.annualRevenue << " USD/year. �������: ";
    for (int i = 0; i < 5; ++i) {
        if (!t.projects[i].empty()) {
            companycout << t.projects[i] << ", ";
        }
    }
    // companycout.width(30);
    companycout << "�������: " << t.location << endl;
    return companycout;
}
int main() {
    SetConsoleOutputCP(1251);
    // ʳ������ �������
    const int numCompanies = 3;
    Company companies[numCompanies];

    cout << "������ ��� ��� " << numCompanies << " �������:" << endl;
    for (int i = 0; i < numCompanies; i++) {
        cout << "������� " << i + 1 << ":" << endl;
        cout << "�����: ";
        getline(cin, companies[i].name);
        cout << "г���� �����: ";
        cin >> companies[i].annualRevenue;
        cin.ignore();
        cout << "�������: ";
        getline(cin, companies[i].location);

        // �������� �������
        cout << "������ ����� ������� (��� 'n' ��� ����������):" << endl;
        string project;
        int j = 0;
        while (j < 5) {
            cout << "������ " << j + 1 << ": ";
            getline(cin, project);
            if (project == "n") {
                break;
            }
            companies[i].projects[j] = project;
            j++;
        }
        // �������� �����
        cout << "������ (Software, Hardware, AI): ";
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
            cout << "������� �������� �����";
            break;
        }
    }
    for (int i = 0; i < numCompanies; ++i) {
        cout << companies[i];
    }
}