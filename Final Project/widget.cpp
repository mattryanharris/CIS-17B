#include "widget.h"
#include "ui_widget.h"
#include <QTableWidgetItem>
#include <QDebug>
#include <QStringList>
#include "ship_manager.h"
#include "ship.h"


Widget::Widget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Widget)
{
    ui->setupUi(this);

    manager.generateShips();
    gameState = stateGameStart;



}

Widget::~Widget()
{
    delete ui;
}

void Widget::on_tableWidget_cellClicked(int row, int column)
{
    QString coordinate = parseLocation(row, column);

    if(gameState == statePlaceShips) {

        ship currentShip = manager.getCurrentShip();
        QStringList list = currentShip.getLocations();
        list.at(currentShip.getCurrentShipSize() - 1);

        list.append(coordinate);

    }

    else if(gameState == stateSinkShips) {
    }
}

bool Widget::hitDetection(QString location, QStringList coord) {
    for(int i = 0; i < coord.size(); i++) {
        if(location.compare(coord[i]) == 0) {
            return true;
        }
    }
}

bool Widget::isAdjacent(int lastX, int lastY, int newX, int newY) {
    if(lastX - 1 == newX || lastX + 1 == newX) {
       return (lastY == newY);
    }

    if(lastY - 1 == newY || lastY + 1 == newY) {
       return (lastX == newX);
    }
}





void Widget::on_startButton_clicked()
{

    if(stateGameStart == gameState) {
        gamePause = false;
        ui->startButton->setText("Pause");
        gameState = statePlaceShips;
        ui->gameDescription->setText("Place your ships");
    }

    else {

        if (gamePause) {
            gamePause = false;
            ui->startButton->setText("Pause");
        }

        else {
            gamePause = true;
            ui->startButton->setText("Resume");
        }
    }
}

void Widget::on_setPoint_clicked()
{

}

QString Widget::parseLocation(int row, int column) {
    QString rowLetter;
    int columnInt = column + 1;
    QString columnNumber = QString::number(columnInt);

    switch (row) {
    case 0:
        rowLetter = 'A';
        break;
    case 1:
        rowLetter = 'B';
        break;
    case 2:
        rowLetter = 'C';
        break;
    case 3:
        rowLetter = 'D';
        break;
    case 4:
        rowLetter = 'E';
        break;
    case 5:
        rowLetter = 'F';
        break;
    case 6:
        rowLetter = 'G';
        break;
    case 7:
        rowLetter = 'H';
        break;
    case 8:
        rowLetter = 'I';
        break;
    case 9:
        rowLetter = 'J';
        break;
    default:
        break;
    }

    return rowLetter + columnNumber;
}

