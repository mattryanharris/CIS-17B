#ifndef ATM_H
#define ATM_H

#include <QWidget>

namespace Ui {
class ATM;
}

class ATM : public QWidget
{
    Q_OBJECT

public:
    explicit ATM(QWidget *parent = 0);
    ~ATM();

private:
    Ui::ATM *ui;
};

#endif // ATM_H
