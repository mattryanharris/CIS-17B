#ifndef GAME_H
#define GAME_H

#include <QObject>
#include <QGraphicsScene>
#include <QGraphicsView>
#include "player.h"

class game : public QObject
{
    Q_OBJECT
private:
    QGraphicsScene *scene;
    QGraphicsView *view;
    player *p;
public:
    explicit game(QObject *parent = 0);
    ~game();
};

#endif // GAME_H
