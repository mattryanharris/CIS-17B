#ifndef BATTLESHIP_H
#define BATTLESHIP_H

#include <QWidget>

namespace Ui {
class Battleship;
}

class Battleship : public QWidget
{
    Q_OBJECT

public:
    explicit Battleship(QWidget *parent = 0);
    ~Battleship();

private:
    Ui::Battleship *ui;
};

#endif // BATTLESHIP_H
