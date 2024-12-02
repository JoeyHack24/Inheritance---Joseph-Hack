// Joseph Hack
// 12.1.2024
// CIS1202
// Inheritance - Joseph Hack.cpp : This file contains the 'main' function. Program execution begins and ends there.


#define TRUCK_H

#include "Truck.h"

Truck::Truck() : Vehicle() {
	towCap = 0;
}

Truck::Truck(string manufacturer, int yearBuilt, double towCap) : Vehicle(manufacturer, yearBuilt), towCap(towCap) {
	this->towCap = towCap;
}

void Truck::setTowCap(double towCap) {

	this->towCap = towCap;

}

double Truck::getTowCap() {

	return towCap;

}

void Truck::displayInfo() const {
	cout << "\nTruck: ";
	Vehicle::displayInfo();
	cout << "Towing Capacity: " << towCap << endl;
}
