#ifndef PARKEDCAR_H
#define PARKEDCAR_H

#include <string>
#include <iostream>


class ParkedCar {
private:
    std::string make;
    std::string model;
    std::string color;
    std::string licenseNumber;

public:
    // Constructors
    ParkedCar();
    ParkedCar(const std::string& make, const std::string& model, const std::string& color, const std::string& licenseNumber);
    ParkedCar(const ParkedCar& other);

    // Destructor
    ~ParkedCar();

    // Accessors
    std::string getMake() const;
    std::string getModel() const;
    std::string getColor() const;
    std::string getLicenseNumber() const;

    // Mutators
    void setMake(const std::string& make);
    void setModel(const std::string& model);
    void setColor(const std::string& color);
    void setLicenseNumber(const std::string& licenseNumber);

    // Function to print the car information 
    void printInfo() const;
};

#endif
