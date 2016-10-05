#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QString>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

private slots:

    //numbers
    void on_button_zero_clicked();
    void on_button_one_clicked();
    void on_button_two_clicked();
    void on_button_three_clicked();
    void on_button_four_clicked();
    void on_button_five_clicked();
    void on_button_six_clicked();
    void on_button_seven_clicked();
    void on_button_eight_clicked();
    void on_button_nine_clicked();

    //operations

    void on_button_add_clicked();
    void on_button_subtract_clicked();
    void on_button_multiply_clicked();
    void on_button_division_clicked();

    //functions
    void on_button_equal_clicked();
    void on_button_clear_clicked();

    //calculation
    int calculation();



private:
    Ui::MainWindow *ui;
    int num1;
    int num2;
    int operation;
    int total;
    QString number1;
    QString number2;
};

#endif // MAINWINDOW_H
