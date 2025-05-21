#include <iostream>
#include "parkedcar.h"
#include "parkingmeter.h"
#include "patrolofficer.h"
#include "parkingticket.h"

int main() {
    //welcome message 
    std::cout << "Welcome to the Parking Ticket Machine!" << std::endl;
  
  // Create a PatrolOfficer object
    std::string officerName;
    int badgeNumber;
    std::cout << "Please enter your name: ";
    std::getline(std::cin >> std::ws, officerName); // Clear input buffer before getline
    std::cout << "Please enter badge number: ";
    std::cin >> badgeNumber;
    PatrolOfficer officer(officerName, badgeNumber);
  // welcome message 
    std::cout << "*********************************" << std::endl;
    std::cout << "Hello Officer " << officerName << "!" << std::endl;
    std::cout << "The system is ready to use!" << std::endl;
    std::cout << "***************************" << std::endl;
// loop for patrol officer to enter the next inspection when prompted 
    char nextInspection;
    do {

  
// Prompt the user to enter car details
    std::cout << "Please enter the car information" << std::endl;
    std::string make, model, color, licenseNumber;
    std::cout << "Enter car make: ";
    std::getline(std::cin, make);
    std::cin >> make;
    std::cout << "Enter car model: ";
    std::getline(std::cin, model);
    std::cin >> model;
    std::cout << "Enter car colour: ";
    std::getline(std::cin, color);
    std::cin >> color;
    std::cout << "Enter car licence number: ";
    std::getline(std::cin, licenseNumber);
    std::cin >> licenseNumber;

    // Create a ParkedCar object with user input
    ParkedCar car(make, model, color, licenseNumber);

    // Create a ParkingMeter object
    int purchasedTime;
    std::cout << "What is the purchased parking time (in minutes): ";
    std::cin >> purchasedTime;
    ParkingMeter meter(purchasedTime);

    // Set actual parked time for the ParkingMeter object
    int actualTime;
    std::cout << "How long has this car parked for (in minutes): ";
    std::cin >> actualTime;
    meter.setActualTime(actualTime);

    
    // Issue a parking ticket
    ParkingTicket::issueTicket(car, meter, officer);
    // Asking the user if they want to inspect another car, designed in a way that the user can enter y or n and it's the same patrol officer 
      std::cout << "Next inspection? (Y/N): ";
      std::cin >> nextInspection;
  
  } while (nextInspection == 'Y' || nextInspection == 'y');

    return 0;
}

