#include "battleship.h"
#include "ui_battleship.h"

Battleship::Battleship(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Battleship)
{
    ui->setupUi(this);
}

Battleship::~Battleship()
{
    delete ui;
}
