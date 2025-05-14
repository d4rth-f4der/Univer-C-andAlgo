#include <iostream>
#include <deque>
#include <string>
using namespace std;

struct Truck {
	int id;
	string model;
	string manufacturer;
	int loadCapacity;
	string route;
	string driverName;
};

void print_truck_deque(deque<Truck> truck_dq) {
	while (!truck_dq.empty()) {
		Truck cur_truck = truck_dq.front();
		cout << "ID: " << cur_truck.id << ". Model: " << cur_truck.model << ", manufacturer: "
			<< cur_truck.manufacturer << ", load cap: " << cur_truck.loadCapacity
			<< ", route: " << cur_truck.route << ", driver: " << cur_truck.driverName << endl;
		truck_dq.pop_front();
	}
}

void print_trucks_manufactured_by(deque<Truck> truck_dq, string manuf) {
	cout << "\nTrucks of manufacturer '" << manuf << "':\n";
	while (!truck_dq.empty()) {
		Truck cur_truck = truck_dq.front();
		if (cur_truck.manufacturer == manuf) {
			cout << "ID: " << cur_truck.id << ". Model: " << cur_truck.model
				<< ", manufacturer: " << cur_truck.manufacturer << ", load cap: " << cur_truck.loadCapacity
				<< ", route: " << cur_truck.route << ", driver: " << cur_truck.driverName << endl;
		}
		truck_dq.pop_front();
	}
}

float get_avg_load_cap(deque<Truck> truck_dq) {
	if (truck_dq.empty()) return 0;

	int trucks_qty = truck_dq.size();
	int total_load = 0;
	while (!truck_dq.empty()) {
		Truck cur_truck = truck_dq.front();
		total_load += cur_truck.loadCapacity;
		truck_dq.pop_front();
	}
	return static_cast<float>(total_load) / trucks_qty;
}

void print_trucks_model_first_letter(deque<Truck> truck_dq, char letter) {
	cout << "\nTrucks of models starting on '" << letter << "':\n";
	while (!truck_dq.empty()) {
		Truck cur_truck = truck_dq.front();
		if (cur_truck.model[0] == letter) {
			cout << "ID: " << cur_truck.id << ". Model: " << cur_truck.model
				<< ", manufacturer: " << cur_truck.manufacturer << ", load cap: " << cur_truck.loadCapacity
				<< ", route: " << cur_truck.route << ", driver: " << cur_truck.driverName << endl;
		}
		truck_dq.pop_front();
	}
}

int main() {
	deque<Truck> trucks;

	trucks.push_back({ 1, "RX-7", "Hunta", 1120, "Kyiv", "Petia" });
	trucks.push_back({ 2, "Cadillo", "Fererro", 2100, "Lviv", "Vasia" });
	trucks.push_back({ 3, "MX-13", "Hunta", 1560, "Lviv", "Kolia" });
	trucks.push_back({ 4, "T-1000", "Buhatti", 2515, "Cherkasy", "Slava" });

	cout << "Contents of deque 'trucks' is:\n";
	print_truck_deque(trucks);

	print_trucks_manufactured_by(trucks, "Hunta");

	cout << "\nAverage load capacity: " << get_avg_load_cap(trucks) << endl;
	
	print_trucks_model_first_letter(trucks, 'M');

	return 0;
}