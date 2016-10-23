#include "ship.h"

ship::ship(int size)
{
    shipSize = size;
    locations << "Q4";
}

int ship::getFinalShipSize() {
    return this->shipSize;
}

int ship::getCurrentShipSize() {
    return this->getCurrentShipSize();
}

QStringList ship::getLocations() {
    return this->locations;
}






