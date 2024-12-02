// Joseph Hack
// 12.1.2024
// CIS1202
// Inheritance - Joseph Hack.cpp : This file contains the 'main' function. Program execution begins and ends there.

#define CAR_H

#include "Car.h"
#include <string>

using namespace std;

	Car::Car() : Vehicle() {
		Vehicle();
		numDoors = 0;
	}

	Car::Car(string manufacturer, int yearBuilt, int numDoors) : Vehicle(manufacturer, yearBuilt), numDoors(numDoors) {
		this->numDoors = numDoors;
	}

	void Car::setNumDoors(int numDoors) {

		this->numDoors = numDoors;

	}

	int Car::getNumDoors() { 

	return numDoors; 

	}

	void Car::displayInfo() const {
		cout << "\nCar: ";
		Vehicle::displayInfo();
		cout << "Number of doors: " << numDoors << endl;
	}
	