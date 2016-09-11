#include "employer.h"

Employer::Employer(std::string name, std::string market) {
    m_Name = name;
    m_Market = market;
    Person employees[10];
}

Employer::~Employer() {}

bool Employer::hire(Person & newHire, Position pos) {
    newHire.setPosition(this, &pos);
    employees[employeeCount] = newHire;
    employeeCount++;
}

std::string Employer::toString() {
    return "Employer: " + m_Name + "\nMarket: " + m_Market + "\n";
}

std::string Employer::getName() {
    return m_Name;
}
