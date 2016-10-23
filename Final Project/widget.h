#ifndef WIDGET_H
#define WIDGET_H

#include <QWidget>
#include "ship_manager.h"

namespace Ui {
class Widget;
}

class Widget : public QWidget
{
    Q_OBJECT

public:
    explicit Widget(QWidget *parent = 0);
    bool isAdjacent(int lastX, int lastY, int newX, int newY);
    QString parseLocation(int row, int column);
    ~Widget();

private slots:

    void on_tableWidget_cellClicked(int row, int column);

    void on_startButton_clicked();

    void on_setPoint_clicked();

private:
    Ui::Widget *ui;
    bool hitDetection(QString location, QStringList coord);
    int gameState;
    int statePlaceShips = 1;
    int stateSinkShips = 2;
    int stateGameStart = 3;
    bool gamePause;
    ship_manager manager;


};

#endif // WIDGET_H
