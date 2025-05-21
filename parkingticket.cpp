#include <iostream>
#include "parkingticket.h"
#include "patrolofficer.h"

//arguements which will be passed when printing the ticket
void ParkingTicket::issueTicket(const ParkedCar& car, const ParkingMeter& meter, const PatrolOfficer& officer) {
    int parkedTime = meter.getActualTime();
    int purchasedTime = meter.getPurchasedTime();
    int overtimeMinutes = parkedTime - purchasedTime;

    if (overtimeMinutes > 0) {
        int fine = calculateFine(overtimeMinutes);
        std::cout << "*********************************" << std::endl;
        std::cout << "Parking Ticket Issued!" << std::endl;
        officer.print();
        std::cout << "------ Car Information ------" << std::endl;
        car.printInfo();
        meter.print();
        std::cout << "Minutes in violation: " << overtimeMinutes << " minutes" << std::endl;
        std::cout << "Fine: £" << fine << std::endl;
        std::cout << "------------------------" << std::endl;
        
        
    } else { // no violation hence no charge if the car is parked in time purchased
        std::cout << "No penalty is incurred." << std::endl;
    } //program will end here 
}
// Function to calculate the fine based on the overtime minutes
int ParkingTicket::calculateFine(int overtimeMinutes) {
    int baseFine = 25;
    int extraFine = (overtimeMinutes / 60) * 10; // £10 for every illegal hour
    return baseFine + extraFine;
}
