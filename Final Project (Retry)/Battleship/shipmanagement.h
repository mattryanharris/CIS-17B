#ifndef SHIPMANAGEMENT_H
#define SHIPMANAGEMENT_H

#include <QObject>
#include <QWidget>

class ShipManagement
{
public:
    ShipManagement();

private:
    int carrier = 5;
    int battleship = 4;
    int cruiser = 3;
    int destroyer = 2;
};

#endif // SHIPMANAGEMENT_H
