#ifndef PROJECTILE_H
#define PROJECTILE_H

#include <QObject>
#include <QGraphicsPixmapItem>


class Projectile : public QObject, public QGraphicsPixmapItem
{
    Q_OBJECT
public:
    Projectile();
    ~Projectile();

signals:

public slots:
    void Move();
};

#endif // PROJECTILE_H
