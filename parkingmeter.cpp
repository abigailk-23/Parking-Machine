#include <iostream>
#include "parkingmeter.h"

// Default constructor
ParkingMeter::ParkingMeter() : purchasedTime(0), actualTime(0) {}

// Overloaded constructor
ParkingMeter::ParkingMeter(int time) : purchasedTime(time), actualTime(0) {}

// Copy constructor
ParkingMeter::ParkingMeter(const ParkingMeter &obj) : purchasedTime(obj.purchasedTime), actualTime(obj.actualTime) {}

// Destructor
ParkingMeter::~ParkingMeter() {}

// Accessors
int ParkingMeter::getPurchasedTime() const { return purchasedTime; }
int ParkingMeter::getActualTime() const { return actualTime; }

// Mutators
void ParkingMeter::setPurchasedTime(int time) { purchasedTime = time; }
void ParkingMeter::setActualTime(int time) { actualTime = time; }

// Function for printing the information of the parking meter - time purchased and time used
void ParkingMeter::print() const {
    std::cout << "-------- Parking Meter information -------" << std::endl;
    std::cout << "Purchased Time: " << purchasedTime << " minutes" << std::endl;
    std::cout << "Actual Time: " << actualTime << " minutes" << std::endl;
}
