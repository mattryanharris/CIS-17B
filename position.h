#ifndef POSITION_H
#define POSITION_H

#include <string>

class Position {
public:
    Position(std::string name, std::string description);
    ~Position();
    std::string toString();
    std::string getName();

private:
    std::string m_Name;
    std::string m_Description;
};

#endif // POSITION_H
