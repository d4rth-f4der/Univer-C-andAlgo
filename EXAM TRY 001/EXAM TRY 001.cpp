#include <iostream>
#include <fstream>
using namespace std;

struct Car {
	string manufacturer;
	string model;
	int year;
	string color;
	float price;
};

void fun_OUTcarlist(Car* carlist, int arrsize) {
	for (int i = 0; i < arrsize; ++i) {
		Car c = carlist[i];
		cout << c.manufacturer <<" " << c.model <<" "<< c.year <<" "<< c.color <<" "<< c.price << endl;
	}
}

void fun_toFILEcarlist(Car* carlist, int arrsize) {
	ofstream fout;
	fout.open("EXAMTRYtest01.txt");
	for (int i = 0; i < arrsize; ++i) {
		Car c = carlist[i];
		fout << c.manufacturer << ", " << c.model << ", " << c.year << ", " << c.color << ", " << c.price << endl;
	}
	fout.close();
	cout << "File written!";
}

int main() {
	int arrsize = 4;
	Car* cars = new Car[arrsize]{
		{"Elon Tusk","Testa",2020,"Black",30500},
		{"Coyota","Gelica",2021,"White",21200},
		{"Lambruscini","Debelo",2015,"Green",120000},
		{"Buhatti","Vorona",2018,"Blue",250000}
	};
	fun_OUTcarlist(cars, arrsize);
	fun_toFILEcarlist(cars, arrsize);
	ifstream infile("EXAMTRYtest01.txt");
	Car* cars1 = new Car[arrsize]{
		{fin >> },
		{"Coyota","Gelica",2021,"White",21200},
		{"Lambruscini","Debelo",2015,"Green",120000},
		{"Buhatti","Vorona",2018,"Blue",250000}
	};

	delete[]cars;
	return 0;
}