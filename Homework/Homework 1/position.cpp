#include "position.h"

Position::Position(std::string name, std::string description) {
    m_Name = name;
    m_Description = description;
}

Position::~Position() {}

std::string Position::toString() {
    return "Position: " + m_Name + "\n" + "Description: " + m_Description + "\n";
}

std::string Position::getName() {
    return m_Name;
}

