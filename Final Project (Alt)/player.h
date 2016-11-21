#ifndef PLAYER_H
#define PLAYER_H

#include <QObject>
#include <QGraphicsPixmapItem>
#include <QKeyEvent>

class player : public QObject, public QGraphicsPixmapItem
{
    Q_OBJECT
public:
    player();
    ~player();
    void keyPressEvent(QKeyEvent *event);

signals:

public slots:
};

#endif // PLAYER_H
