/*
Lab 10 variant 30

Виконання з використанням списків list:
*/
#include <iostream>
#include <string>
#include <list>

using namespace std;

struct Truck {
	int id;
	string model;
	string manufacturer;
	int loadCapacity;
	string route;
	string driverName;
	Truck* next;
	Truck* prev;
};

void printTruck(const Truck& tr) {
	cout << "ID: " << tr.id << ", Model: " << tr.model << ", Manufacturer: " << tr.manufacturer
		<< ", Load Capacity: " << tr.loadCapacity << ", Route: " << tr.route
		<< ", Driver Name: " << tr.driverName << endl;
}

void printTrucksList(const list<Truck>& trucks) {
	cout << "\nList of trucks:\n";
	for (const auto& tr : trucks) {
		printTruck(tr);
	}
}

void printByManufacturer(const list<Truck>& trucks, const string& manufacturer) {
	cout << "\nTrucks by manufacturer: " << manufacturer << ":\n";
	for (const auto& tr : trucks) {
		if (tr.manufacturer == manufacturer) {
			printTruck(tr);
		}
	}
}

float averageLoadCapacity(const list<Truck>& trucks) {
	if (trucks.empty()) return 0;

	int totalLoad = 0;

	for (const auto& tr : trucks) {
		totalLoad += tr.loadCapacity;
	}
	return static_cast<float>(totalLoad) / trucks.size();
}

void printByModelLetter(const list<Truck>& trucks, char letter) {
	cout << "\nTrucks with model starting with " << letter << ":\n";
	for (const auto& tr : trucks) {
		if (tr.model[0] == letter) {
			printTruck(tr);
		}
	}
}

void insertTruckAt(list<Truck>& trucks, const Truck& newTruck, int position) {
	auto it = trucks.begin();
	advance(it, min(position, (int)trucks.size())); // Ensure position is within bounds
	trucks.insert(it, newTruck);
}

void deleteTruckFromPosition(list<Truck>& trucks, int position) {
	if (position < 0 || position >= trucks.size()) return;

	auto it = trucks.begin();
	advance(it, position);
	trucks.erase(it);
}

void deleteList(list<Truck>& trucks) {
	trucks.clear();
}

int main() {
	list<Truck> trucks;
	Truck t1 = { 1, "RX-7", "Hunta", 1120, "Kyiv", "Petia" };
	Truck t2 = { 2, "Cadillo", "Fererro", 2100, "Lviv", "Vasia" };
	Truck t3 = { 3, "MX-13", "Hunta", 1560, "Lviv", "Kolia" };
	Truck t4 = { 4, "T-1000", "Buhatti", 2515, "Cherkasy", "Slava" };

	trucks.push_back(t1);
	trucks.push_back(t2);
	trucks.push_back(t3);
	trucks.push_back(t4);

	printTrucksList(trucks);

	printByManufacturer(trucks, "Hunta");

	cout << "\nAverage Load Capacity: " << averageLoadCapacity(trucks) << endl;

	printByModelLetter(trucks, 'M');

	Truck t5 = { 5, "M-100", "Hunta", 3000, "Kyiv", "Oleg" };
	cout << "\n*****Inserting a new truck after node 2:\n";
	insertTruckAt(trucks, t5, 2);
	printTrucksList(trucks);

	cout << "\n*****Deleting truck after node 1:\n";
	deleteTruckFromPosition(trucks, 1);
	printTrucksList(trucks);

	deleteList(trucks);

	if (trucks.empty()) {
		cout << "\nThe list is empty. All nodes have been deleted successfully." << endl;
	}
	else {
		cout << "\nThe list is not empty. Deletion failed." << endl;
	}

	return 0;
}