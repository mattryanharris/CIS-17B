#ifndef EMPLOYER_H
#define EMPLOYER_H

#include <string>



class Person;
class Position;

class Employer
{
public:

    Employer(std::string name, std::string market);
    ~Employer();

    bool hire(Person & newHire, Position pos);
    std::string toString();

private:
    std::string m_name;
    std::string m_market;
};

#endif // EMPLOYER_H
