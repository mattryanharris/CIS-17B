#include "atm.h"
#include "ui_atm.h"

ATM::ATM(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::ATM)
{
    ui->setupUi(this);
}

ATM::~ATM()
{
    delete ui;
}
