#ifndef PARKINGTICKET_H
#define PARKINGTICKET_H

#include "parkedcar.h"
#include "parkingmeter.h"
#include "patrolofficer.h"

class ParkingTicket {
public:
    // Function to issue a parking ticket based on the parking meter information
    static void issueTicket(const ParkedCar& car, const ParkingMeter& meter, const PatrolOfficer& officer);

private:
    // Function to calculate the fine amount based on overtime period
    static int calculateFine(int overtimeMinutes);
};

#endif
