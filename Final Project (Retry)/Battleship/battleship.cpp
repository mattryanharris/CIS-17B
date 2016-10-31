#include "battleship.h"
#include "ui_battleship.h"
#include "grid.h"
#include <Qt>
#include <QColor>
#include <QString>


battleship::battleship(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::battleship)
{
    ui->setupUi(this);

}

battleship::~battleship()
{
    delete ui;
}


void battleship::on_playerGrid_cellClicked(int row, int column)
{
    for(int i = 0; i < 10; i++) {
        for(int j = 0; j < 10; j++) {
            ui->playerGrid->setItem(i,j, new QTableWidgetItem);
            ui->playerGrid->item(i,j)->setBackground(QColor::fromRgb(255,255,255));
        }
    }


    if(column == 0 || column == 9) {

        if(column == 0) {
            ui->playerGrid->setItem(row, column, new QTableWidgetItem);
            ui->playerGrid->item(row,column)->setBackground(QColor::fromRgb(255,80,91));

            ui->playerGrid->setItem(row, column + 1, new QTableWidgetItem);
            ui->playerGrid->item(row,column + 1)->setBackground(QColor::fromRgb(255,80,91));
            ui->label->setText("Not acceptable");
        }

        else {
            ui->playerGrid->setItem(row, column - 1, new QTableWidgetItem);
            ui->playerGrid->item(row,column - 1)->setBackground(QColor::fromRgb(255,80,91));
            ui->label->setText("Not acceptable");
        }
    }

    else {
        if(axisSelection == 0) {
            ui->playerGrid->setItem(row, column + 1, new QTableWidgetItem);
            ui->playerGrid->item(row,column + 1)->setBackground(QColor::fromRgb(176,215,255));

            ui->playerGrid->setItem(row,column - 1, new QTableWidgetItem);
            ui->playerGrid->item(row,column - 1)->setBackground(QColor::fromRgb(176,215,255));
        }

        else {
            ui->playerGrid->setItem(row + 1, column, new QTableWidgetItem);
            ui->playerGrid->item(row + 1,column)->setBackground(QColor::fromRgb(176,215,255));

            ui->playerGrid->setItem(row - 1,column, new QTableWidgetItem);
            ui->playerGrid->item(row - 1,column)->setBackground(QColor::fromRgb(176,215,255));
        }
    }
}


void battleship::on_playerGrid_cellChanged(int row, int column)
{
    QString info;
    QString row1 = QString::number(row);
    QString column1 = QString::number(column);
    info.append(row1);
    info.append(column1);
    ui->label->setText(info);
}

void battleship::on_verticalSwitch_clicked()
{
    axisSelection = 1;
}



void battleship::on_horizontalSwitch_clicked()
{
    axisSelection = 0;
}
