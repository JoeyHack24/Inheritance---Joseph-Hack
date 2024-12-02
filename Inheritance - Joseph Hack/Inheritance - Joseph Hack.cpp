// Joseph Hack
// 12.1.2024
// CIS1202
// Inheritance - Joseph Hack.cpp : This file contains the 'main' function. Program execution begins and ends there.

#include <iostream>
#include "Vehicle.h"
#include "Car.h"
#include "Truck.h"

using namespace std;

int main()
{

	string manufacturer = "none";
	int yearBuilt = -1;
	int numDoors = 4;
	double towCap = 0.0;
	cout << "Vehicle Program: " << endl << endl;


	cout << "Enter the vehicle manufacturer: ";
	getline(cin, manufacturer);
	cout << "Enter the year the vehicle was built: ";
	cin >> yearBuilt;
	cin.ignore();

	Vehicle veh(manufacturer, yearBuilt);
	veh.displayInfo();


	cout << "\nEnter the vehicle manufacturer: ";
	getline(cin, manufacturer);
	cout << "Enter the year the vehicle was built: ";
	cin >> yearBuilt;
	cin.ignore();
	cout << "Enter the number of doors the vehicle has: ";
	cin >> numDoors;
	cin.ignore();

	Car car(manufacturer, yearBuilt, numDoors);
	car.displayInfo();


	cout << "\nEnter the vehicle manufacturer: ";
	
	getline(cin, manufacturer);
	cout << "Enter the year the vehicle was built: ";
	cin >> yearBuilt;
	cin.ignore();
	cout << "Enter the towing capacity of the vehicle: ";
	cin >> towCap;
	cin.ignore();

	Truck tru(manufacturer, yearBuilt, towCap);
	tru.displayInfo();


}
