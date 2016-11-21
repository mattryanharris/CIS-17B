#include "battleship.h"
#include "ui_battleship.h"
#include "grid.h"
#include <QApplication>
#include <QRect>
#include <QPixmap>
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
    columnX = column;
    rowY = row;

    int spaceLeft = 0;
    int spaceRight = 0;

    if(ui->carrier->isEnabled()) {
        spaceLeft = 2;
        spaceRight = 2;
    }

    else if(ui->battle->isEnabled()) {
        spaceLeft = 2;
        spaceRight = 1;
    }

    else if(ui->cruiser->isEnabled()) {
        spaceLeft = 1;
        spaceRight = 1;
    }

    else if(ui->sub->isEnabled()) {
        spaceLeft = 1;
        spaceRight = 0;
    }

    else {
        spaceLeft = 0;
        spaceRight = 0;
    }

    // clear the grid every click
    for(int i = 0; i < 10; i++) {
        for(int j = 0; j < 10; j++) {
            ui->playerGrid->setItem(i,j, new QTableWidgetItem);
            ui->playerGrid->item(i,j)->setBackground(QColor::fromRgb(255,255,255));
        }
    }

    // if selection is column A or J and horizontal
    if((column == 0 || column == 9) && axisSelection == 0 || (ui->carrier->isEnabled() && (column == 1 || column == 8))
        || (ui->battle->isEnabled() && (column == 1)) || ((ui->sub->isEnabled() && (column == 0 || column == 9) ))) {
        // if selection is column A
        if(ui->carrier->isEnabled()) {
            if(column == 0) {

                ui->playerGrid->setItem(row, column, new QTableWidgetItem);
                ui->playerGrid->item(row, column)->setData( Qt::BackgroundRole, QColor::fromRgb(255,80,91)) ;
                ui->playerGrid->item(row, column)->setSelected(false);

                ui->playerGrid->setItem(row, column + 1, new QTableWidgetItem);
                ui->playerGrid->item(row,column + 1)->setBackground(QColor::fromRgb(255,80,91));

                ui->playerGrid->setItem(row, column + spaceRight, new QTableWidgetItem);
                ui->playerGrid->item(row,column + spaceRight)->setBackground(QColor::fromRgb(255,80,91));

                ui->setPosition->setDisabled(true);
            }

            else if(column == 1) {
                ui->playerGrid->setItem(row, column, new QTableWidgetItem);
                ui->playerGrid->item(row, column)->setData( Qt::BackgroundRole, QColor::fromRgb(255,80,91)) ;
                ui->playerGrid->item(row, column)->setSelected(false);

                ui->playerGrid->setItem(row, column - 1, new QTableWidgetItem);
                ui->playerGrid->item(row,column - 1)->setBackground(QColor::fromRgb(255,80,91));

                ui->playerGrid->setItem(row, column + 1, new QTableWidgetItem);
                ui->playerGrid->item(row,column + 1)->setBackground(QColor::fromRgb(255,80,91));

                ui->playerGrid->setItem(row, column + spaceRight, new QTableWidgetItem);
                ui->playerGrid->item(row,column + spaceRight)->setBackground(QColor::fromRgb(255,80,91));

                ui->setPosition->setDisabled(true);
            }

            else if(column == 9) {

                ui->playerGrid->setItem(row, column, new QTableWidgetItem);
                ui->playerGrid->item(row, column)->setData( Qt::BackgroundRole, QColor::fromRgb(255,80,91)) ;
                ui->playerGrid->item(row, column)->setSelected(false);

                ui->playerGrid->setItem(row, column - 1, new QTableWidgetItem);
                ui->playerGrid->item(row,column - 1)->setBackground(QColor::fromRgb(255,80,91));

                ui->playerGrid->setItem(row, column - spaceRight, new QTableWidgetItem);
                ui->playerGrid->item(row,column - spaceRight)->setBackground(QColor::fromRgb(255,80,91));

                ui->setPosition->setDisabled(true);
            }

            else if(column == 8) {
                ui->playerGrid->setItem(row, column, new QTableWidgetItem);
                ui->playerGrid->item(row, column)->setData( Qt::BackgroundRole, QColor::fromRgb(255,80,91)) ;
                ui->playerGrid->item(row, column)->setSelected(false);

                ui->playerGrid->setItem(row, column + 1, new QTableWidgetItem);
                ui->playerGrid->item(row,column + 1)->setBackground(QColor::fromRgb(255,80,91));

                ui->playerGrid->setItem(row, column - 1, new QTableWidgetItem);
                ui->playerGrid->item(row,column - 1)->setBackground(QColor::fromRgb(255,80,91));

                ui->playerGrid->setItem(row, column - spaceRight, new QTableWidgetItem);
                ui->playerGrid->item(row,column - spaceRight)->setBackground(QColor::fromRgb(255,80,91));

                ui->setPosition->setDisabled(true);
            }
        }

        else if (ui->battle->isEnabled()) {
            if(column == 0) {

                ui->playerGrid->setItem(row, column, new QTableWidgetItem);
                ui->playerGrid->item(row, column)->setData( Qt::BackgroundRole, QColor::fromRgb(255,80,91)) ;
                ui->playerGrid->item(row, column)->setSelected(false);

                ui->playerGrid->setItem(row, column + 1, new QTableWidgetItem);
                ui->playerGrid->item(row,column + 1)->setBackground(QColor::fromRgb(255,80,91));

                ui->playerGrid->setItem(row, column + spaceRight, new QTableWidgetItem);
                ui->playerGrid->item(row,column + spaceRight)->setBackground(QColor::fromRgb(255,80,91));

                ui->setPosition->setDisabled(true);
            }

            else if(column == 1) {
                ui->playerGrid->setItem(row, column, new QTableWidgetItem);
                ui->playerGrid->item(row, column)->setData( Qt::BackgroundRole, QColor::fromRgb(255,80,91)) ;
                ui->playerGrid->item(row, column)->setSelected(false);

                ui->playerGrid->setItem(row, column - 1, new QTableWidgetItem);
                ui->playerGrid->item(row,column - 1)->setBackground(QColor::fromRgb(255,80,91));

                ui->playerGrid->setItem(row, column + 1, new QTableWidgetItem);
                ui->playerGrid->item(row,column + 1)->setBackground(QColor::fromRgb(255,80,91));

                ui->playerGrid->setItem(row, column + spaceRight, new QTableWidgetItem);
                ui->playerGrid->item(row,column + spaceRight)->setBackground(QColor::fromRgb(255,80,91));

                ui->setPosition->setDisabled(true);
            }

            else if(column == 9) {

                ui->playerGrid->setItem(row, column, new QTableWidgetItem);
                ui->playerGrid->item(row, column)->setData( Qt::BackgroundRole, QColor::fromRgb(255,80,91)) ;
                ui->playerGrid->item(row, column)->setSelected(false);

                ui->playerGrid->setItem(row, column - 1, new QTableWidgetItem);
                ui->playerGrid->item(row,column - 1)->setBackground(QColor::fromRgb(255,80,91));

                ui->playerGrid->setItem(row, column - spaceLeft, new QTableWidgetItem);
                ui->playerGrid->item(row,column - spaceLeft)->setBackground(QColor::fromRgb(255,80,91));

                ui->setPosition->setDisabled(true);
            }
        }


        if(ui->cruiser->isEnabled()) {
            if(column == 0) {

                ui->playerGrid->setItem(row, column, new QTableWidgetItem);
                ui->playerGrid->item(row, column)->setData( Qt::BackgroundRole, QColor::fromRgb(255,80,91)) ;
                ui->playerGrid->item(row, column)->setSelected(false);

                ui->playerGrid->setItem(row, column + 1, new QTableWidgetItem);
                ui->playerGrid->item(row,column + spaceLeft)->setBackground(QColor::fromRgb(255,80,91));

                ui->setPosition->setDisabled(true);
            }

        // if selection is column J
            else {
                ui->playerGrid->setItem(row, column, new QTableWidgetItem);
                ui->playerGrid->item(row,column)->setBackground(QColor::fromRgb(255,80,91));
                ui->playerGrid->item(row, column)->setSelected(false);

                ui->playerGrid->setItem(row, column - 1, new QTableWidgetItem);
                ui->playerGrid->item(row,column - 1)->setBackground(QColor::fromRgb(255,80,91));
                ui->playerGrid->item(row, column)->setSelected(false);

                ui->setPosition->setDisabled(true);

            }
        }

        if(ui->sub->isEnabled()) {
            if(column == 0) {
                ui->playerGrid->setItem(row, column + spaceLeft, new QTableWidgetItem);
                ui->playerGrid->item(row,column + spaceLeft)->setBackground(QColor::fromRgb(176,215,255));
                ui->setPosition->setDisabled(false);
            }

            if(column == 9) {
                ui->playerGrid->setItem(row, column, new QTableWidgetItem);
                ui->playerGrid->item(row, column)->setData( Qt::BackgroundRole, QColor::fromRgb(255,80,91)) ;
                ui->playerGrid->item(row, column)->setSelected(false);

                ui->playerGrid->setItem(row, column, new QTableWidgetItem);
                ui->playerGrid->item(row,column)->setBackground(QColor::fromRgb(255,80,91));

                ui->setPosition->setDisabled(true);
            }
        }
    }

    else if(column < 9 && ui->sub->isEnabled()) {
        ui->playerGrid->setItem(row, column + spaceLeft, new QTableWidgetItem);
        ui->playerGrid->item(row,column + spaceLeft)->setBackground(QColor::fromRgb(176,215,255));
        ui->setPosition->setDisabled(false);
    }


    // if selection is row 1 or 9 and vertical
    else if ((row == 0 || row == 9) && axisSelection == 1) {

        // if selection is row 1
        if(row == 0) {
            ui->playerGrid->setItem(row, column, new QTableWidgetItem);
            ui->playerGrid->item(row,column)->setBackground(QColor::fromRgb(255,80,91));
            ui->playerGrid->item(row, column)->setSelected(false);

            ui->playerGrid->setItem(row + 1, column, new QTableWidgetItem);
            ui->playerGrid->item(row + 1,column)->setBackground(QColor::fromRgb(255,80,91));

            ui->setPosition->setDisabled(true);
        }

        // if selection is row 9
        else {
            ui->playerGrid->setItem(row, column, new QTableWidgetItem);
            ui->playerGrid->item(row,column)->setBackground(QColor::fromRgb(255,80,91));
            ui->playerGrid->item(row, column)->setSelected(false);

            ui->playerGrid->setItem(row - 1, column, new QTableWidgetItem);
            ui->playerGrid->item(row - 1,column)->setBackground(QColor::fromRgb(255,80,91));

            ui->setPosition->setDisabled(true);
        }
    }



    // if selection is in a non-problem area
    else {
        // if selection is horizontal
        if(axisSelection == 0) {

            if(ui->carrier->isEnabled()) {
                ui->playerGrid->setItem(row, column + spaceRight, new QTableWidgetItem);
                ui->playerGrid->item(row,column + spaceRight)->setBackground(QColor::fromRgb(176,215,255));

                ui->playerGrid->setItem(row, column + 1, new QTableWidgetItem);
                ui->playerGrid->item(row,column + 1)->setBackground(QColor::fromRgb(176,215,255));

                ui->playerGrid->setItem(row, column - 1, new QTableWidgetItem);
                ui->playerGrid->item(row,column - 1)->setBackground(QColor::fromRgb(176,215,255));

                ui->playerGrid->setItem(row,column - spaceLeft, new QTableWidgetItem);
                ui->playerGrid->item(row,column - spaceLeft)->setBackground(QColor::fromRgb(176,215,255));
                ui->setPosition->setDisabled(false);
            }

            else if(ui->battle->isEnabled()) {

                ui->playerGrid->setItem(row, column + spaceRight, new QTableWidgetItem);
                ui->playerGrid->item(row,column + spaceRight)->setBackground(QColor::fromRgb(176,215,255));

                ui->playerGrid->setItem(row, column + 1, new QTableWidgetItem);
                ui->playerGrid->item(row,column + 1)->setBackground(QColor::fromRgb(176,215,255));

                ui->playerGrid->setItem(row, column - 1, new QTableWidgetItem);
                ui->playerGrid->item(row,column - 1)->setBackground(QColor::fromRgb(176,215,255));

                ui->playerGrid->setItem(row,column - spaceLeft, new QTableWidgetItem);
                ui->playerGrid->item(row,column - spaceLeft)->setBackground(QColor::fromRgb(176,215,255));
                ui->setPosition->setDisabled(false);
            }

            else if(ui->cruiser->isEnabled()) {
                ui->playerGrid->setItem(row, column + spaceRight, new QTableWidgetItem);
                ui->playerGrid->item(row,column + spaceRight)->setBackground(QColor::fromRgb(176,215,255));

                ui->playerGrid->setItem(row,column - spaceLeft, new QTableWidgetItem);
                ui->playerGrid->item(row,column - spaceLeft)->setBackground(QColor::fromRgb(176,215,255));

                ui->setPosition->setDisabled(false);
            }

        }

        // if selection is vertical
        else {

            if(ui->carrier->isEnabled()) {
                ui->playerGrid->setItem(row + spaceLeft, column, new QTableWidgetItem);
                ui->playerGrid->item(row + spaceLeft, column)->setBackground(QColor::fromRgb(176,215,255));

                ui->playerGrid->setItem(row + 1, column, new QTableWidgetItem);
                ui->playerGrid->item(row + 1, column)->setBackground(QColor::fromRgb(176,215,255));

                ui->playerGrid->setItem(row - 1, column, new QTableWidgetItem);
                ui->playerGrid->item(row - 1, column)->setBackground(QColor::fromRgb(176,215,255));

                ui->playerGrid->setItem(row - spaceRight,column, new QTableWidgetItem);
                ui->playerGrid->item(row - spaceRight,column)->setBackground(QColor::fromRgb(176,215,255));

                ui->setPosition->setDisabled(false);
            }

            if(ui->battle->isEnabled()) {
                ui->playerGrid->setItem(row + spaceLeft, column, new QTableWidgetItem);
                ui->playerGrid->item(row + spaceLeft, column)->setBackground(QColor::fromRgb(176,215,255));

                ui->playerGrid->setItem(row - 1, column, new QTableWidgetItem);
                ui->playerGrid->item(row - 1, column)->setBackground(QColor::fromRgb(176,215,255));

                ui->playerGrid->setItem(row + 1, column, new QTableWidgetItem);
                ui->playerGrid->item(row + 1, column)->setBackground(QColor::fromRgb(176,215,255));

                ui->playerGrid->setItem(row - 2,column, new QTableWidgetItem);
                ui->playerGrid->item(row - spaceRight,column)->setBackground(QColor::fromRgb(176,215,255));

                ui->setPosition->setDisabled(false);
            }



            else {
                ui->playerGrid->setItem(row + spaceLeft, column, new QTableWidgetItem);
                ui->playerGrid->item(row + spaceLeft,column)->setBackground(QColor::fromRgb(176,215,255));

                ui->playerGrid->setItem(row - spaceRight,column, new QTableWidgetItem);
                ui->playerGrid->item(row - spaceRight,column)->setBackground(QColor::fromRgb(176,215,255));

                ui->setPosition->setDisabled(false);
            }
        }
    }
}

// changes axis to vertical
void battleship::on_verticalSwitch_clicked()
{
    axisSelection = 1;
    ui->horizontalSwitch->setChecked(false);
    ui->verticalSwitch->setStyleSheet("QPushButton {color: white;}");
    ui->horizontalSwitch->setStyleSheet("QPushButton {color: black;}");
    ui->verticalSwitch->setEnabled(false);
    ui->horizontalSwitch->setEnabled(true);
}

// changes axis to horizontal
void battleship::on_horizontalSwitch_clicked()
{
    axisSelection = 0;
    ui->verticalSwitch->setChecked(false);
    ui->verticalSwitch->setStyleSheet("QPushButton {color: black;}");
    ui->horizontalSwitch->setStyleSheet("QPushButton {color: white;}");
    ui->horizontalSwitch->setEnabled(false);
    ui->verticalSwitch->setEnabled(true);
}

void battleship::on_setPosition_clicked()
{
    if(ui->carrier->isEnabled()) {
        ui->carrier->setDisabled(true);

        ui->carrier_1->setDisabled(true);
        ui->carrier_2->setDisabled(true);
        ui->carrier_3->setDisabled(true);
        ui->carrier_4->setDisabled(true);
        ui->carrier_5->setDisabled(true);

        ui->bs_1->setEnabled(true);
        ui->bs_2->setEnabled(true);
        ui->bs_3->setEnabled(true);
        ui->bs_4->setEnabled(true);

        ui->battle->setEnabled(true);
        return;
    }


    if(ui->battle->isEnabled()) {
        ui->battle->setDisabled(true);

        ui->bs_1->setDisabled(true);
        ui->bs_2->setDisabled(true);
        ui->bs_3->setDisabled(true);
        ui->bs_4->setDisabled(true);

        ui->cruiser_1->setEnabled(true);
        ui->cruiser_2->setEnabled(true);
        ui->cruiser_3->setEnabled(true);

        ui->cruiser->setEnabled(true);
        return;
    }

    if(ui->cruiser->isEnabled()) {
        ui->cruiser->setDisabled(true);

        ui->cruiser_1->setDisabled(true);
        ui->cruiser_2->setDisabled(true);
        ui->cruiser_3->setDisabled(true);

        ui->sub_1->setEnabled(true);
        ui->sub_2->setEnabled(true);

        ui->sub->setEnabled(true);
        return;

    }

    if(ui->sub->isEnabled()) {
        ui->sub->setDisabled(true);

        ui->sub_1->setDisabled(true);
        ui->sub_2->setDisabled(true);

        ui->destroyer_1->setEnabled(true);
        ui->destroyer->setEnabled(true);
        return;
    }

    if(ui->destroyer->isEnabled()) {
        //game start
    }


}
