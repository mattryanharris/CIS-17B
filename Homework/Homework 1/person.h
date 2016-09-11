#ifndef PERSON_H
#define PERSON_H
#import <string>

class Employer;
class Position;

class Person {
public:
    Person();
    Person(std::string name);
    std::string toString();
    void setPosition(Employer * newC, Position * newP);
    Position getPosition();
    Employer getEmployer();
    ~Person();
private:
    std::string m_Name;
    bool m_Employed;
    Position * m_Position;
    Employer * m_Employer;
};

#endif // PERSON_H
