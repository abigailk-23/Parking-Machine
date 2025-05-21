#include <iostream>
#include "patrolofficer.h"

// Default constructor
PatrolOfficer::PatrolOfficer() : name(""), badgeNumber(0) {}

// Overloaded constructor
PatrolOfficer::PatrolOfficer(std::string n, int badge) : name(n), badgeNumber(badge) {}

// Copy constructor
PatrolOfficer::PatrolOfficer(const PatrolOfficer &obj) : name(obj.name), badgeNumber(obj.badgeNumber) {}

// Destructor
PatrolOfficer::~PatrolOfficer() {}

// Accessors
std::string PatrolOfficer::getName() const { return name; }
int PatrolOfficer::getBadgeNumber() const { return badgeNumber; }

// Mutators
void PatrolOfficer::setName(std::string n) { name = n; }
void PatrolOfficer::setBadgeNumber(int badge) { badgeNumber = badge; }

// Function for printing the information of the patrol officer on the ticket
void PatrolOfficer::print() const {
    std::cout << "------- Patrol Officer Details ------" << std::endl;
    std::cout << "Name: " << name << std::endl;
    std::cout << "Badge Number: " << badgeNumber << std::endl;
}
