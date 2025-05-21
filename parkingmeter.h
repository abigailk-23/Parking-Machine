#ifndef PARKINGMETER_H
#define PARKINGMETER_H

class ParkingMeter {
private:
    int purchasedTime; // in minutes
    int actualTime; // in minutes

public:
// Default constructor
    ParkingMeter(); 
// Overloaded constructor
    ParkingMeter(int);
// Copy constructor
    ParkingMeter(const ParkingMeter &); 
// Destructor
    ~ParkingMeter(); 

    // Accessors
    int getPurchasedTime() const;
    int getActualTime() const;

    // Mutators
    void setPurchasedTime(int);
    void setActualTime(int);

    // Function for printing the information of the parking meter
    void print() const;
};

#endif
