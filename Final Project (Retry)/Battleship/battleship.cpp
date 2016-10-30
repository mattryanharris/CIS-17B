#include "battleship.h"
#include "ui_battleship.h"

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
