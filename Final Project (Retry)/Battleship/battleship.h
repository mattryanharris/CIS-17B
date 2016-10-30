#ifndef BATTLESHIP_H
#define BATTLESHIP_H

#include <QWidget>

namespace Ui {
class battleship;
}

class battleship : public QWidget
{
    Q_OBJECT

public:
    explicit battleship(QWidget *parent = 0);
    ~battleship();

private:
    Ui::battleship *ui;
};

#endif // BATTLESHIP_H
