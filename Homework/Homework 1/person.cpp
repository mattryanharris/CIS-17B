#include "person.h"
#include "position.h"
#include "employer.h"

Person::Person() {

}

Person::Person(std::string name) {
    m_Name = name;
}

std::string Person::toString() {
    return "Name: " + m_Name + "\nEmployer: " + getEmployer().getName() + "\nPosition: " + getPosition().getName() + "\n\n";
}

void Person::setPosition(Employer * newC, Position * newP) {
    //sets references to variables
    m_Employer = newC;
    m_Position = newP;
    //sets employed is true if both variables are present
    m_Employed = m_Employer != NULL && m_Position !=NULL;
}

Position Person::getPosition() {
    if (m_Position == NULL)
        return Position("Water Boy", "Keeps off-brand Picard's head sweat free and polished");
    else
        return *(this-> m_Position);
}

Employer Person::getEmployer() {
    if (m_Employer == NULL)
        return Employer("Space Force", "Fights the Klingoffs and the evil USPTO");
    else
        return *(this-> m_Employer);
}


Person::~Person() {}
