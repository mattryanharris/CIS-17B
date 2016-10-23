/********************************************************************************
** Form generated from reading UI file 'widget.ui'
**
** Created by: Qt User Interface Compiler version 5.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WIDGET_H
#define UI_WIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Widget
{
public:
    QTableWidget *tableWidget;
    QLabel *displayLabel;
    QLabel *label;
    QLabel *title;
    QLabel *gameDescription;
    QPushButton *startButton;
    QPushButton *setPoint;

    void setupUi(QWidget *Widget)
    {
        if (Widget->objectName().isEmpty())
            Widget->setObjectName(QStringLiteral("Widget"));
        Widget->resize(742, 555);
        tableWidget = new QTableWidget(Widget);
        if (tableWidget->columnCount() < 10)
            tableWidget->setColumnCount(10);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(2, __qtablewidgetitem2);
        QTableWidgetItem *__qtablewidgetitem3 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(3, __qtablewidgetitem3);
        QTableWidgetItem *__qtablewidgetitem4 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(4, __qtablewidgetitem4);
        QTableWidgetItem *__qtablewidgetitem5 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(5, __qtablewidgetitem5);
        QTableWidgetItem *__qtablewidgetitem6 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(6, __qtablewidgetitem6);
        QTableWidgetItem *__qtablewidgetitem7 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(7, __qtablewidgetitem7);
        QTableWidgetItem *__qtablewidgetitem8 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(8, __qtablewidgetitem8);
        QTableWidgetItem *__qtablewidgetitem9 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(9, __qtablewidgetitem9);
        if (tableWidget->rowCount() < 10)
            tableWidget->setRowCount(10);
        QTableWidgetItem *__qtablewidgetitem10 = new QTableWidgetItem();
        tableWidget->setVerticalHeaderItem(0, __qtablewidgetitem10);
        QTableWidgetItem *__qtablewidgetitem11 = new QTableWidgetItem();
        tableWidget->setVerticalHeaderItem(1, __qtablewidgetitem11);
        QTableWidgetItem *__qtablewidgetitem12 = new QTableWidgetItem();
        tableWidget->setVerticalHeaderItem(2, __qtablewidgetitem12);
        QTableWidgetItem *__qtablewidgetitem13 = new QTableWidgetItem();
        tableWidget->setVerticalHeaderItem(3, __qtablewidgetitem13);
        QTableWidgetItem *__qtablewidgetitem14 = new QTableWidgetItem();
        tableWidget->setVerticalHeaderItem(4, __qtablewidgetitem14);
        QTableWidgetItem *__qtablewidgetitem15 = new QTableWidgetItem();
        tableWidget->setVerticalHeaderItem(5, __qtablewidgetitem15);
        QTableWidgetItem *__qtablewidgetitem16 = new QTableWidgetItem();
        tableWidget->setVerticalHeaderItem(6, __qtablewidgetitem16);
        QTableWidgetItem *__qtablewidgetitem17 = new QTableWidgetItem();
        tableWidget->setVerticalHeaderItem(7, __qtablewidgetitem17);
        QTableWidgetItem *__qtablewidgetitem18 = new QTableWidgetItem();
        tableWidget->setVerticalHeaderItem(8, __qtablewidgetitem18);
        QTableWidgetItem *__qtablewidgetitem19 = new QTableWidgetItem();
        tableWidget->setVerticalHeaderItem(9, __qtablewidgetitem19);
        tableWidget->setObjectName(QStringLiteral("tableWidget"));
        tableWidget->setGeometry(QRect(20, 20, 451, 335));
        tableWidget->setFrameShape(QFrame::VLine);
        tableWidget->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        tableWidget->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        tableWidget->setSizeAdjustPolicy(QAbstractScrollArea::AdjustToContentsOnFirstShow);
        tableWidget->horizontalHeader()->setDefaultSectionSize(43);
        tableWidget->verticalHeader()->setDefaultSectionSize(31);
        tableWidget->verticalHeader()->setHighlightSections(true);
        tableWidget->verticalHeader()->setMinimumSectionSize(19);
        displayLabel = new QLabel(Widget);
        displayLabel->setObjectName(QStringLiteral("displayLabel"));
        displayLabel->setGeometry(QRect(20, 360, 91, 16));
        QFont font;
        font.setBold(true);
        font.setWeight(75);
        displayLabel->setFont(font);
        label = new QLabel(Widget);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(110, 360, 371, 16));
        title = new QLabel(Widget);
        title->setObjectName(QStringLiteral("title"));
        title->setGeometry(QRect(540, 20, 111, 41));
        QFont font1;
        font1.setPointSize(25);
        title->setFont(font1);
        gameDescription = new QLabel(Widget);
        gameDescription->setObjectName(QStringLiteral("gameDescription"));
        gameDescription->setGeometry(QRect(510, 60, 201, 51));
        startButton = new QPushButton(Widget);
        startButton->setObjectName(QStringLiteral("startButton"));
        startButton->setGeometry(QRect(10, 400, 113, 32));
        setPoint = new QPushButton(Widget);
        setPoint->setObjectName(QStringLiteral("setPoint"));
        setPoint->setGeometry(QRect(580, 400, 113, 32));

        retranslateUi(Widget);

        QMetaObject::connectSlotsByName(Widget);
    } // setupUi

    void retranslateUi(QWidget *Widget)
    {
        Widget->setWindowTitle(QApplication::translate("Widget", "Widget", 0));
        QTableWidgetItem *___qtablewidgetitem = tableWidget->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QApplication::translate("Widget", "1", 0));
        QTableWidgetItem *___qtablewidgetitem1 = tableWidget->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QApplication::translate("Widget", "2", 0));
        QTableWidgetItem *___qtablewidgetitem2 = tableWidget->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QApplication::translate("Widget", "3", 0));
        QTableWidgetItem *___qtablewidgetitem3 = tableWidget->horizontalHeaderItem(3);
        ___qtablewidgetitem3->setText(QApplication::translate("Widget", "4", 0));
        QTableWidgetItem *___qtablewidgetitem4 = tableWidget->horizontalHeaderItem(4);
        ___qtablewidgetitem4->setText(QApplication::translate("Widget", "5", 0));
        QTableWidgetItem *___qtablewidgetitem5 = tableWidget->horizontalHeaderItem(5);
        ___qtablewidgetitem5->setText(QApplication::translate("Widget", "6", 0));
        QTableWidgetItem *___qtablewidgetitem6 = tableWidget->horizontalHeaderItem(6);
        ___qtablewidgetitem6->setText(QApplication::translate("Widget", "7", 0));
        QTableWidgetItem *___qtablewidgetitem7 = tableWidget->horizontalHeaderItem(7);
        ___qtablewidgetitem7->setText(QApplication::translate("Widget", "8", 0));
        QTableWidgetItem *___qtablewidgetitem8 = tableWidget->horizontalHeaderItem(8);
        ___qtablewidgetitem8->setText(QApplication::translate("Widget", "9", 0));
        QTableWidgetItem *___qtablewidgetitem9 = tableWidget->horizontalHeaderItem(9);
        ___qtablewidgetitem9->setText(QApplication::translate("Widget", "10", 0));
        QTableWidgetItem *___qtablewidgetitem10 = tableWidget->verticalHeaderItem(0);
        ___qtablewidgetitem10->setText(QApplication::translate("Widget", "A", 0));
        QTableWidgetItem *___qtablewidgetitem11 = tableWidget->verticalHeaderItem(1);
        ___qtablewidgetitem11->setText(QApplication::translate("Widget", "B", 0));
        QTableWidgetItem *___qtablewidgetitem12 = tableWidget->verticalHeaderItem(2);
        ___qtablewidgetitem12->setText(QApplication::translate("Widget", "C", 0));
        QTableWidgetItem *___qtablewidgetitem13 = tableWidget->verticalHeaderItem(3);
        ___qtablewidgetitem13->setText(QApplication::translate("Widget", "D", 0));
        QTableWidgetItem *___qtablewidgetitem14 = tableWidget->verticalHeaderItem(4);
        ___qtablewidgetitem14->setText(QApplication::translate("Widget", "E", 0));
        QTableWidgetItem *___qtablewidgetitem15 = tableWidget->verticalHeaderItem(5);
        ___qtablewidgetitem15->setText(QApplication::translate("Widget", "F", 0));
        QTableWidgetItem *___qtablewidgetitem16 = tableWidget->verticalHeaderItem(6);
        ___qtablewidgetitem16->setText(QApplication::translate("Widget", "G", 0));
        QTableWidgetItem *___qtablewidgetitem17 = tableWidget->verticalHeaderItem(7);
        ___qtablewidgetitem17->setText(QApplication::translate("Widget", "H", 0));
        QTableWidgetItem *___qtablewidgetitem18 = tableWidget->verticalHeaderItem(8);
        ___qtablewidgetitem18->setText(QApplication::translate("Widget", "I", 0));
        QTableWidgetItem *___qtablewidgetitem19 = tableWidget->verticalHeaderItem(9);
        ___qtablewidgetitem19->setText(QApplication::translate("Widget", "J", 0));
        displayLabel->setText(QApplication::translate("Widget", "Coordinates:", 0));
        label->setText(QString());
        title->setText(QApplication::translate("Widget", "Battleship", 0));
        gameDescription->setText(QApplication::translate("Widget", "TextLabel", 0));
        startButton->setText(QApplication::translate("Widget", "Start", 0));
        setPoint->setText(QApplication::translate("Widget", "Set", 0));
    } // retranslateUi

};

namespace Ui {
    class Widget: public Ui_Widget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WIDGET_H
