// Joseph Hack
// 12.1.2024
// CIS1202
// Inheritance - Joseph Hack.cpp : This file contains the 'main' function. Program execution begins and ends there.


#pragma once
#include "Vehicle.h"

class Car : public Vehicle {

	private:

		int numDoors;

	public:	

		Car();
		Car(string manufacturer, int yearBuilt, int numDoors);
		void setNumDoors(int numDoors) ;
		int getNumDoors();
		void displayInfo() const override;
};

