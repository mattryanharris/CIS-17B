#ifndef PERSON_H
#define PERSON_H
#import <string>

class Employer;
class Position;

class Person
{
public:

    Person(std::string name);
    ~Person();
private:
    std::string m_name;
    bool m_employed;
    Position m_position;
    Employer m_employer;
};


#endif // PERSON_H
