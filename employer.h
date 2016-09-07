#ifndef EMPLOYER_H
#define EMPLOYER_H
#import <string>
using namespace std;


class employer
{
private:
    string m_Name;
    string m_Market;


public:
    bool hire(Person & newHire, Position pos);
    employer(string name, string market);
    string toString();
    ~employer();
};

#endif // EMPLOYER_H
