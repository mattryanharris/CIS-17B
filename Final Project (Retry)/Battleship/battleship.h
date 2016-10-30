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

    void on_playerGrid_currentCellChanged(int currentRow, int currentColumn, int previousRow, int previousColumn);



private:
    Ui::battleship *ui;
};

#endif // BATTLESHIP_H
