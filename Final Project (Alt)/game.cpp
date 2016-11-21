#include "game.h"
#include <QBrush>
#include <QDebug>

game::game(QObject *parent) : QObject(parent)
{
    scene = new QGraphicsScene();
    p = new player();
    scene->addItem(p);
    p->setFocus();
    p->grabKeyboard();
    view = new QGraphicsView(scene);

    //set no scroll bars
    view->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
    view->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
    view->show();

    //size of canvas
    view->setFixedSize(800, 600);
    //size of scene
    view->setSceneRect(0,0,800,600);
    view->setBackgroundBrush(QBrush(QImage(":/Images/space.jpg") ));



}

game::~game()
{

}

