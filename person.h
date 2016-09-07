#ifndef PERSON_H
#define PERSON_H

#include "position.h"

class Person
{
public:
    Person(string name);
    string toString();
    setPosition(Employer newC, Position newP);
    ~Person();

private:
    string m_Name;
    bool m_Employed;
    Position m_position;
    Employer m_employer;
};

#endif // PERSON_H
