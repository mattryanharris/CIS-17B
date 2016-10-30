/********************************************************************************
** Form generated from reading UI file 'battleship.ui'
**
** Created by: Qt User Interface Compiler version 5.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_BATTLESHIP_H
#define UI_BATTLESHIP_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_battleship
{
public:
    QTableWidget *playerGrid;

    void setupUi(QWidget *battleship)
    {
        if (battleship->objectName().isEmpty())
            battleship->setObjectName(QStringLiteral("battleship"));
        battleship->resize(1162, 448);
        battleship->setMaximumSize(QSize(16777215, 16777215));
        playerGrid = new QTableWidget(battleship);
        if (playerGrid->columnCount() < 10)
            playerGrid->setColumnCount(10);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        playerGrid->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        playerGrid->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        playerGrid->setHorizontalHeaderItem(2, __qtablewidgetitem2);
        QTableWidgetItem *__qtablewidgetitem3 = new QTableWidgetItem();
        playerGrid->setHorizontalHeaderItem(3, __qtablewidgetitem3);
        QTableWidgetItem *__qtablewidgetitem4 = new QTableWidgetItem();
        playerGrid->setHorizontalHeaderItem(4, __qtablewidgetitem4);
        QTableWidgetItem *__qtablewidgetitem5 = new QTableWidgetItem();
        playerGrid->setHorizontalHeaderItem(5, __qtablewidgetitem5);
        QTableWidgetItem *__qtablewidgetitem6 = new QTableWidgetItem();
        playerGrid->setHorizontalHeaderItem(6, __qtablewidgetitem6);
        QTableWidgetItem *__qtablewidgetitem7 = new QTableWidgetItem();
        playerGrid->setHorizontalHeaderItem(7, __qtablewidgetitem7);
        QTableWidgetItem *__qtablewidgetitem8 = new QTableWidgetItem();
        playerGrid->setHorizontalHeaderItem(8, __qtablewidgetitem8);
        QTableWidgetItem *__qtablewidgetitem9 = new QTableWidgetItem();
        playerGrid->setHorizontalHeaderItem(9, __qtablewidgetitem9);
        if (playerGrid->rowCount() < 10)
            playerGrid->setRowCount(10);
        QTableWidgetItem *__qtablewidgetitem10 = new QTableWidgetItem();
        playerGrid->setVerticalHeaderItem(0, __qtablewidgetitem10);
        QTableWidgetItem *__qtablewidgetitem11 = new QTableWidgetItem();
        playerGrid->setVerticalHeaderItem(1, __qtablewidgetitem11);
        QTableWidgetItem *__qtablewidgetitem12 = new QTableWidgetItem();
        playerGrid->setVerticalHeaderItem(2, __qtablewidgetitem12);
        QTableWidgetItem *__qtablewidgetitem13 = new QTableWidgetItem();
        playerGrid->setVerticalHeaderItem(3, __qtablewidgetitem13);
        QTableWidgetItem *__qtablewidgetitem14 = new QTableWidgetItem();
        playerGrid->setVerticalHeaderItem(4, __qtablewidgetitem14);
        QTableWidgetItem *__qtablewidgetitem15 = new QTableWidgetItem();
        playerGrid->setVerticalHeaderItem(5, __qtablewidgetitem15);
        QTableWidgetItem *__qtablewidgetitem16 = new QTableWidgetItem();
        playerGrid->setVerticalHeaderItem(6, __qtablewidgetitem16);
        QTableWidgetItem *__qtablewidgetitem17 = new QTableWidgetItem();
        playerGrid->setVerticalHeaderItem(7, __qtablewidgetitem17);
        QTableWidgetItem *__qtablewidgetitem18 = new QTableWidgetItem();
        playerGrid->setVerticalHeaderItem(8, __qtablewidgetitem18);
        QTableWidgetItem *__qtablewidgetitem19 = new QTableWidgetItem();
        playerGrid->setVerticalHeaderItem(9, __qtablewidgetitem19);
        playerGrid->setObjectName(QStringLiteral("playerGrid"));
        playerGrid->setGeometry(QRect(30, 60, 494, 343));
        QSizePolicy sizePolicy(QSizePolicy::MinimumExpanding, QSizePolicy::Minimum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(playerGrid->sizePolicy().hasHeightForWidth());
        playerGrid->setSizePolicy(sizePolicy);
        playerGrid->setMaximumSize(QSize(16777215, 16777215));
        playerGrid->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        playerGrid->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        playerGrid->setSizeAdjustPolicy(QAbstractScrollArea::AdjustToContents);
        playerGrid->setAutoScroll(false);
        playerGrid->setEditTriggers(QAbstractItemView::NoEditTriggers);
        playerGrid->setDragEnabled(true);
        playerGrid->setDragDropMode(QAbstractItemView::DropOnly);
        playerGrid->setAlternatingRowColors(false);
        playerGrid->setSelectionMode(QAbstractItemView::SingleSelection);
        playerGrid->setTextElideMode(Qt::ElideMiddle);
        playerGrid->setShowGrid(true);
        playerGrid->setGridStyle(Qt::SolidLine);
        playerGrid->setSortingEnabled(false);
        playerGrid->setWordWrap(false);
        playerGrid->setCornerButtonEnabled(false);
        playerGrid->horizontalHeader()->setDefaultSectionSize(47);
        playerGrid->verticalHeader()->setDefaultSectionSize(32);

        retranslateUi(battleship);

        QMetaObject::connectSlotsByName(battleship);
    } // setupUi

    void retranslateUi(QWidget *battleship)
    {
        battleship->setWindowTitle(QApplication::translate("battleship", "battleship", 0));
        QTableWidgetItem *___qtablewidgetitem = playerGrid->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QApplication::translate("battleship", "A", 0));
        QTableWidgetItem *___qtablewidgetitem1 = playerGrid->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QApplication::translate("battleship", "B", 0));
        QTableWidgetItem *___qtablewidgetitem2 = playerGrid->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QApplication::translate("battleship", "C", 0));
        QTableWidgetItem *___qtablewidgetitem3 = playerGrid->horizontalHeaderItem(3);
        ___qtablewidgetitem3->setText(QApplication::translate("battleship", "D", 0));
        QTableWidgetItem *___qtablewidgetitem4 = playerGrid->horizontalHeaderItem(4);
        ___qtablewidgetitem4->setText(QApplication::translate("battleship", "E", 0));
        QTableWidgetItem *___qtablewidgetitem5 = playerGrid->horizontalHeaderItem(5);
        ___qtablewidgetitem5->setText(QApplication::translate("battleship", "F", 0));
        QTableWidgetItem *___qtablewidgetitem6 = playerGrid->horizontalHeaderItem(6);
        ___qtablewidgetitem6->setText(QApplication::translate("battleship", "G", 0));
        QTableWidgetItem *___qtablewidgetitem7 = playerGrid->horizontalHeaderItem(7);
        ___qtablewidgetitem7->setText(QApplication::translate("battleship", "H", 0));
        QTableWidgetItem *___qtablewidgetitem8 = playerGrid->horizontalHeaderItem(8);
        ___qtablewidgetitem8->setText(QApplication::translate("battleship", "I", 0));
        QTableWidgetItem *___qtablewidgetitem9 = playerGrid->horizontalHeaderItem(9);
        ___qtablewidgetitem9->setText(QApplication::translate("battleship", "J", 0));
        QTableWidgetItem *___qtablewidgetitem10 = playerGrid->verticalHeaderItem(0);
        ___qtablewidgetitem10->setText(QApplication::translate("battleship", "1", 0));
        QTableWidgetItem *___qtablewidgetitem11 = playerGrid->verticalHeaderItem(1);
        ___qtablewidgetitem11->setText(QApplication::translate("battleship", "2", 0));
        QTableWidgetItem *___qtablewidgetitem12 = playerGrid->verticalHeaderItem(2);
        ___qtablewidgetitem12->setText(QApplication::translate("battleship", "3", 0));
        QTableWidgetItem *___qtablewidgetitem13 = playerGrid->verticalHeaderItem(3);
        ___qtablewidgetitem13->setText(QApplication::translate("battleship", "4", 0));
        QTableWidgetItem *___qtablewidgetitem14 = playerGrid->verticalHeaderItem(4);
        ___qtablewidgetitem14->setText(QApplication::translate("battleship", "5", 0));
        QTableWidgetItem *___qtablewidgetitem15 = playerGrid->verticalHeaderItem(5);
        ___qtablewidgetitem15->setText(QApplication::translate("battleship", "6", 0));
        QTableWidgetItem *___qtablewidgetitem16 = playerGrid->verticalHeaderItem(6);
        ___qtablewidgetitem16->setText(QApplication::translate("battleship", "7", 0));
        QTableWidgetItem *___qtablewidgetitem17 = playerGrid->verticalHeaderItem(7);
        ___qtablewidgetitem17->setText(QApplication::translate("battleship", "8", 0));
        QTableWidgetItem *___qtablewidgetitem18 = playerGrid->verticalHeaderItem(8);
        ___qtablewidgetitem18->setText(QApplication::translate("battleship", "9", 0));
        QTableWidgetItem *___qtablewidgetitem19 = playerGrid->verticalHeaderItem(9);
        ___qtablewidgetitem19->setText(QApplication::translate("battleship", "10", 0));
    } // retranslateUi

};

namespace Ui {
    class battleship: public Ui_battleship {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_BATTLESHIP_H
