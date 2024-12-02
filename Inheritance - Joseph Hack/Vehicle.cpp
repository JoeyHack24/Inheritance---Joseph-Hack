// Joseph Hack
// 12.1.2024
// CIS1202
// Inheritance - Joseph Hack.cpp : This file contains the 'main' function. Program execution begins and ends there.

#define VEHICLE_H

#include "Vehicle.h"
#include <string>

using namespace std;

	Vehicle::Vehicle() {

	manufacturer = "none";
	yearBuilt = -1;
	}

	Vehicle::Vehicle(string manufacturer, int yearBuilt) {
	this->manufacturer = manufacturer;
	this->yearBuilt = yearBuilt;
	}

	string Vehicle::getManufacturer() {
		return manufacturer;
	}

	void Vehicle::setManufacturer(string setMan) {
		this->manufacturer = setMan;
	}

	int Vehicle::getYearBuilt() {
		return yearBuilt;
	}

	void Vehicle::setYearBuilt(int year) {
		this->yearBuilt = year;

	}

	void Vehicle::displayInfo() const {
		cout << "\nVehicle Information: " << endl;
		cout << "Manufacturer: " << manufacturer << endl;
		cout << "Year: " << yearBuilt << endl;
	}

