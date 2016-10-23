#ifndef SHIP_MANAGER
#define SHIP_MANAGER
#include <QObject>
#include <QStringList>
#include <QList>
#include "ship.h"

class ship_manager
{
public:
    ship_manager();
    void generateShips();
    void placeShips();
    ship getCurrentShip();

private:
    QList<ship> player1Ships, player2Ships;
    // SHIP SPECIFICS
    int battleship = 4;
    int cruiser = 3;
    int destroyer = 2;
    int submarine = 1;
    int currentShipIndex;

};

#endif // SHIP_MANAGER
