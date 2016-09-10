#ifndef EMPLOYER_H
#define EMPLOYER_H

class Person;
class Position;

class Employer {

private:
    string m_Name;
    string m_Market;

public:
    Employer();
    Employer(string name, string market);
    bool hire(Person& newHire, Position pos);
    string toString();
    ~Employer();
};

#endif // EMPLOYER_H
