// Joseph Hack
// 12.1.2024
// CIS1202
// Inheritance - Joseph Hack.cpp : This file contains the 'main' function. Program execution begins and ends there.


#pragma once
#include "Vehicle.h"

class Truck : public Vehicle{

	private:
			
		double towCap;

	public:

		Truck();
		Truck(string manufacturer, int yearBuilt, double towCap);
		void setTowCap(double towCap);
		double getTowCap();
		void displayInfo() const override;
};

