#ifndef SHIP_H
#define SHIP_H
#include <QStringList>

class ship
{
public:
    ship(int size);
    int getFinalShipSize();
    int getCurrentShipSize();
    QStringList getLocations();

private:
    bool shipSunk = false;
    QStringList locations;
    int shipSize;
};

#endif // SHIP_H
