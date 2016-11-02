#ifndef BATTLESHIP_H
#define BATTLESHIP_H

#include <QWidget>
#include "grid.h"

namespace Ui {
class battleship;
}

class battleship : public QWidget
{
    Q_OBJECT

public:
    explicit battleship(QWidget *parent = 0);
    ~battleship();

private slots:
    void on_playerGrid_cellClicked(int row, int column);

    void on_verticalSwitch_clicked();

    void on_horizontalSwitch_clicked();

    void on_setPosition_clicked();

private:
    Ui::battleship *ui;
    int axisSelection = 0;
    int columnX;
    int rowY;
};

#endif // BATTLESHIP_H
