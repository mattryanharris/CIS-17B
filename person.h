#ifndef PERSON_H
#define PERSON_H
#import <string>

class Employer;
class Position;

class Person {
public:
    Person(std::string name);
    ~Person();
private:
    std::string m_Name;
    bool m_Employed;
    Position * m_Position;
    Employer * m_Employer;
};


#endif // PERSON_H
