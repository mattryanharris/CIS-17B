#ifndef WARNING_H
#define WARNING_H

#include <QWidget>
#include <QPushButton>

class warning : public QWidget
{
    Q_OBJECT
public:
    explicit warning(QWidget *parent = 0);

private:
    QPushButton button;

signals:

public slots:
};

#endif // WARNING_H
