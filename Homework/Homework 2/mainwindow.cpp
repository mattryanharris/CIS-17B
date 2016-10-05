#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QString>
#include <QIntValidator>
#import <QKeyEvent>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    ui->display->setValidator(new QIntValidator(0, 999999, this) );

}

MainWindow::~MainWindow()
{
    delete ui;
}

// number buttons

void MainWindow::on_button_zero_clicked()
{
    ui->display->setText(ui->display->text()+ "0");
}

void MainWindow::on_button_one_clicked()
{
    ui->display->setText(ui->display->text()+ "1");
}

void MainWindow::on_button_two_clicked()
{
    ui->display->setText(ui->display->text()+ "2");
}

void MainWindow::on_button_three_clicked()
{
    ui->display->setText(ui->display->text()+ "3");
}

void MainWindow::on_button_four_clicked()
{
    ui->display->setText(ui->display->text()+ "4");
}

void MainWindow::on_button_five_clicked()
{
    ui->display->setText(ui->display->text()+ "5");
}

void MainWindow::on_button_six_clicked()
{
    ui->display->setText(ui->display->text()+ "6");
}

void MainWindow::on_button_seven_clicked()
{
    ui->display->setText(ui->display->text()+ "7");
}

void MainWindow::on_button_eight_clicked()
{
    ui->display->setText(ui->display->text()+ "8");
}

void MainWindow::on_button_nine_clicked()
{
    ui->display->setText(ui->display->text()+ "9");
}

//operators

void MainWindow::on_button_subtract_clicked()
{
    number1 = ui->display->text();
    num1 = number1.toInt();
    operation = 0;
    ui->display->clear();
}

void MainWindow::on_button_add_clicked()
{
    number1 = ui->display->text();
    num1 = number1.toInt();
    operation = 1;
    ui->display->clear();
}

void MainWindow::on_button_division_clicked()
{
    number1 = ui->display->text();
    num1 = number1.toInt();
    operation = 2;
    ui->display->clear();
}

void MainWindow::on_button_multiply_clicked()
{
    number1 = ui->display->text();
    num1 = number1.toInt();
    operation = 3;
    ui->display->clear();
}

//functions

void MainWindow::on_button_equal_clicked()
{
    number2 = ui->display->text();
    num2 = number2.toInt();

    QString total = QString::number(calculation());
    ui->display->setText(total);
}

void MainWindow::on_button_clear_clicked()
{
    ui->display->clear();
}

//calculation

int MainWindow::calculation() {

    switch (operation) {
    case 0:
        total = num1 - num2;
        break;
    case 1:
        total = num1 + num2;
        break;
    case 2:
        total = num1 / num2;
        break;
    case 3:
        total = num1 * num2;
        break;
    default:
        break;
    }

    return total;
}


