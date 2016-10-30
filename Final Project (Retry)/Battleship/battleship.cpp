#include "battleship.h"
#include "ui_battleship.h"
#include "grid.h"
#include <Qt>


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

}

void battleship::on_playerGrid_currentCellChanged(int currentRow, int currentColumn, int previousRow, int previousColumn)
{


}
