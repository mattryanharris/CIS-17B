#ifndef POSITION_H
#define POSITION_H

#include "employer.h"

class position
{
public:
    position(string name, string description);
    string toString();
    ~position();

private:
     string m_Name;
     string m_Description;
};

#endif // POSITION_H
