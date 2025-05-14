/* 
Lab 10 variant 30

	������� ��������� Truck � ������: model, manufacturer, loadCapacity, route, driverName.

	�������� 1:
		- ������� ��������� ������� ���������;
		- ������ ������� ���������������� ���������;
		- ������� ���������, ������ ���� ���������� �� ����� M;

	2. ����������� ��������� �������, ��������� ������ � �������, �������� ������.

	��������� � ������������� �����'������ ������:
*/

#include <iostream>
#include <string>
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

void addTruck(Truck*& head, Truck*& tail, int id, string model, string manufact, int loadCap, string route, string driverName) {
	Truck* newTruck = new Truck{ id, model, manufact, loadCap, route, driverName, nullptr, tail };
	if (!head) head = tail = newTruck;
	else {
		tail->next = newTruck;
		tail = newTruck;
	}
}

void printTrucks(Truck* head) {
	cout << "\nList of trucks:\n";
	Truck* temp = head;
	while (temp) {
		cout << "ID: " << temp->id << ", Model: " << temp->model << ", Manufacturer: " << temp->manufacturer
			<< ", Load Capacity: " << temp->loadCapacity << ", Route: " << temp->route
			<< ", Driver: " << temp->driverName << endl;
		temp = temp->next;
	}
}

void filterByManufacturer(Truck* head, string manufact) {
	Truck* temp = head;
	cout << "\nTrucks by manufacturer: " << manufact << ":\n";
	while (temp) {
		if (temp->manufacturer == manufact)
			cout << "ID: " << temp->id << ", Model: " << temp->model
			<< ", Load Capacity: " << temp->loadCapacity << ", Route: " << temp->route
			<< ", Driver: " << temp->driverName << endl;
		temp = temp->next;
	}
}

float averageLoadCapacity(Truck* head) {
	if (!head) return 0;

	int totalLoad = 0, count = 0;
	Truck* temp = head;

	while (temp) {
		totalLoad += temp->loadCapacity;
		count++;
		temp = temp->next;
	}

	return static_cast<float>(totalLoad) / count;
}

void filterByModelLetter(Truck* head, char letter) {
	Truck* temp = head;
	cout << "\nTrucks with model starting with " << letter << ":\n";
	while (temp) {
		if (temp->model[0] == letter)
			cout << "ID: " << temp->id << ", Model: " << temp->model
			<< ", Manufacturer: " << temp->manufacturer
			<< ", Load Capacity: " << temp->loadCapacity
			<< ", Route: " << temp->route
			<< ", Driver Name: " << temp->driverName << endl;
		temp = temp->next;
	}
}

void insertAt(Truck*& head, Truck*& tail, Truck newTruckData, int N) {
	Truck* newNode = new Truck{ newTruckData.id, newTruckData.model, newTruckData.manufacturer,
		newTruckData.loadCapacity, newTruckData.route, newTruckData.driverName, nullptr, nullptr };
	if (N <= 0 || !head) {
		// Insert at beginning
		newNode->next = head;
		if (head) head->prev = newNode;
		head = newNode;
		if (!tail) tail = newNode;
		return;
	}

	Truck* temp = head;
	int index = 0;

	while (temp && index < N - 1) {
		temp = temp->next;
		index++;
	}

	if (!temp) {
		// Insert at the end
		tail->next = newNode;
		newNode->prev = tail;
		tail = newNode;
		return;
	}

	newNode->next = temp->next;
	newNode->prev = temp;

	if (temp->next) temp->next->prev = newNode;
	else tail = newNode; // If insert at end

	temp->next = newNode;
}

void deleteTruckFromPosition(Truck*& head, Truck*& tail, int N) {
	if (!head || N < 0) return;

	Truck* temp = head;
	int index = 0;

	while (temp && index < N) {
		temp = temp->next;
		index++;
	}

	if (!temp) return; // Position out of bounds
	if (temp->prev) temp->prev->next = temp->next;
	else head = temp->next; // Deleting the first node
	if (temp->next) temp->next->prev = temp->prev;
	else tail = temp->prev; // Deleting the last node
	delete temp;
}

void deleteList(Truck*& head) {
	Truck* temp;
	while (head) {
		temp = head;
		head = head->next;
		delete temp;
	}
}

int main() {
	Truck* head = nullptr;
	Truck* tail = nullptr;

	addTruck(head, tail, 1, "RX-7", "Hunta", 1120, "Kyiv", "Petia");
	addTruck(head, tail, 2, "Cadillo", "Fererro", 2100, "Lviv", "Vasia");
	addTruck(head, tail, 3, "MX-13", "Hunta", 1560, "Lviv", "Kolia");
	addTruck(head, tail, 4, "T-1000", "Buhatti", 2515, "Cherkasy", "Slava");

	printTrucks(head);

	filterByManufacturer(head, "Hunta");
	cout << "\nAverage Load Capacity: " << averageLoadCapacity(head) << endl;
	

	filterByModelLetter(head, 'M');

	Truck newTruck = { 5, "M-100", "Hunta", 3000, "Kyiv", "Oleg" };
	cout << "\n*****Inserting a new truck after node 2:\n";
	insertAt(head, tail, newTruck, 2);
	printTrucks(head);

	deleteList(head);

	if (head == nullptr) {
		cout << "\nThe list is empty. All nodes have been deleted successfully." << endl;
	}
	else {
		cout << "\nThe list is not empty. Deletion failed." << endl;
	}
	return 0;
}