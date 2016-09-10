#ifndef POSITION_H
#define POSITION_H

#include <string>


class Position
{
public:
    Position(std::string name, std::string description);
    ~Position();
    std::string toString();

private:
    std::string m_name;
    std::string m_description;

};

#endif // POSITION_H
