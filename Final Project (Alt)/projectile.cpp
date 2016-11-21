#include "projectile.h"
#include <QPixmap>
#include <QTimer>

Projectile::Projectile()
{
    setPixmap(QPixmap(":/Images/missile.png"));
    QTimer *timer = new QTimer(this);
    connect(timer, SIGNAL(timeout()), this, SLOT(Move()));
    timer->start(50);

}

Projectile::~Projectile()
{

}

void Projectile::Move() {
    this->setPos(x(), y() - 10);
}


