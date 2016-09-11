#include <QCoreApplication>
#include <iostream>
#include "employer.h"
#include "person.h"
#include "position.h"

int main(int argc, char *argv[])
{
    Employer starFleet("StarFleet", "Good Guys");
    Employer borg("Borg", "Bad Guys");

    Person picard("Jean-Luc Picard");
    Person wes("Wesley Crusher");
    Person jerry("Jerry Wilkins");

    Position captain("Captain", "The Leader");
    Position accountant("Accountant", "Handles finances");

    starFleet.hire(picard, captain);
    starFleet.hire(wes, accountant);
    borg.hire(jerry, accountant);

    std::cout << "\nEMPLOYEES OF THE BORG:\n";

    for(int i = 0; i < borg.employeeCount; i++) {
        std::cout << borg.employees[i].toString();
    }

    std::cout << "\nEMPLOYEES OF STAR FLEET:\n";

    for(int i = 0; i < starFleet.employeeCount; i++) {
        std::cout << starFleet.employees[i].toString();
    }

    return 0;
}
