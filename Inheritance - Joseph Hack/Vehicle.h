// Joseph Hack
// 12.1.2024
// CIS1202
// Inheritance - Joseph Hack.cpp : This file contains the 'main' function. Program execution begins and ends there.


#include <string>
#include <iostream>

using namespace std;

#pragma once
class Vehicle{

	private:
		
		string manufacturer;
		int yearBuilt;

	public: 
		
		Vehicle();
		Vehicle(string manufacturer, int yearBuilt);
		string getManufacturer();
		void setManufacturer(string manufacturer);
		int getYearBuilt();
		void setYearBuilt(int yearBuilt);
		virtual void displayInfo() const;
};

