#ifndef SHIPS_H
#define SHIPS_H

#include <QObject>
#include <QWidget>

class Ships
{
public:
    Ships(int size);


private:
    int carrier = 5;
    int battleship = 4;
    int cruiser = 3;
    int destroyer = 2;
};

#endif // SHIPS_H
