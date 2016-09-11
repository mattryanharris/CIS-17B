#ifndef EMPLOYER_H
#define EMPLOYER_H

#include <string>
#include "person.h"
#include "position.h"

class Person;
class Position;

class Employer {
public:
    Employer(std::string name, std::string market);
    ~Employer();

    bool hire(Person & newHire, Position pos);
    std::string toString();
    std::string getName();

    Person employees[10];
    int employeeCount;

private:
    std::string m_Name;
    std::string m_Market;
};

#endif // EMPLOYER_H
