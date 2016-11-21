#include "player.h"
#include <QPixmap>
#include <QDebug>
#include "projectile.h"
#include <QGraphicsScene>

player::player()
{
    setPixmap(QPixmap(":/Images/ship.png"));
}

player::~player()
{

}

void player::keyPressEvent(QKeyEvent *event) {
    if(event->key() == Qt::Key_Up) {
        setPos(x(), y() - 10);
    }

    if(event->key() == Qt::Key_Down) {
        setPos(x(), y() + 10);
    }

    if(event->key() == Qt::Key_Left) {
        setPos(x() - 10, y());
    }

    if(event->key() == Qt::Key_Right) {
        setPos(x() + 10, y());
    }

    if(event->key() == Qt::Key_Space) {
        Projectile *p1 = new Projectile();
        p1->setPos(x() + 30, y());
        scene()->addItem(p1);

        Projectile *p2 = new Projectile();
        p2->setPos(x() + 82, y());
        scene()->addItem(p2);
    }
}

