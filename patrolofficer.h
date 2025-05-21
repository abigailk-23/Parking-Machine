#ifndef PATROLOFFICER_H
#define PATROLOFFICER_H

#include <string>

class PatrolOfficer {
private:
    std::string name;
    int badgeNumber;

public:
    PatrolOfficer(); // Default constructor
    PatrolOfficer(std::string, int); // Overloaded constructor
    PatrolOfficer(const PatrolOfficer &); // Copy constructor
    ~PatrolOfficer(); // Destructor

    // Accessors
    std::string getName() const;
    int getBadgeNumber() const;

    // Mutators
    void setName(std::string);
    void setBadgeNumber(int);

    // Function for printing the information of the patrol officer
    void print() const;
};

#endif
