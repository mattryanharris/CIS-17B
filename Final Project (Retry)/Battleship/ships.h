#ifndef SHIPS_H
#define SHIPS_H

#include <QObject>
#include <QWidget>

class Ships
{
public:
    Ships(int x, int y, int size);


private:
    int carrier = 5;
    int battleship = 4;
    int cruiser = 3;
    int destroyer = 2;
    int submarine = 1;
};

#endif // SHIPS_H
