#include "parkedcar.h"

// default constructor
ParkedCar::ParkedCar() : make(""), model(""), color(""), licenseNumber("") {}

// overloaded constructor
ParkedCar::ParkedCar(const std::string& make, const std::string& model, const std::string& color, const std::string& licenseNumber)
    : make(make), model(model), color(color), licenseNumber(licenseNumber) {}

// copy constructor
ParkedCar::ParkedCar(const ParkedCar& other)
    : make(other.make), model(other.model), color(other.color), licenseNumber(other.licenseNumber) {}

// Destructor
ParkedCar::~ParkedCar() {}

// accessors
std::string ParkedCar::getMake() const { return make; }
std::string ParkedCar::getModel() const { return model; }
std::string ParkedCar::getColor() const { return color; }
std::string ParkedCar::getLicenseNumber() const { return licenseNumber; }

// mutators
//scope resolution operator (::), indicating that the function is a member of the ParkedCar class
//parameter of the function.constant reference to a std::string object no modifications within
//assigns the value of the parameter make to the make attribute of the ParkedCar object.
void ParkedCar::setMake(const std::string& make) { this->make = make; }
void ParkedCar::setModel(const std::string& model) { this->model = model; }
void ParkedCar::setColor(const std::string& color) { this->color = color; }
void ParkedCar::setLicenseNumber(const std::string& licenseNumber) { this->licenseNumber = licenseNumber; }

// function to print car information 
void ParkedCar::printInfo() const {
    std::cout << "Make: " << make << std::endl;
    std::cout << "Model: " << model << std::endl;
    std::cout << "Color: " << color << std::endl;
    std::cout << "License Number: " << licenseNumber << std::endl;
}
